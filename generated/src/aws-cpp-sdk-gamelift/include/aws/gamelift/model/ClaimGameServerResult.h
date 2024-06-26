﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/GameServer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{
  class ClaimGameServerResult
  {
  public:
    AWS_GAMELIFT_API ClaimGameServerResult();
    AWS_GAMELIFT_API ClaimGameServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ClaimGameServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Object that describes the newly claimed game server.</p>
     */
    inline const GameServer& GetGameServer() const{ return m_gameServer; }
    inline void SetGameServer(const GameServer& value) { m_gameServer = value; }
    inline void SetGameServer(GameServer&& value) { m_gameServer = std::move(value); }
    inline ClaimGameServerResult& WithGameServer(const GameServer& value) { SetGameServer(value); return *this;}
    inline ClaimGameServerResult& WithGameServer(GameServer&& value) { SetGameServer(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ClaimGameServerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ClaimGameServerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ClaimGameServerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    GameServer m_gameServer;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
