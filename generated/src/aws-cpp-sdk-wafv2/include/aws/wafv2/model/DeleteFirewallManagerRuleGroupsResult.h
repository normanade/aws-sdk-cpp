﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{
  class DeleteFirewallManagerRuleGroupsResult
  {
  public:
    AWS_WAFV2_API DeleteFirewallManagerRuleGroupsResult();
    AWS_WAFV2_API DeleteFirewallManagerRuleGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API DeleteFirewallManagerRuleGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline const Aws::String& GetNextWebACLLockToken() const{ return m_nextWebACLLockToken; }
    inline void SetNextWebACLLockToken(const Aws::String& value) { m_nextWebACLLockToken = value; }
    inline void SetNextWebACLLockToken(Aws::String&& value) { m_nextWebACLLockToken = std::move(value); }
    inline void SetNextWebACLLockToken(const char* value) { m_nextWebACLLockToken.assign(value); }
    inline DeleteFirewallManagerRuleGroupsResult& WithNextWebACLLockToken(const Aws::String& value) { SetNextWebACLLockToken(value); return *this;}
    inline DeleteFirewallManagerRuleGroupsResult& WithNextWebACLLockToken(Aws::String&& value) { SetNextWebACLLockToken(std::move(value)); return *this;}
    inline DeleteFirewallManagerRuleGroupsResult& WithNextWebACLLockToken(const char* value) { SetNextWebACLLockToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteFirewallManagerRuleGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteFirewallManagerRuleGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteFirewallManagerRuleGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextWebACLLockToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
