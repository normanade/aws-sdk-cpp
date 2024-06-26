﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/UnprocessedAutomationRule.h>
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
namespace SecurityHub
{
namespace Model
{
  class BatchDeleteAutomationRulesResult
  {
  public:
    AWS_SECURITYHUB_API BatchDeleteAutomationRulesResult();
    AWS_SECURITYHUB_API BatchDeleteAutomationRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchDeleteAutomationRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of properly processed rule ARNs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProcessedAutomationRules() const{ return m_processedAutomationRules; }
    inline void SetProcessedAutomationRules(const Aws::Vector<Aws::String>& value) { m_processedAutomationRules = value; }
    inline void SetProcessedAutomationRules(Aws::Vector<Aws::String>&& value) { m_processedAutomationRules = std::move(value); }
    inline BatchDeleteAutomationRulesResult& WithProcessedAutomationRules(const Aws::Vector<Aws::String>& value) { SetProcessedAutomationRules(value); return *this;}
    inline BatchDeleteAutomationRulesResult& WithProcessedAutomationRules(Aws::Vector<Aws::String>&& value) { SetProcessedAutomationRules(std::move(value)); return *this;}
    inline BatchDeleteAutomationRulesResult& AddProcessedAutomationRules(const Aws::String& value) { m_processedAutomationRules.push_back(value); return *this; }
    inline BatchDeleteAutomationRulesResult& AddProcessedAutomationRules(Aws::String&& value) { m_processedAutomationRules.push_back(std::move(value)); return *this; }
    inline BatchDeleteAutomationRulesResult& AddProcessedAutomationRules(const char* value) { m_processedAutomationRules.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of objects containing <code>RuleArn</code>, <code>ErrorCode</code>,
     * and <code>ErrorMessage</code>. This parameter tells you which automation rules
     * the request didn't delete and why. </p>
     */
    inline const Aws::Vector<UnprocessedAutomationRule>& GetUnprocessedAutomationRules() const{ return m_unprocessedAutomationRules; }
    inline void SetUnprocessedAutomationRules(const Aws::Vector<UnprocessedAutomationRule>& value) { m_unprocessedAutomationRules = value; }
    inline void SetUnprocessedAutomationRules(Aws::Vector<UnprocessedAutomationRule>&& value) { m_unprocessedAutomationRules = std::move(value); }
    inline BatchDeleteAutomationRulesResult& WithUnprocessedAutomationRules(const Aws::Vector<UnprocessedAutomationRule>& value) { SetUnprocessedAutomationRules(value); return *this;}
    inline BatchDeleteAutomationRulesResult& WithUnprocessedAutomationRules(Aws::Vector<UnprocessedAutomationRule>&& value) { SetUnprocessedAutomationRules(std::move(value)); return *this;}
    inline BatchDeleteAutomationRulesResult& AddUnprocessedAutomationRules(const UnprocessedAutomationRule& value) { m_unprocessedAutomationRules.push_back(value); return *this; }
    inline BatchDeleteAutomationRulesResult& AddUnprocessedAutomationRules(UnprocessedAutomationRule&& value) { m_unprocessedAutomationRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteAutomationRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteAutomationRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteAutomationRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_processedAutomationRules;

    Aws::Vector<UnprocessedAutomationRule> m_unprocessedAutomationRules;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
