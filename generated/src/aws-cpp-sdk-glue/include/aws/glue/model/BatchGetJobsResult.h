﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Job.h>
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
namespace Glue
{
namespace Model
{
  class BatchGetJobsResult
  {
  public:
    AWS_GLUE_API BatchGetJobsResult();
    AWS_GLUE_API BatchGetJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of job definitions.</p>
     */
    inline const Aws::Vector<Job>& GetJobs() const{ return m_jobs; }
    inline void SetJobs(const Aws::Vector<Job>& value) { m_jobs = value; }
    inline void SetJobs(Aws::Vector<Job>&& value) { m_jobs = std::move(value); }
    inline BatchGetJobsResult& WithJobs(const Aws::Vector<Job>& value) { SetJobs(value); return *this;}
    inline BatchGetJobsResult& WithJobs(Aws::Vector<Job>&& value) { SetJobs(std::move(value)); return *this;}
    inline BatchGetJobsResult& AddJobs(const Job& value) { m_jobs.push_back(value); return *this; }
    inline BatchGetJobsResult& AddJobs(Job&& value) { m_jobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of names of jobs not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobsNotFound() const{ return m_jobsNotFound; }
    inline void SetJobsNotFound(const Aws::Vector<Aws::String>& value) { m_jobsNotFound = value; }
    inline void SetJobsNotFound(Aws::Vector<Aws::String>&& value) { m_jobsNotFound = std::move(value); }
    inline BatchGetJobsResult& WithJobsNotFound(const Aws::Vector<Aws::String>& value) { SetJobsNotFound(value); return *this;}
    inline BatchGetJobsResult& WithJobsNotFound(Aws::Vector<Aws::String>&& value) { SetJobsNotFound(std::move(value)); return *this;}
    inline BatchGetJobsResult& AddJobsNotFound(const Aws::String& value) { m_jobsNotFound.push_back(value); return *this; }
    inline BatchGetJobsResult& AddJobsNotFound(Aws::String&& value) { m_jobsNotFound.push_back(std::move(value)); return *this; }
    inline BatchGetJobsResult& AddJobsNotFound(const char* value) { m_jobsNotFound.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Job> m_jobs;

    Aws::Vector<Aws::String> m_jobsNotFound;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
