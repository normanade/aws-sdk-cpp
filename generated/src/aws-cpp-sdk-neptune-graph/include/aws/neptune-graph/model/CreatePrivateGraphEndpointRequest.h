﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

  /**
   */
  class CreatePrivateGraphEndpointRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API CreatePrivateGraphEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePrivateGraphEndpoint"; }

    AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_NEPTUNEGRAPH_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline const Aws::String& GetGraphIdentifier() const{ return m_graphIdentifier; }
    inline bool GraphIdentifierHasBeenSet() const { return m_graphIdentifierHasBeenSet; }
    inline void SetGraphIdentifier(const Aws::String& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = value; }
    inline void SetGraphIdentifier(Aws::String&& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = std::move(value); }
    inline void SetGraphIdentifier(const char* value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier.assign(value); }
    inline CreatePrivateGraphEndpointRequest& WithGraphIdentifier(const Aws::String& value) { SetGraphIdentifier(value); return *this;}
    inline CreatePrivateGraphEndpointRequest& WithGraphIdentifier(Aws::String&& value) { SetGraphIdentifier(std::move(value)); return *this;}
    inline CreatePrivateGraphEndpointRequest& WithGraphIdentifier(const char* value) { SetGraphIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The VPC in which the private graph endpoint needs to be created.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline CreatePrivateGraphEndpointRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline CreatePrivateGraphEndpointRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline CreatePrivateGraphEndpointRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Subnets in which private graph endpoint ENIs are created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline CreatePrivateGraphEndpointRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline CreatePrivateGraphEndpointRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline CreatePrivateGraphEndpointRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline CreatePrivateGraphEndpointRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline CreatePrivateGraphEndpointRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Security groups to be attached to the private graph endpoint..</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline CreatePrivateGraphEndpointRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline CreatePrivateGraphEndpointRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline CreatePrivateGraphEndpointRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline CreatePrivateGraphEndpointRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline CreatePrivateGraphEndpointRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_graphIdentifier;
    bool m_graphIdentifierHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
