/**
 * Copyright (c) 2011-2015 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * libbitcoin is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN_NODE_SESSION_MANUAL_HPP
#define LIBBITCOIN_NODE_SESSION_MANUAL_HPP

#include <memory>
#include <bitcoin/node/define.hpp>
#include <bitcoin/network.hpp>

namespace libbitcoin {
namespace node {

/// Manual connections session, thread safe.
class BCN_API session_manual
  : public network::session_manual
{
public:
    typedef std::shared_ptr<session_manual> ptr;

    /// Construct an instance.
    session_manual(network::p2p& network);

protected:
    /// Overridden to attach blockchain protocols.
    void attach_protocols(network::channel::ptr channel) override;
};

} // namespace node
} // namespace libbitcoin

#endif
