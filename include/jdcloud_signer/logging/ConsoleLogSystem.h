// Copyright 2018 JDCLOUD.COM
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// NOTE: This file is modified from AWS V4 Signer algorithm.

#pragma once

#include "jdcloud_signer/logging/FormattedLogSystem.h"

namespace jdcloud_signer {

/**
 * Log system interface that logs to std::cout
 */
class ConsoleLogSystem : public FormattedLogSystem
{
public:
    using Base = FormattedLogSystem;

    ConsoleLogSystem(LogLevel logLevel) :
        Base(logLevel)
    {}

    virtual ~ConsoleLogSystem() {}

protected:
    void ProcessFormattedStatement(std::string&& statement) override;
};

}
