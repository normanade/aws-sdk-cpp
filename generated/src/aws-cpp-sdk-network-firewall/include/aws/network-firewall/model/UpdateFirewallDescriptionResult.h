﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class UpdateFirewallDescriptionResult
  {
  public:
    AWS_NETWORKFIREWALL_API UpdateFirewallDescriptionResult();
    AWS_NETWORKFIREWALL_API UpdateFirewallDescriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API UpdateFirewallDescriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const{ return m_firewallArn; }
    inline void SetFirewallArn(const Aws::String& value) { m_firewallArn = value; }
    inline void SetFirewallArn(Aws::String&& value) { m_firewallArn = std::move(value); }
    inline void SetFirewallArn(const char* value) { m_firewallArn.assign(value); }
    inline UpdateFirewallDescriptionResult& WithFirewallArn(const Aws::String& value) { SetFirewallArn(value); return *this;}
    inline UpdateFirewallDescriptionResult& WithFirewallArn(Aws::String&& value) { SetFirewallArn(std::move(value)); return *this;}
    inline UpdateFirewallDescriptionResult& WithFirewallArn(const char* value) { SetFirewallArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline const Aws::String& GetFirewallName() const{ return m_firewallName; }
    inline void SetFirewallName(const Aws::String& value) { m_firewallName = value; }
    inline void SetFirewallName(Aws::String&& value) { m_firewallName = std::move(value); }
    inline void SetFirewallName(const char* value) { m_firewallName.assign(value); }
    inline UpdateFirewallDescriptionResult& WithFirewallName(const Aws::String& value) { SetFirewallName(value); return *this;}
    inline UpdateFirewallDescriptionResult& WithFirewallName(Aws::String&& value) { SetFirewallName(std::move(value)); return *this;}
    inline UpdateFirewallDescriptionResult& WithFirewallName(const char* value) { SetFirewallName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the firewall.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateFirewallDescriptionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateFirewallDescriptionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateFirewallDescriptionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional token that you can use for optimistic locking. Network Firewall
     * returns a token to your requests that access the firewall. The token marks the
     * state of the firewall resource at the time of the request. </p> <p>To make an
     * unconditional change to the firewall, omit the token in your update request.
     * Without the token, Network Firewall performs your updates regardless of whether
     * the firewall has changed since you last retrieved it.</p> <p>To make a
     * conditional change to the firewall, provide the token in your update request.
     * Network Firewall uses the token to ensure that the firewall hasn't changed since
     * you last retrieved it. If it has changed, the operation fails with an
     * <code>InvalidTokenException</code>. If this happens, retrieve the firewall again
     * to get a current copy of it with a new token. Reapply your changes as needed,
     * then try the operation again using the new token. </p>
     */
    inline const Aws::String& GetUpdateToken() const{ return m_updateToken; }
    inline void SetUpdateToken(const Aws::String& value) { m_updateToken = value; }
    inline void SetUpdateToken(Aws::String&& value) { m_updateToken = std::move(value); }
    inline void SetUpdateToken(const char* value) { m_updateToken.assign(value); }
    inline UpdateFirewallDescriptionResult& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}
    inline UpdateFirewallDescriptionResult& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}
    inline UpdateFirewallDescriptionResult& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateFirewallDescriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateFirewallDescriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateFirewallDescriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_firewallArn;

    Aws::String m_firewallName;

    Aws::String m_description;

    Aws::String m_updateToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
