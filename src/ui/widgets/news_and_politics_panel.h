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

#ifndef BEAM_NEWS_AND_POLITICS_PANEL_H
#define BEAM_NEWS_AND_POLITICS_PANEL_H


#include <vector>
#include <wx/wx.h>
#include <entities/podcast.h>
#include <modules/discovery_panel_manager.h>

class NewsAndPoliticsPanel : public wxScrolledWindow {
private:
    wxBoxSizer * mainSizer;
    std::vector<Podcast> podcasts;

    void setupFirstRow();
    void setupSecondRow();
public:
    NewsAndPoliticsPanel(wxWindow * parent, DiscoveryPanelManager & panelManager);
};


#endif //BEAM_NEWS_AND_POLITICS_PANEL_H
