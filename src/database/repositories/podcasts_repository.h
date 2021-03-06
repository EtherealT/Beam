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

#ifndef BEAM_PODCASTS_REPOSITORY_H
#define BEAM_PODCASTS_REPOSITORY_H

#include <vector>
#include <entities/podcast.h>
#include <database/databasemanager.h>

class PodcastsRepository {
private:
    DatabaseManager databaseManager;

    static int getListCallback(void *data, int argc, char **argv, char **columnName);
    static int getSingleCallback(void *data, int argc, char **argv, char **columnName);
public:
    PodcastsRepository();
    ~PodcastsRepository();
    void insert(Podcast podcast);
    Podcast getById(long & id);
    std::vector<Podcast> getAll();
    void deleteById(long & id);
    void deleteAll();
};

#endif //BEAM_PODCASTS_REPOSITORY_H
