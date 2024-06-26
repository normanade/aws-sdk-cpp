﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/WeeklyAutoScalingSchedule.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class SetTimeBasedAutoScalingRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API SetTimeBasedAutoScalingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetTimeBasedAutoScaling"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline SetTimeBasedAutoScalingRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline SetTimeBasedAutoScalingRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline SetTimeBasedAutoScalingRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>AutoScalingSchedule</code> with the instance schedule.</p>
     */
    inline const WeeklyAutoScalingSchedule& GetAutoScalingSchedule() const{ return m_autoScalingSchedule; }
    inline bool AutoScalingScheduleHasBeenSet() const { return m_autoScalingScheduleHasBeenSet; }
    inline void SetAutoScalingSchedule(const WeeklyAutoScalingSchedule& value) { m_autoScalingScheduleHasBeenSet = true; m_autoScalingSchedule = value; }
    inline void SetAutoScalingSchedule(WeeklyAutoScalingSchedule&& value) { m_autoScalingScheduleHasBeenSet = true; m_autoScalingSchedule = std::move(value); }
    inline SetTimeBasedAutoScalingRequest& WithAutoScalingSchedule(const WeeklyAutoScalingSchedule& value) { SetAutoScalingSchedule(value); return *this;}
    inline SetTimeBasedAutoScalingRequest& WithAutoScalingSchedule(WeeklyAutoScalingSchedule&& value) { SetAutoScalingSchedule(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    WeeklyAutoScalingSchedule m_autoScalingSchedule;
    bool m_autoScalingScheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
