﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/FirewallRule.h>
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
namespace Route53Resolver
{
namespace Model
{
  class ListFirewallRulesResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallRulesResult();
    AWS_ROUTE53RESOLVER_API ListFirewallRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListFirewallRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFirewallRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFirewallRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFirewallRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the rules that you have defined. </p> <p>This might be a partial
     * list of the firewall rules that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline const Aws::Vector<FirewallRule>& GetFirewallRules() const{ return m_firewallRules; }
    inline void SetFirewallRules(const Aws::Vector<FirewallRule>& value) { m_firewallRules = value; }
    inline void SetFirewallRules(Aws::Vector<FirewallRule>&& value) { m_firewallRules = std::move(value); }
    inline ListFirewallRulesResult& WithFirewallRules(const Aws::Vector<FirewallRule>& value) { SetFirewallRules(value); return *this;}
    inline ListFirewallRulesResult& WithFirewallRules(Aws::Vector<FirewallRule>&& value) { SetFirewallRules(std::move(value)); return *this;}
    inline ListFirewallRulesResult& AddFirewallRules(const FirewallRule& value) { m_firewallRules.push_back(value); return *this; }
    inline ListFirewallRulesResult& AddFirewallRules(FirewallRule&& value) { m_firewallRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFirewallRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFirewallRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFirewallRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<FirewallRule> m_firewallRules;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
