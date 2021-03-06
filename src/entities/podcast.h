/*
 *  Copyright 2018 Oluwatobi Adeyinka
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

#ifndef BEAM_PODCAST_H
#define BEAM_PODCAST_H

#include <string>
#include <rapidjson/include/rapidjson/document.h>

class Podcast {
private:
    const long id;
    const std::string title;
    const std::string publisher;
    const std::string feedUrl;
    std::string description;
    const std::string imageUrl;
    std::string localImageDir = "";
    std::string url;
public:
    Podcast(long & id, std::string & title, std::string & publisher, std::string & feedUrl, std::string & description, std::string & imageUrl, std::string & url);
    ~Podcast();
    long getId();
    std::string getTitle();
    std::string getPublisher();
    std::string getFeedUrl();
    std::string getDescription();
    void setDescription(std::string & description);
    std::string getImageUrl();
    std::string getLocalImageDir();
    void setLocalImageDir(std::string & dir);
    std::string getUrl();
    void setUrl(std::string & url);
};

#endif
