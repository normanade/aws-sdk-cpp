﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Protocol.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * The output of the bridge. A network output is delivered to your
   * premises.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/BridgeNetworkOutput">AWS
   * API Reference</a></p>
   */
  class BridgeNetworkOutput
  {
  public:
    AWS_MEDIACONNECT_API BridgeNetworkOutput();
    AWS_MEDIACONNECT_API BridgeNetworkOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API BridgeNetworkOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The network output IP Address.
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline BridgeNetworkOutput& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline BridgeNetworkOutput& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline BridgeNetworkOutput& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * The network output name.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline BridgeNetworkOutput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline BridgeNetworkOutput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline BridgeNetworkOutput& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The network output's gateway network name.
     */
    inline const Aws::String& GetNetworkName() const{ return m_networkName; }
    inline bool NetworkNameHasBeenSet() const { return m_networkNameHasBeenSet; }
    inline void SetNetworkName(const Aws::String& value) { m_networkNameHasBeenSet = true; m_networkName = value; }
    inline void SetNetworkName(Aws::String&& value) { m_networkNameHasBeenSet = true; m_networkName = std::move(value); }
    inline void SetNetworkName(const char* value) { m_networkNameHasBeenSet = true; m_networkName.assign(value); }
    inline BridgeNetworkOutput& WithNetworkName(const Aws::String& value) { SetNetworkName(value); return *this;}
    inline BridgeNetworkOutput& WithNetworkName(Aws::String&& value) { SetNetworkName(std::move(value)); return *this;}
    inline BridgeNetworkOutput& WithNetworkName(const char* value) { SetNetworkName(value); return *this;}
    ///@}

    ///@{
    /**
     * The network output port.
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline BridgeNetworkOutput& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * The network output protocol.
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline BridgeNetworkOutput& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline BridgeNetworkOutput& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The network output TTL.
     */
    inline int GetTtl() const{ return m_ttl; }
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }
    inline void SetTtl(int value) { m_ttlHasBeenSet = true; m_ttl = value; }
    inline BridgeNetworkOutput& WithTtl(int value) { SetTtl(value); return *this;}
    ///@}
  private:

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_networkName;
    bool m_networkNameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_ttl;
    bool m_ttlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
