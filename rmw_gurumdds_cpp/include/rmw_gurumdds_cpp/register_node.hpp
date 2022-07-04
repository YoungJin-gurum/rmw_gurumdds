// Copyright 2022 GurumNetworks, Inc.
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

#ifndef RMW_GURUMDDS_CPP__REGISTER_NODE_HPP_
#define RMW_GURUMDDS_CPP__REGISTER_NODE_HPP_

#include "rmw/init.h"
#include "rmw/types.h"

namespace rmw_gurumdds_cpp
{

// Register node to context
rmw_ret_t
register_node(rmw_context_t * context);

// Unregister node from context
rmw_ret_t
unregister_node(rmw_context_t * context);

}  // namespace rmw_gurumdds_cpp

#endif  // RMW_GURUMDDS_CPP__REGISTER_NODE_HPP_
