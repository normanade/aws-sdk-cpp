﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ScheduledInstancesLaunchSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for RunScheduledInstances.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RunScheduledInstancesRequest">AWS
   * API Reference</a></p>
   */
  class RunScheduledInstancesRequest : public EC2Request
  {
  public:
    AWS_EC2_API RunScheduledInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RunScheduledInstances"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline RunScheduledInstancesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline RunScheduledInstancesRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline RunScheduledInstancesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline RunScheduledInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances.</p> <p>Default: 1</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline RunScheduledInstancesRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch specification. You must match the instance type, Availability
     * Zone, network, and platform of the schedule that you purchased.</p>
     */
    inline const ScheduledInstancesLaunchSpecification& GetLaunchSpecification() const{ return m_launchSpecification; }
    inline bool LaunchSpecificationHasBeenSet() const { return m_launchSpecificationHasBeenSet; }
    inline void SetLaunchSpecification(const ScheduledInstancesLaunchSpecification& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = value; }
    inline void SetLaunchSpecification(ScheduledInstancesLaunchSpecification&& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = std::move(value); }
    inline RunScheduledInstancesRequest& WithLaunchSpecification(const ScheduledInstancesLaunchSpecification& value) { SetLaunchSpecification(value); return *this;}
    inline RunScheduledInstancesRequest& WithLaunchSpecification(ScheduledInstancesLaunchSpecification&& value) { SetLaunchSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline const Aws::String& GetScheduledInstanceId() const{ return m_scheduledInstanceId; }
    inline bool ScheduledInstanceIdHasBeenSet() const { return m_scheduledInstanceIdHasBeenSet; }
    inline void SetScheduledInstanceId(const Aws::String& value) { m_scheduledInstanceIdHasBeenSet = true; m_scheduledInstanceId = value; }
    inline void SetScheduledInstanceId(Aws::String&& value) { m_scheduledInstanceIdHasBeenSet = true; m_scheduledInstanceId = std::move(value); }
    inline void SetScheduledInstanceId(const char* value) { m_scheduledInstanceIdHasBeenSet = true; m_scheduledInstanceId.assign(value); }
    inline RunScheduledInstancesRequest& WithScheduledInstanceId(const Aws::String& value) { SetScheduledInstanceId(value); return *this;}
    inline RunScheduledInstancesRequest& WithScheduledInstanceId(Aws::String&& value) { SetScheduledInstanceId(std::move(value)); return *this;}
    inline RunScheduledInstancesRequest& WithScheduledInstanceId(const char* value) { SetScheduledInstanceId(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    ScheduledInstancesLaunchSpecification m_launchSpecification;
    bool m_launchSpecificationHasBeenSet = false;

    Aws::String m_scheduledInstanceId;
    bool m_scheduledInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
