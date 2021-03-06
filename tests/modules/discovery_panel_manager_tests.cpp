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

#define CATCH_CONFIG_MAIN

#include <vector>
#include <catch/catch.hpp>
#include <modules/discovery_panel_manager.h>

TEST_CASE("get top podcasts test", "[discoveryPanelManagerTests]") {
    DiscoveryPanelManager discoveryPanelManager;
    std::vector<Podcast> podcasts = discoveryPanelManager.getTopPodcasts();
    REQUIRE_FALSE(podcasts.empty());
}

TEST_CASE("get society and culture podcasts test", "[discoveryPanelManagerTests]") {
    DiscoveryPanelManager discoveryPanelManager;
    std::vector<Podcast> podcasts = discoveryPanelManager.getSocietyAndCulturePodcasts();
    REQUIRE_FALSE(podcasts.empty());
}

TEST_CASE("get news and politics podcasts test", "[discoveryPanelManagerTests]") {
    DiscoveryPanelManager discoveryPanelManager;
    std::vector<Podcast> podcasts = discoveryPanelManager.getNewsAndPoliticsPodcasts();
    REQUIRE_FALSE(podcasts.empty());
}

TEST_CASE("get comedy podcasts test", "[discoveryPanelManagerTests]") {
    DiscoveryPanelManager discoveryPanelManager;
    std::vector<Podcast> podcasts = discoveryPanelManager.getComedyPodcasts();
    REQUIRE_FALSE(podcasts.empty());
}

