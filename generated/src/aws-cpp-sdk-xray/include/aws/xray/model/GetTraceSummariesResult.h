﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/TraceSummary.h>
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
namespace XRay
{
namespace Model
{
  class GetTraceSummariesResult
  {
  public:
    AWS_XRAY_API GetTraceSummariesResult();
    AWS_XRAY_API GetTraceSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetTraceSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Trace IDs and annotations for traces that were found in the specified time
     * frame.</p>
     */
    inline const Aws::Vector<TraceSummary>& GetTraceSummaries() const{ return m_traceSummaries; }
    inline void SetTraceSummaries(const Aws::Vector<TraceSummary>& value) { m_traceSummaries = value; }
    inline void SetTraceSummaries(Aws::Vector<TraceSummary>&& value) { m_traceSummaries = std::move(value); }
    inline GetTraceSummariesResult& WithTraceSummaries(const Aws::Vector<TraceSummary>& value) { SetTraceSummaries(value); return *this;}
    inline GetTraceSummariesResult& WithTraceSummaries(Aws::Vector<TraceSummary>&& value) { SetTraceSummaries(std::move(value)); return *this;}
    inline GetTraceSummariesResult& AddTraceSummaries(const TraceSummary& value) { m_traceSummaries.push_back(value); return *this; }
    inline GetTraceSummariesResult& AddTraceSummaries(TraceSummary&& value) { m_traceSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The start time of this page of results.</p>
     */
    inline const Aws::Utils::DateTime& GetApproximateTime() const{ return m_approximateTime; }
    inline void SetApproximateTime(const Aws::Utils::DateTime& value) { m_approximateTime = value; }
    inline void SetApproximateTime(Aws::Utils::DateTime&& value) { m_approximateTime = std::move(value); }
    inline GetTraceSummariesResult& WithApproximateTime(const Aws::Utils::DateTime& value) { SetApproximateTime(value); return *this;}
    inline GetTraceSummariesResult& WithApproximateTime(Aws::Utils::DateTime&& value) { SetApproximateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of traces processed, including traces that did not match the
     * specified filter expression.</p>
     */
    inline long long GetTracesProcessedCount() const{ return m_tracesProcessedCount; }
    inline void SetTracesProcessedCount(long long value) { m_tracesProcessedCount = value; }
    inline GetTraceSummariesResult& WithTracesProcessedCount(long long value) { SetTracesProcessedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the requested time frame contained more than one page of results, you can
     * use this token to retrieve the next page. The first page contains the most
     * recent results, closest to the end of the time frame.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetTraceSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetTraceSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetTraceSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTraceSummariesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTraceSummariesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTraceSummariesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TraceSummary> m_traceSummaries;

    Aws::Utils::DateTime m_approximateTime;

    long long m_tracesProcessedCount;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
