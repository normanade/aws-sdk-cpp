﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/model/MobileDeviceAccessRuleEffect.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MobileDeviceAccessMatchedRule.h>
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
namespace WorkMail
{
namespace Model
{
  class GetMobileDeviceAccessEffectResult
  {
  public:
    AWS_WORKMAIL_API GetMobileDeviceAccessEffectResult();
    AWS_WORKMAIL_API GetMobileDeviceAccessEffectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetMobileDeviceAccessEffectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The effect of the simulated access, <code>ALLOW</code> or <code>DENY</code>,
     * after evaluating mobile device access rules in the WorkMail organization for the
     * simulated user parameters.</p>
     */
    inline const MobileDeviceAccessRuleEffect& GetEffect() const{ return m_effect; }
    inline void SetEffect(const MobileDeviceAccessRuleEffect& value) { m_effect = value; }
    inline void SetEffect(MobileDeviceAccessRuleEffect&& value) { m_effect = std::move(value); }
    inline GetMobileDeviceAccessEffectResult& WithEffect(const MobileDeviceAccessRuleEffect& value) { SetEffect(value); return *this;}
    inline GetMobileDeviceAccessEffectResult& WithEffect(MobileDeviceAccessRuleEffect&& value) { SetEffect(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the rules which matched the simulated user input and produced the
     * effect.</p>
     */
    inline const Aws::Vector<MobileDeviceAccessMatchedRule>& GetMatchedRules() const{ return m_matchedRules; }
    inline void SetMatchedRules(const Aws::Vector<MobileDeviceAccessMatchedRule>& value) { m_matchedRules = value; }
    inline void SetMatchedRules(Aws::Vector<MobileDeviceAccessMatchedRule>&& value) { m_matchedRules = std::move(value); }
    inline GetMobileDeviceAccessEffectResult& WithMatchedRules(const Aws::Vector<MobileDeviceAccessMatchedRule>& value) { SetMatchedRules(value); return *this;}
    inline GetMobileDeviceAccessEffectResult& WithMatchedRules(Aws::Vector<MobileDeviceAccessMatchedRule>&& value) { SetMatchedRules(std::move(value)); return *this;}
    inline GetMobileDeviceAccessEffectResult& AddMatchedRules(const MobileDeviceAccessMatchedRule& value) { m_matchedRules.push_back(value); return *this; }
    inline GetMobileDeviceAccessEffectResult& AddMatchedRules(MobileDeviceAccessMatchedRule&& value) { m_matchedRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMobileDeviceAccessEffectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMobileDeviceAccessEffectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMobileDeviceAccessEffectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MobileDeviceAccessRuleEffect m_effect;

    Aws::Vector<MobileDeviceAccessMatchedRule> m_matchedRules;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
