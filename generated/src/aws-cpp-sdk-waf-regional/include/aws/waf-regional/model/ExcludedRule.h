﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFRegional
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>The rule to exclude from
   * a rule group. This is applicable only when the <code>ActivatedRule</code> refers
   * to a <code>RuleGroup</code>. The rule must belong to the <code>RuleGroup</code>
   * that is specified by the <code>ActivatedRule</code>. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ExcludedRule">AWS
   * API Reference</a></p>
   */
  class ExcludedRule
  {
  public:
    AWS_WAFREGIONAL_API ExcludedRule();
    AWS_WAFREGIONAL_API ExcludedRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API ExcludedRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }
    inline ExcludedRule& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}
    inline ExcludedRule& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}
    inline ExcludedRule& WithRuleId(const char* value) { SetRuleId(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
