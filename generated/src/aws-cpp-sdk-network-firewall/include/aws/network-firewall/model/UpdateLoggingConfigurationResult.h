﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/LoggingConfiguration.h>
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
  class UpdateLoggingConfigurationResult
  {
  public:
    AWS_NETWORKFIREWALL_API UpdateLoggingConfigurationResult();
    AWS_NETWORKFIREWALL_API UpdateLoggingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API UpdateLoggingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const{ return m_firewallArn; }
    inline void SetFirewallArn(const Aws::String& value) { m_firewallArn = value; }
    inline void SetFirewallArn(Aws::String&& value) { m_firewallArn = std::move(value); }
    inline void SetFirewallArn(const char* value) { m_firewallArn.assign(value); }
    inline UpdateLoggingConfigurationResult& WithFirewallArn(const Aws::String& value) { SetFirewallArn(value); return *this;}
    inline UpdateLoggingConfigurationResult& WithFirewallArn(Aws::String&& value) { SetFirewallArn(std::move(value)); return *this;}
    inline UpdateLoggingConfigurationResult& WithFirewallArn(const char* value) { SetFirewallArn(value); return *this;}
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
    inline UpdateLoggingConfigurationResult& WithFirewallName(const Aws::String& value) { SetFirewallName(value); return *this;}
    inline UpdateLoggingConfigurationResult& WithFirewallName(Aws::String&& value) { SetFirewallName(std::move(value)); return *this;}
    inline UpdateLoggingConfigurationResult& WithFirewallName(const char* value) { SetFirewallName(value); return *this;}
    ///@}

    ///@{
    
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfiguration = value; }
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfiguration = std::move(value); }
    inline UpdateLoggingConfigurationResult& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}
    inline UpdateLoggingConfigurationResult& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateLoggingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateLoggingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateLoggingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_firewallArn;

    Aws::String m_firewallName;

    LoggingConfiguration m_loggingConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
