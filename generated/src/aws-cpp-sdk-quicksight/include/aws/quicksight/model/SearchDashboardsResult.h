﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DashboardSummary.h>
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
namespace QuickSight
{
namespace Model
{
  class SearchDashboardsResult
  {
  public:
    AWS_QUICKSIGHT_API SearchDashboardsResult();
    AWS_QUICKSIGHT_API SearchDashboardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API SearchDashboardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of dashboards owned by the user specified in <code>Filters</code> in
     * your request.</p>
     */
    inline const Aws::Vector<DashboardSummary>& GetDashboardSummaryList() const{ return m_dashboardSummaryList; }
    inline void SetDashboardSummaryList(const Aws::Vector<DashboardSummary>& value) { m_dashboardSummaryList = value; }
    inline void SetDashboardSummaryList(Aws::Vector<DashboardSummary>&& value) { m_dashboardSummaryList = std::move(value); }
    inline SearchDashboardsResult& WithDashboardSummaryList(const Aws::Vector<DashboardSummary>& value) { SetDashboardSummaryList(value); return *this;}
    inline SearchDashboardsResult& WithDashboardSummaryList(Aws::Vector<DashboardSummary>&& value) { SetDashboardSummaryList(std::move(value)); return *this;}
    inline SearchDashboardsResult& AddDashboardSummaryList(const DashboardSummary& value) { m_dashboardSummaryList.push_back(value); return *this; }
    inline SearchDashboardsResult& AddDashboardSummaryList(DashboardSummary&& value) { m_dashboardSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchDashboardsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchDashboardsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchDashboardsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline SearchDashboardsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchDashboardsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchDashboardsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchDashboardsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DashboardSummary> m_dashboardSummaryList;

    Aws::String m_nextToken;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
