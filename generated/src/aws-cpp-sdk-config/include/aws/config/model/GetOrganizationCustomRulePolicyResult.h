﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{
  class GetOrganizationCustomRulePolicyResult
  {
  public:
    AWS_CONFIGSERVICE_API GetOrganizationCustomRulePolicyResult();
    AWS_CONFIGSERVICE_API GetOrganizationCustomRulePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetOrganizationCustomRulePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The policy definition containing the logic for your organization Config
     * Custom Policy rule.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }
    inline void SetPolicyText(const Aws::String& value) { m_policyText = value; }
    inline void SetPolicyText(Aws::String&& value) { m_policyText = std::move(value); }
    inline void SetPolicyText(const char* value) { m_policyText.assign(value); }
    inline GetOrganizationCustomRulePolicyResult& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}
    inline GetOrganizationCustomRulePolicyResult& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}
    inline GetOrganizationCustomRulePolicyResult& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetOrganizationCustomRulePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetOrganizationCustomRulePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetOrganizationCustomRulePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_policyText;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
