﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/MemberDetail.h>
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
namespace Detective
{
namespace Model
{
  class ListInvitationsResult
  {
  public:
    AWS_DETECTIVE_API ListInvitationsResult();
    AWS_DETECTIVE_API ListInvitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API ListInvitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of behavior graphs for which the member account has open or accepted
     * invitations.</p>
     */
    inline const Aws::Vector<MemberDetail>& GetInvitations() const{ return m_invitations; }
    inline void SetInvitations(const Aws::Vector<MemberDetail>& value) { m_invitations = value; }
    inline void SetInvitations(Aws::Vector<MemberDetail>&& value) { m_invitations = std::move(value); }
    inline ListInvitationsResult& WithInvitations(const Aws::Vector<MemberDetail>& value) { SetInvitations(value); return *this;}
    inline ListInvitationsResult& WithInvitations(Aws::Vector<MemberDetail>&& value) { SetInvitations(std::move(value)); return *this;}
    inline ListInvitationsResult& AddInvitations(const MemberDetail& value) { m_invitations.push_back(value); return *this; }
    inline ListInvitationsResult& AddInvitations(MemberDetail&& value) { m_invitations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more behavior graphs remaining in the results, then this is the
     * pagination token to use to request the next page of behavior graphs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListInvitationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInvitationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInvitationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInvitationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInvitationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInvitationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MemberDetail> m_invitations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
