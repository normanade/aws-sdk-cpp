﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/Evaluation.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutEvaluationsResponse">AWS
   * API Reference</a></p>
   */
  class PutEvaluationsResult
  {
  public:
    AWS_CONFIGSERVICE_API PutEvaluationsResult();
    AWS_CONFIGSERVICE_API PutEvaluationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutEvaluationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Requests that failed because of a client or server error.</p>
     */
    inline const Aws::Vector<Evaluation>& GetFailedEvaluations() const{ return m_failedEvaluations; }
    inline void SetFailedEvaluations(const Aws::Vector<Evaluation>& value) { m_failedEvaluations = value; }
    inline void SetFailedEvaluations(Aws::Vector<Evaluation>&& value) { m_failedEvaluations = std::move(value); }
    inline PutEvaluationsResult& WithFailedEvaluations(const Aws::Vector<Evaluation>& value) { SetFailedEvaluations(value); return *this;}
    inline PutEvaluationsResult& WithFailedEvaluations(Aws::Vector<Evaluation>&& value) { SetFailedEvaluations(std::move(value)); return *this;}
    inline PutEvaluationsResult& AddFailedEvaluations(const Evaluation& value) { m_failedEvaluations.push_back(value); return *this; }
    inline PutEvaluationsResult& AddFailedEvaluations(Evaluation&& value) { m_failedEvaluations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutEvaluationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutEvaluationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutEvaluationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Evaluation> m_failedEvaluations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
