﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DatasetImportJobSummary.h>
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
namespace ForecastService
{
namespace Model
{
  class ListDatasetImportJobsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListDatasetImportJobsResult();
    AWS_FORECASTSERVICE_API ListDatasetImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListDatasetImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that summarize each dataset import job's properties.</p>
     */
    inline const Aws::Vector<DatasetImportJobSummary>& GetDatasetImportJobs() const{ return m_datasetImportJobs; }
    inline void SetDatasetImportJobs(const Aws::Vector<DatasetImportJobSummary>& value) { m_datasetImportJobs = value; }
    inline void SetDatasetImportJobs(Aws::Vector<DatasetImportJobSummary>&& value) { m_datasetImportJobs = std::move(value); }
    inline ListDatasetImportJobsResult& WithDatasetImportJobs(const Aws::Vector<DatasetImportJobSummary>& value) { SetDatasetImportJobs(value); return *this;}
    inline ListDatasetImportJobsResult& WithDatasetImportJobs(Aws::Vector<DatasetImportJobSummary>&& value) { SetDatasetImportJobs(std::move(value)); return *this;}
    inline ListDatasetImportJobsResult& AddDatasetImportJobs(const DatasetImportJobSummary& value) { m_datasetImportJobs.push_back(value); return *this; }
    inline ListDatasetImportJobsResult& AddDatasetImportJobs(DatasetImportJobSummary&& value) { m_datasetImportJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDatasetImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDatasetImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDatasetImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDatasetImportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDatasetImportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDatasetImportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DatasetImportJobSummary> m_datasetImportJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
