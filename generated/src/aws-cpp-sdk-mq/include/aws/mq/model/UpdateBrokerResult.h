﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/AuthenticationStrategy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/ConfigurationId.h>
#include <aws/mq/model/LdapServerMetadataOutput.h>
#include <aws/mq/model/Logs.h>
#include <aws/mq/model/WeeklyStartTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/DataReplicationMetadataOutput.h>
#include <aws/mq/model/DataReplicationMode.h>
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
namespace MQ
{
namespace Model
{
  class UpdateBrokerResult
  {
  public:
    AWS_MQ_API UpdateBrokerResult();
    AWS_MQ_API UpdateBrokerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API UpdateBrokerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Optional. The authentication strategy used to secure the broker. The default
     * is SIMPLE.</p>
     */
    inline const AuthenticationStrategy& GetAuthenticationStrategy() const{ return m_authenticationStrategy; }
    inline void SetAuthenticationStrategy(const AuthenticationStrategy& value) { m_authenticationStrategy = value; }
    inline void SetAuthenticationStrategy(AuthenticationStrategy&& value) { m_authenticationStrategy = std::move(value); }
    inline UpdateBrokerResult& WithAuthenticationStrategy(const AuthenticationStrategy& value) { SetAuthenticationStrategy(value); return *this;}
    inline UpdateBrokerResult& WithAuthenticationStrategy(AuthenticationStrategy&& value) { SetAuthenticationStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables automatic upgrades to new patch versions for brokers as new versions
     * are released and supported by Amazon MQ. Automatic upgrades occur during the
     * scheduled maintenance window or after a manual broker reboot.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgrade = value; }
    inline UpdateBrokerResult& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }
    inline void SetBrokerId(const Aws::String& value) { m_brokerId = value; }
    inline void SetBrokerId(Aws::String&& value) { m_brokerId = std::move(value); }
    inline void SetBrokerId(const char* value) { m_brokerId.assign(value); }
    inline UpdateBrokerResult& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}
    inline UpdateBrokerResult& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}
    inline UpdateBrokerResult& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the updated configuration.</p>
     */
    inline const ConfigurationId& GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const ConfigurationId& value) { m_configuration = value; }
    inline void SetConfiguration(ConfigurationId&& value) { m_configuration = std::move(value); }
    inline UpdateBrokerResult& WithConfiguration(const ConfigurationId& value) { SetConfiguration(value); return *this;}
    inline UpdateBrokerResult& WithConfiguration(ConfigurationId&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker engine version to upgrade to. For more information, see the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/activemq-version-management.html">ActiveMQ
     * version management</a> and the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/rabbitmq-version-management.html">RabbitMQ
     * version management</a> sections in the Amazon MQ Developer Guide.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersion.assign(value); }
    inline UpdateBrokerResult& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline UpdateBrokerResult& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline UpdateBrokerResult& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceType = value; }
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceType = std::move(value); }
    inline void SetHostInstanceType(const char* value) { m_hostInstanceType.assign(value); }
    inline UpdateBrokerResult& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}
    inline UpdateBrokerResult& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}
    inline UpdateBrokerResult& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline const LdapServerMetadataOutput& GetLdapServerMetadata() const{ return m_ldapServerMetadata; }
    inline void SetLdapServerMetadata(const LdapServerMetadataOutput& value) { m_ldapServerMetadata = value; }
    inline void SetLdapServerMetadata(LdapServerMetadataOutput&& value) { m_ldapServerMetadata = std::move(value); }
    inline UpdateBrokerResult& WithLdapServerMetadata(const LdapServerMetadataOutput& value) { SetLdapServerMetadata(value); return *this;}
    inline UpdateBrokerResult& WithLdapServerMetadata(LdapServerMetadataOutput&& value) { SetLdapServerMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of information about logs to be enabled for the specified
     * broker.</p>
     */
    inline const Logs& GetLogs() const{ return m_logs; }
    inline void SetLogs(const Logs& value) { m_logs = value; }
    inline void SetLogs(Logs&& value) { m_logs = std::move(value); }
    inline UpdateBrokerResult& WithLogs(const Logs& value) { SetLogs(value); return *this;}
    inline UpdateBrokerResult& WithLogs(Logs&& value) { SetLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline const WeeklyStartTime& GetMaintenanceWindowStartTime() const{ return m_maintenanceWindowStartTime; }
    inline void SetMaintenanceWindowStartTime(const WeeklyStartTime& value) { m_maintenanceWindowStartTime = value; }
    inline void SetMaintenanceWindowStartTime(WeeklyStartTime&& value) { m_maintenanceWindowStartTime = std::move(value); }
    inline UpdateBrokerResult& WithMaintenanceWindowStartTime(const WeeklyStartTime& value) { SetMaintenanceWindowStartTime(value); return *this;}
    inline UpdateBrokerResult& WithMaintenanceWindowStartTime(WeeklyStartTime&& value) { SetMaintenanceWindowStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroups = std::move(value); }
    inline UpdateBrokerResult& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline UpdateBrokerResult& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline UpdateBrokerResult& AddSecurityGroups(const Aws::String& value) { m_securityGroups.push_back(value); return *this; }
    inline UpdateBrokerResult& AddSecurityGroups(Aws::String&& value) { m_securityGroups.push_back(std::move(value)); return *this; }
    inline UpdateBrokerResult& AddSecurityGroups(const char* value) { m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The replication details of the data replication-enabled broker. Only returned
     * if dataReplicationMode is set to CRDR.</p>
     */
    inline const DataReplicationMetadataOutput& GetDataReplicationMetadata() const{ return m_dataReplicationMetadata; }
    inline void SetDataReplicationMetadata(const DataReplicationMetadataOutput& value) { m_dataReplicationMetadata = value; }
    inline void SetDataReplicationMetadata(DataReplicationMetadataOutput&& value) { m_dataReplicationMetadata = std::move(value); }
    inline UpdateBrokerResult& WithDataReplicationMetadata(const DataReplicationMetadataOutput& value) { SetDataReplicationMetadata(value); return *this;}
    inline UpdateBrokerResult& WithDataReplicationMetadata(DataReplicationMetadataOutput&& value) { SetDataReplicationMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether this broker is a part of a data replication pair.</p>
     */
    inline const DataReplicationMode& GetDataReplicationMode() const{ return m_dataReplicationMode; }
    inline void SetDataReplicationMode(const DataReplicationMode& value) { m_dataReplicationMode = value; }
    inline void SetDataReplicationMode(DataReplicationMode&& value) { m_dataReplicationMode = std::move(value); }
    inline UpdateBrokerResult& WithDataReplicationMode(const DataReplicationMode& value) { SetDataReplicationMode(value); return *this;}
    inline UpdateBrokerResult& WithDataReplicationMode(DataReplicationMode&& value) { SetDataReplicationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pending replication details of the data replication-enabled broker. Only
     * returned if pendingDataReplicationMode is set to CRDR.</p>
     */
    inline const DataReplicationMetadataOutput& GetPendingDataReplicationMetadata() const{ return m_pendingDataReplicationMetadata; }
    inline void SetPendingDataReplicationMetadata(const DataReplicationMetadataOutput& value) { m_pendingDataReplicationMetadata = value; }
    inline void SetPendingDataReplicationMetadata(DataReplicationMetadataOutput&& value) { m_pendingDataReplicationMetadata = std::move(value); }
    inline UpdateBrokerResult& WithPendingDataReplicationMetadata(const DataReplicationMetadataOutput& value) { SetPendingDataReplicationMetadata(value); return *this;}
    inline UpdateBrokerResult& WithPendingDataReplicationMetadata(DataReplicationMetadataOutput&& value) { SetPendingDataReplicationMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether this broker will be a part of a data replication pair after
     * reboot.</p>
     */
    inline const DataReplicationMode& GetPendingDataReplicationMode() const{ return m_pendingDataReplicationMode; }
    inline void SetPendingDataReplicationMode(const DataReplicationMode& value) { m_pendingDataReplicationMode = value; }
    inline void SetPendingDataReplicationMode(DataReplicationMode&& value) { m_pendingDataReplicationMode = std::move(value); }
    inline UpdateBrokerResult& WithPendingDataReplicationMode(const DataReplicationMode& value) { SetPendingDataReplicationMode(value); return *this;}
    inline UpdateBrokerResult& WithPendingDataReplicationMode(DataReplicationMode&& value) { SetPendingDataReplicationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateBrokerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateBrokerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateBrokerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AuthenticationStrategy m_authenticationStrategy;

    bool m_autoMinorVersionUpgrade;

    Aws::String m_brokerId;

    ConfigurationId m_configuration;

    Aws::String m_engineVersion;

    Aws::String m_hostInstanceType;

    LdapServerMetadataOutput m_ldapServerMetadata;

    Logs m_logs;

    WeeklyStartTime m_maintenanceWindowStartTime;

    Aws::Vector<Aws::String> m_securityGroups;

    DataReplicationMetadataOutput m_dataReplicationMetadata;

    DataReplicationMode m_dataReplicationMode;

    DataReplicationMetadataOutput m_pendingDataReplicationMetadata;

    DataReplicationMode m_pendingDataReplicationMode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
