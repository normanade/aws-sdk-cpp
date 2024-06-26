﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/DataIngestionJobSummary.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ListDataIngestionJobsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListDataIngestionJobsResult();
    AWS_LOOKOUTEQUIPMENT_API ListDataIngestionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListDataIngestionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An opaque pagination token indicating where to continue the listing of data
     * ingestion jobs. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataIngestionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataIngestionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataIngestionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information about the specific data ingestion job, including
     * dataset name and status. </p>
     */
    inline const Aws::Vector<DataIngestionJobSummary>& GetDataIngestionJobSummaries() const{ return m_dataIngestionJobSummaries; }
    inline void SetDataIngestionJobSummaries(const Aws::Vector<DataIngestionJobSummary>& value) { m_dataIngestionJobSummaries = value; }
    inline void SetDataIngestionJobSummaries(Aws::Vector<DataIngestionJobSummary>&& value) { m_dataIngestionJobSummaries = std::move(value); }
    inline ListDataIngestionJobsResult& WithDataIngestionJobSummaries(const Aws::Vector<DataIngestionJobSummary>& value) { SetDataIngestionJobSummaries(value); return *this;}
    inline ListDataIngestionJobsResult& WithDataIngestionJobSummaries(Aws::Vector<DataIngestionJobSummary>&& value) { SetDataIngestionJobSummaries(std::move(value)); return *this;}
    inline ListDataIngestionJobsResult& AddDataIngestionJobSummaries(const DataIngestionJobSummary& value) { m_dataIngestionJobSummaries.push_back(value); return *this; }
    inline ListDataIngestionJobsResult& AddDataIngestionJobSummaries(DataIngestionJobSummary&& value) { m_dataIngestionJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataIngestionJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataIngestionJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataIngestionJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<DataIngestionJobSummary> m_dataIngestionJobSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
