﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/ListedFlow.h>
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
namespace MediaConnect
{
namespace Model
{
  class ListFlowsResult
  {
  public:
    AWS_MEDIACONNECT_API ListFlowsResult();
    AWS_MEDIACONNECT_API ListFlowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API ListFlowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A list of flow summaries.
     */
    inline const Aws::Vector<ListedFlow>& GetFlows() const{ return m_flows; }
    inline void SetFlows(const Aws::Vector<ListedFlow>& value) { m_flows = value; }
    inline void SetFlows(Aws::Vector<ListedFlow>&& value) { m_flows = std::move(value); }
    inline ListFlowsResult& WithFlows(const Aws::Vector<ListedFlow>& value) { SetFlows(value); return *this;}
    inline ListFlowsResult& WithFlows(Aws::Vector<ListedFlow>&& value) { SetFlows(std::move(value)); return *this;}
    inline ListFlowsResult& AddFlows(const ListedFlow& value) { m_flows.push_back(value); return *this; }
    inline ListFlowsResult& AddFlows(ListedFlow&& value) { m_flows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListFlows request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListFlows request a second time and
     * specify the NextToken value.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFlowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFlowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFlowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFlowsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFlowsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFlowsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ListedFlow> m_flows;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
