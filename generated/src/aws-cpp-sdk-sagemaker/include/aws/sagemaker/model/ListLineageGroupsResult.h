﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/LineageGroupSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListLineageGroupsResult
  {
  public:
    AWS_SAGEMAKER_API ListLineageGroupsResult();
    AWS_SAGEMAKER_API ListLineageGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListLineageGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of lineage groups and their properties.</p>
     */
    inline const Aws::Vector<LineageGroupSummary>& GetLineageGroupSummaries() const{ return m_lineageGroupSummaries; }
    inline void SetLineageGroupSummaries(const Aws::Vector<LineageGroupSummary>& value) { m_lineageGroupSummaries = value; }
    inline void SetLineageGroupSummaries(Aws::Vector<LineageGroupSummary>&& value) { m_lineageGroupSummaries = std::move(value); }
    inline ListLineageGroupsResult& WithLineageGroupSummaries(const Aws::Vector<LineageGroupSummary>& value) { SetLineageGroupSummaries(value); return *this;}
    inline ListLineageGroupsResult& WithLineageGroupSummaries(Aws::Vector<LineageGroupSummary>&& value) { SetLineageGroupSummaries(std::move(value)); return *this;}
    inline ListLineageGroupsResult& AddLineageGroupSummaries(const LineageGroupSummary& value) { m_lineageGroupSummaries.push_back(value); return *this; }
    inline ListLineageGroupsResult& AddLineageGroupSummaries(LineageGroupSummary&& value) { m_lineageGroupSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of algorithms, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLineageGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLineageGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLineageGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLineageGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLineageGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLineageGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LineageGroupSummary> m_lineageGroupSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
