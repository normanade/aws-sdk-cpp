﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/lightsail/model/PortInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CloseInstancePublicPortsRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CloseInstancePublicPortsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CloseInstancePublicPorts"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An object to describe the ports to close for the specified instance.</p>
     */
    inline const PortInfo& GetPortInfo() const{ return m_portInfo; }
    inline bool PortInfoHasBeenSet() const { return m_portInfoHasBeenSet; }
    inline void SetPortInfo(const PortInfo& value) { m_portInfoHasBeenSet = true; m_portInfo = value; }
    inline void SetPortInfo(PortInfo&& value) { m_portInfoHasBeenSet = true; m_portInfo = std::move(value); }
    inline CloseInstancePublicPortsRequest& WithPortInfo(const PortInfo& value) { SetPortInfo(value); return *this;}
    inline CloseInstancePublicPortsRequest& WithPortInfo(PortInfo&& value) { SetPortInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the instance for which to close ports.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline CloseInstancePublicPortsRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline CloseInstancePublicPortsRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline CloseInstancePublicPortsRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
    ///@}
  private:

    PortInfo m_portInfo;
    bool m_portInfoHasBeenSet = false;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
