﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/FailedRemediationExceptionBatch.h>
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
  class PutRemediationExceptionsResult
  {
  public:
    AWS_CONFIGSERVICE_API PutRemediationExceptionsResult();
    AWS_CONFIGSERVICE_API PutRemediationExceptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutRemediationExceptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of failed remediation exceptions batch objects. Each object in
     * the batch consists of a list of failed items and failure messages.</p>
     */
    inline const Aws::Vector<FailedRemediationExceptionBatch>& GetFailedBatches() const{ return m_failedBatches; }
    inline void SetFailedBatches(const Aws::Vector<FailedRemediationExceptionBatch>& value) { m_failedBatches = value; }
    inline void SetFailedBatches(Aws::Vector<FailedRemediationExceptionBatch>&& value) { m_failedBatches = std::move(value); }
    inline PutRemediationExceptionsResult& WithFailedBatches(const Aws::Vector<FailedRemediationExceptionBatch>& value) { SetFailedBatches(value); return *this;}
    inline PutRemediationExceptionsResult& WithFailedBatches(Aws::Vector<FailedRemediationExceptionBatch>&& value) { SetFailedBatches(std::move(value)); return *this;}
    inline PutRemediationExceptionsResult& AddFailedBatches(const FailedRemediationExceptionBatch& value) { m_failedBatches.push_back(value); return *this; }
    inline PutRemediationExceptionsResult& AddFailedBatches(FailedRemediationExceptionBatch&& value) { m_failedBatches.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutRemediationExceptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutRemediationExceptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutRemediationExceptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FailedRemediationExceptionBatch> m_failedBatches;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
