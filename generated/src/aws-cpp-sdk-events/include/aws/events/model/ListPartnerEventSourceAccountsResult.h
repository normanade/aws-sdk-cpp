﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/PartnerEventSourceAccount.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class ListPartnerEventSourceAccountsResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ListPartnerEventSourceAccountsResult();
    AWS_CLOUDWATCHEVENTS_API ListPartnerEventSourceAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API ListPartnerEventSourceAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline const Aws::Vector<PartnerEventSourceAccount>& GetPartnerEventSourceAccounts() const{ return m_partnerEventSourceAccounts; }
    inline void SetPartnerEventSourceAccounts(const Aws::Vector<PartnerEventSourceAccount>& value) { m_partnerEventSourceAccounts = value; }
    inline void SetPartnerEventSourceAccounts(Aws::Vector<PartnerEventSourceAccount>&& value) { m_partnerEventSourceAccounts = std::move(value); }
    inline ListPartnerEventSourceAccountsResult& WithPartnerEventSourceAccounts(const Aws::Vector<PartnerEventSourceAccount>& value) { SetPartnerEventSourceAccounts(value); return *this;}
    inline ListPartnerEventSourceAccountsResult& WithPartnerEventSourceAccounts(Aws::Vector<PartnerEventSourceAccount>&& value) { SetPartnerEventSourceAccounts(std::move(value)); return *this;}
    inline ListPartnerEventSourceAccountsResult& AddPartnerEventSourceAccounts(const PartnerEventSourceAccount& value) { m_partnerEventSourceAccounts.push_back(value); return *this; }
    inline ListPartnerEventSourceAccountsResult& AddPartnerEventSourceAccounts(PartnerEventSourceAccount&& value) { m_partnerEventSourceAccounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPartnerEventSourceAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPartnerEventSourceAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPartnerEventSourceAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPartnerEventSourceAccountsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPartnerEventSourceAccountsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPartnerEventSourceAccountsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PartnerEventSourceAccount> m_partnerEventSourceAccounts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
