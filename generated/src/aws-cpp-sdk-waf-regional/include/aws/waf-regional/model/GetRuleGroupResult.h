﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/RuleGroup.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WAFRegional
{
namespace Model
{
  class GetRuleGroupResult
  {
  public:
    AWS_WAFREGIONAL_API GetRuleGroupResult();
    AWS_WAFREGIONAL_API GetRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <a>RuleGroup</a> that you specified in the
     * <code>GetRuleGroup</code> request. </p>
     */
    inline const RuleGroup& GetRuleGroup() const{ return m_ruleGroup; }
    inline void SetRuleGroup(const RuleGroup& value) { m_ruleGroup = value; }
    inline void SetRuleGroup(RuleGroup&& value) { m_ruleGroup = std::move(value); }
    inline GetRuleGroupResult& WithRuleGroup(const RuleGroup& value) { SetRuleGroup(value); return *this;}
    inline GetRuleGroupResult& WithRuleGroup(RuleGroup&& value) { SetRuleGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRuleGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRuleGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRuleGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RuleGroup m_ruleGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
