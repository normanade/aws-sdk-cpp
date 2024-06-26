﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/BatchStopJobRunSuccessfulSubmission.h>
#include <aws/glue/model/BatchStopJobRunError.h>
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
  class BatchStopJobRunResult
  {
  public:
    AWS_GLUE_API BatchStopJobRunResult();
    AWS_GLUE_API BatchStopJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchStopJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the JobRuns that were successfully submitted for stopping.</p>
     */
    inline const Aws::Vector<BatchStopJobRunSuccessfulSubmission>& GetSuccessfulSubmissions() const{ return m_successfulSubmissions; }
    inline void SetSuccessfulSubmissions(const Aws::Vector<BatchStopJobRunSuccessfulSubmission>& value) { m_successfulSubmissions = value; }
    inline void SetSuccessfulSubmissions(Aws::Vector<BatchStopJobRunSuccessfulSubmission>&& value) { m_successfulSubmissions = std::move(value); }
    inline BatchStopJobRunResult& WithSuccessfulSubmissions(const Aws::Vector<BatchStopJobRunSuccessfulSubmission>& value) { SetSuccessfulSubmissions(value); return *this;}
    inline BatchStopJobRunResult& WithSuccessfulSubmissions(Aws::Vector<BatchStopJobRunSuccessfulSubmission>&& value) { SetSuccessfulSubmissions(std::move(value)); return *this;}
    inline BatchStopJobRunResult& AddSuccessfulSubmissions(const BatchStopJobRunSuccessfulSubmission& value) { m_successfulSubmissions.push_back(value); return *this; }
    inline BatchStopJobRunResult& AddSuccessfulSubmissions(BatchStopJobRunSuccessfulSubmission&& value) { m_successfulSubmissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the errors that were encountered in trying to stop
     * <code>JobRuns</code>, including the <code>JobRunId</code> for which each error
     * was encountered and details about the error.</p>
     */
    inline const Aws::Vector<BatchStopJobRunError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchStopJobRunError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchStopJobRunError>&& value) { m_errors = std::move(value); }
    inline BatchStopJobRunResult& WithErrors(const Aws::Vector<BatchStopJobRunError>& value) { SetErrors(value); return *this;}
    inline BatchStopJobRunResult& WithErrors(Aws::Vector<BatchStopJobRunError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchStopJobRunResult& AddErrors(const BatchStopJobRunError& value) { m_errors.push_back(value); return *this; }
    inline BatchStopJobRunResult& AddErrors(BatchStopJobRunError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchStopJobRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchStopJobRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchStopJobRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchStopJobRunSuccessfulSubmission> m_successfulSubmissions;

    Aws::Vector<BatchStopJobRunError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
