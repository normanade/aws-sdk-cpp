﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/SecurityProfileSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListSecurityProfilesResult
  {
  public:
    AWS_CONNECT_API ListSecurityProfilesResult();
    AWS_CONNECT_API ListSecurityProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListSecurityProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the security profiles.</p>
     */
    inline const Aws::Vector<SecurityProfileSummary>& GetSecurityProfileSummaryList() const{ return m_securityProfileSummaryList; }
    inline void SetSecurityProfileSummaryList(const Aws::Vector<SecurityProfileSummary>& value) { m_securityProfileSummaryList = value; }
    inline void SetSecurityProfileSummaryList(Aws::Vector<SecurityProfileSummary>&& value) { m_securityProfileSummaryList = std::move(value); }
    inline ListSecurityProfilesResult& WithSecurityProfileSummaryList(const Aws::Vector<SecurityProfileSummary>& value) { SetSecurityProfileSummaryList(value); return *this;}
    inline ListSecurityProfilesResult& WithSecurityProfileSummaryList(Aws::Vector<SecurityProfileSummary>&& value) { SetSecurityProfileSummaryList(std::move(value)); return *this;}
    inline ListSecurityProfilesResult& AddSecurityProfileSummaryList(const SecurityProfileSummary& value) { m_securityProfileSummaryList.push_back(value); return *this; }
    inline ListSecurityProfilesResult& AddSecurityProfileSummaryList(SecurityProfileSummary&& value) { m_securityProfileSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSecurityProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSecurityProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSecurityProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSecurityProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSecurityProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSecurityProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityProfileSummary> m_securityProfileSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
