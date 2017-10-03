#!/usr/bin/env bash

#
#  Copyright 2017 Oluwatobi Adeyinka
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#

mkdir lib && cd lib && mkdir catch && cd catch && touch catch.hpp && touch catch.cpp
curl -L https://github.com/philsquared/Catch/releases/download/v1.10.0/catch.hpp >> catch.hpp

cd .. && curl -L https://sqlite.org/2017/sqlite-autoconf-3200100.tar.gz | tar zx
mv sqlite-autoconf-3200100/ sqlite/
cd sqlite && mkdir build-debug && cd build-debug && ../configure && make && cd ../..

if [ "$(expr substr $(uname -s) 1 5)" == "Linux" ]; then # linux
    curl -L https://github.com/wxWidgets/wxWidgets/releases/download/v3.0.3.1/wxWidgets-3.0.3.1.zip -o wxWidgets.zip
    mkdir wxWidgets
    unzip wxWidgets.zip -d wxWidgets
    rm -rf wxWidgets.zip
    cd wxWidgets
    mkdir build-debug
    cd build-debug
    ../configure --enable-debug --enable-monolithic
    make
    cd ../../..
fi