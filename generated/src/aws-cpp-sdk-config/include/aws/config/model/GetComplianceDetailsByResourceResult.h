﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/EvaluationResult.h>
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
namespace ConfigService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByResourceResponse">AWS
   * API Reference</a></p>
   */
  class GetComplianceDetailsByResourceResult
  {
  public:
    AWS_CONFIGSERVICE_API GetComplianceDetailsByResourceResult();
    AWS_CONFIGSERVICE_API GetComplianceDetailsByResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetComplianceDetailsByResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether the specified Amazon Web Services resource complies each
     * Config rule.</p>
     */
    inline const Aws::Vector<EvaluationResult>& GetEvaluationResults() const{ return m_evaluationResults; }
    inline void SetEvaluationResults(const Aws::Vector<EvaluationResult>& value) { m_evaluationResults = value; }
    inline void SetEvaluationResults(Aws::Vector<EvaluationResult>&& value) { m_evaluationResults = std::move(value); }
    inline GetComplianceDetailsByResourceResult& WithEvaluationResults(const Aws::Vector<EvaluationResult>& value) { SetEvaluationResults(value); return *this;}
    inline GetComplianceDetailsByResourceResult& WithEvaluationResults(Aws::Vector<EvaluationResult>&& value) { SetEvaluationResults(std::move(value)); return *this;}
    inline GetComplianceDetailsByResourceResult& AddEvaluationResults(const EvaluationResult& value) { m_evaluationResults.push_back(value); return *this; }
    inline GetComplianceDetailsByResourceResult& AddEvaluationResults(EvaluationResult&& value) { m_evaluationResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetComplianceDetailsByResourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetComplianceDetailsByResourceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetComplianceDetailsByResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetComplianceDetailsByResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetComplianceDetailsByResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetComplianceDetailsByResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EvaluationResult> m_evaluationResults;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
