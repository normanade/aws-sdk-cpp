﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DataSourceSummary.h>
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
namespace kendra
{
namespace Model
{
  class ListDataSourcesResult
  {
  public:
    AWS_KENDRA_API ListDataSourcesResult();
    AWS_KENDRA_API ListDataSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListDataSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of summary information for one or more data source connector.</p>
     */
    inline const Aws::Vector<DataSourceSummary>& GetSummaryItems() const{ return m_summaryItems; }
    inline void SetSummaryItems(const Aws::Vector<DataSourceSummary>& value) { m_summaryItems = value; }
    inline void SetSummaryItems(Aws::Vector<DataSourceSummary>&& value) { m_summaryItems = std::move(value); }
    inline ListDataSourcesResult& WithSummaryItems(const Aws::Vector<DataSourceSummary>& value) { SetSummaryItems(value); return *this;}
    inline ListDataSourcesResult& WithSummaryItems(Aws::Vector<DataSourceSummary>&& value) { SetSummaryItems(std::move(value)); return *this;}
    inline ListDataSourcesResult& AddSummaryItems(const DataSourceSummary& value) { m_summaryItems.push_back(value); return *this; }
    inline ListDataSourcesResult& AddSummaryItems(DataSourceSummary&& value) { m_summaryItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of data source
     * connectors.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataSourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataSourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataSourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DataSourceSummary> m_summaryItems;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
