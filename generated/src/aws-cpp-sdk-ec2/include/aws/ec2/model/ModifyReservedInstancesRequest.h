﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ReservedInstancesConfiguration.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ModifyReservedInstances.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyReservedInstancesRequest">AWS
   * API Reference</a></p>
   */
  class ModifyReservedInstancesRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyReservedInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyReservedInstances"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the Reserved Instances to modify.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReservedInstancesIds() const{ return m_reservedInstancesIds; }
    inline bool ReservedInstancesIdsHasBeenSet() const { return m_reservedInstancesIdsHasBeenSet; }
    inline void SetReservedInstancesIds(const Aws::Vector<Aws::String>& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds = value; }
    inline void SetReservedInstancesIds(Aws::Vector<Aws::String>&& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds = std::move(value); }
    inline ModifyReservedInstancesRequest& WithReservedInstancesIds(const Aws::Vector<Aws::String>& value) { SetReservedInstancesIds(value); return *this;}
    inline ModifyReservedInstancesRequest& WithReservedInstancesIds(Aws::Vector<Aws::String>&& value) { SetReservedInstancesIds(std::move(value)); return *this;}
    inline ModifyReservedInstancesRequest& AddReservedInstancesIds(const Aws::String& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds.push_back(value); return *this; }
    inline ModifyReservedInstancesRequest& AddReservedInstancesIds(Aws::String&& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds.push_back(std::move(value)); return *this; }
    inline ModifyReservedInstancesRequest& AddReservedInstancesIds(const char* value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive token you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ModifyReservedInstancesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ModifyReservedInstancesRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ModifyReservedInstancesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the Reserved Instances to modify.</p>
     */
    inline const Aws::Vector<ReservedInstancesConfiguration>& GetTargetConfigurations() const{ return m_targetConfigurations; }
    inline bool TargetConfigurationsHasBeenSet() const { return m_targetConfigurationsHasBeenSet; }
    inline void SetTargetConfigurations(const Aws::Vector<ReservedInstancesConfiguration>& value) { m_targetConfigurationsHasBeenSet = true; m_targetConfigurations = value; }
    inline void SetTargetConfigurations(Aws::Vector<ReservedInstancesConfiguration>&& value) { m_targetConfigurationsHasBeenSet = true; m_targetConfigurations = std::move(value); }
    inline ModifyReservedInstancesRequest& WithTargetConfigurations(const Aws::Vector<ReservedInstancesConfiguration>& value) { SetTargetConfigurations(value); return *this;}
    inline ModifyReservedInstancesRequest& WithTargetConfigurations(Aws::Vector<ReservedInstancesConfiguration>&& value) { SetTargetConfigurations(std::move(value)); return *this;}
    inline ModifyReservedInstancesRequest& AddTargetConfigurations(const ReservedInstancesConfiguration& value) { m_targetConfigurationsHasBeenSet = true; m_targetConfigurations.push_back(value); return *this; }
    inline ModifyReservedInstancesRequest& AddTargetConfigurations(ReservedInstancesConfiguration&& value) { m_targetConfigurationsHasBeenSet = true; m_targetConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_reservedInstancesIds;
    bool m_reservedInstancesIdsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<ReservedInstancesConfiguration> m_targetConfigurations;
    bool m_targetConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
