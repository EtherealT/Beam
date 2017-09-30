/*
 *  Copyright 2017 Oluwatobi Adeyinka
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */

#ifndef BEAM_DATABASEMANAGER_H
#define BEAM_DATABASEMANAGER_H

#include <iostream>
#include <sqlite3.h>

class DatabaseManager {
private:
    std::string DATABASE_FILE = "db/Beam.sqlite";
    sqlite3 * database = nullptr;
public:
    DatabaseManager();
    ~DatabaseManager();
    sqlite3 * openDatabase();
    void closeDatabase();
};

#endif //BEAM_DATABASEMANAGER_H