﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelMembershipForAppInstanceUserSummary.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{
  class ListChannelMembershipsForAppInstanceUserResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API ListChannelMembershipsForAppInstanceUserResult();
    AWS_CHIMESDKMESSAGING_API ListChannelMembershipsForAppInstanceUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API ListChannelMembershipsForAppInstanceUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information for the requested channel memberships.</p>
     */
    inline const Aws::Vector<ChannelMembershipForAppInstanceUserSummary>& GetChannelMemberships() const{ return m_channelMemberships; }
    inline void SetChannelMemberships(const Aws::Vector<ChannelMembershipForAppInstanceUserSummary>& value) { m_channelMemberships = value; }
    inline void SetChannelMemberships(Aws::Vector<ChannelMembershipForAppInstanceUserSummary>&& value) { m_channelMemberships = std::move(value); }
    inline ListChannelMembershipsForAppInstanceUserResult& WithChannelMemberships(const Aws::Vector<ChannelMembershipForAppInstanceUserSummary>& value) { SetChannelMemberships(value); return *this;}
    inline ListChannelMembershipsForAppInstanceUserResult& WithChannelMemberships(Aws::Vector<ChannelMembershipForAppInstanceUserSummary>&& value) { SetChannelMemberships(std::move(value)); return *this;}
    inline ListChannelMembershipsForAppInstanceUserResult& AddChannelMemberships(const ChannelMembershipForAppInstanceUserSummary& value) { m_channelMemberships.push_back(value); return *this; }
    inline ListChannelMembershipsForAppInstanceUserResult& AddChannelMemberships(ChannelMembershipForAppInstanceUserSummary&& value) { m_channelMemberships.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListChannelMembershipsForAppInstanceUserResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListChannelMembershipsForAppInstanceUserResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListChannelMembershipsForAppInstanceUserResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListChannelMembershipsForAppInstanceUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListChannelMembershipsForAppInstanceUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListChannelMembershipsForAppInstanceUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ChannelMembershipForAppInstanceUserSummary> m_channelMemberships;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
