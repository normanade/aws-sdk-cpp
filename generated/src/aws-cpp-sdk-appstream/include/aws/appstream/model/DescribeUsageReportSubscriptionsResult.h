﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/UsageReportSubscription.h>
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
namespace AppStream
{
namespace Model
{
  class DescribeUsageReportSubscriptionsResult
  {
  public:
    AWS_APPSTREAM_API DescribeUsageReportSubscriptionsResult();
    AWS_APPSTREAM_API DescribeUsageReportSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeUsageReportSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the usage report subscription.</p>
     */
    inline const Aws::Vector<UsageReportSubscription>& GetUsageReportSubscriptions() const{ return m_usageReportSubscriptions; }
    inline void SetUsageReportSubscriptions(const Aws::Vector<UsageReportSubscription>& value) { m_usageReportSubscriptions = value; }
    inline void SetUsageReportSubscriptions(Aws::Vector<UsageReportSubscription>&& value) { m_usageReportSubscriptions = std::move(value); }
    inline DescribeUsageReportSubscriptionsResult& WithUsageReportSubscriptions(const Aws::Vector<UsageReportSubscription>& value) { SetUsageReportSubscriptions(value); return *this;}
    inline DescribeUsageReportSubscriptionsResult& WithUsageReportSubscriptions(Aws::Vector<UsageReportSubscription>&& value) { SetUsageReportSubscriptions(std::move(value)); return *this;}
    inline DescribeUsageReportSubscriptionsResult& AddUsageReportSubscriptions(const UsageReportSubscription& value) { m_usageReportSubscriptions.push_back(value); return *this; }
    inline DescribeUsageReportSubscriptionsResult& AddUsageReportSubscriptions(UsageReportSubscription&& value) { m_usageReportSubscriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeUsageReportSubscriptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeUsageReportSubscriptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeUsageReportSubscriptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeUsageReportSubscriptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeUsageReportSubscriptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeUsageReportSubscriptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<UsageReportSubscription> m_usageReportSubscriptions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
