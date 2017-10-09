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

#include <sstream>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Options.hpp>
#include "network_utils.h"

/*
 * Query the passed string url and return the response as a
 * string
 */
std::string NetworkUtils::query(std::string & url) {
    std::ostringstream os;
    curlpp::Cleanup curlppCleanup;

    try {
        os << curlpp::options::Url(url);
    } catch (const std::exception & e) {
        std::stringstream ss;
        ss << "Error querying url: " << e.what();
        throw ss.str();
    }

    return  os.str();
}
