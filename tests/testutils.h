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

#ifndef BEAM_TESTUTILS_H
#define BEAM_TESTUTILS_H

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <entities/podcast.h>
#include <entities/episode.h>

namespace TestUtils {
    bool isValidUUID(const boost::uuids::uuid & id);
    void emptyDatabase();
    Podcast createPodcastForTest(long & id);
    Episode createEpisodeForTest(long & podcastId, boost::uuids::uuid & episodeId);
}

#endif //BEAM_TESTUTILS_H
