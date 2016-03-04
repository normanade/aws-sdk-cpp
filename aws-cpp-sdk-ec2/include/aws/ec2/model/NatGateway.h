/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/NatGatewayState.h>
#include <aws/ec2/model/NatGatewayAddress.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a NAT gateway.</p>
   */
  class AWS_EC2_API NatGateway
  {
  public:
    NatGateway();
    NatGateway(const Aws::Utils::Xml::XmlNode& xmlNode);
    NatGateway& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ID of the VPC in which the NAT gateway is located.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC in which the NAT gateway is located.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC in which the NAT gateway is located.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC in which the NAT gateway is located.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC in which the NAT gateway is located.</p>
     */
    inline NatGateway& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC in which the NAT gateway is located.</p>
     */
    inline NatGateway& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC in which the NAT gateway is located.</p>
     */
    inline NatGateway& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the subnet in which the NAT gateway is located.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet in which the NAT gateway is located.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet in which the NAT gateway is located.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet in which the NAT gateway is located.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet in which the NAT gateway is located.</p>
     */
    inline NatGateway& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet in which the NAT gateway is located.</p>
     */
    inline NatGateway& WithSubnetId(Aws::String&& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet in which the NAT gateway is located.</p>
     */
    inline NatGateway& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline const Aws::String& GetNatGatewayId() const{ return m_natGatewayId; }

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline void SetNatGatewayId(const Aws::String& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = value; }

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline void SetNatGatewayId(Aws::String&& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = value; }

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline void SetNatGatewayId(const char* value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId.assign(value); }

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline NatGateway& WithNatGatewayId(const Aws::String& value) { SetNatGatewayId(value); return *this;}

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline NatGateway& WithNatGatewayId(Aws::String&& value) { SetNatGatewayId(value); return *this;}

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline NatGateway& WithNatGatewayId(const char* value) { SetNatGatewayId(value); return *this;}

    /**
     * <p>The date and time the NAT gateway was created.</p>
     */
    inline double GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The date and time the NAT gateway was created.</p>
     */
    inline void SetCreateTime(double value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The date and time the NAT gateway was created.</p>
     */
    inline NatGateway& WithCreateTime(double value) { SetCreateTime(value); return *this;}

    /**
     * <p>The date and time the NAT gateway was deleted, if applicable.</p>
     */
    inline double GetDeleteTime() const{ return m_deleteTime; }

    /**
     * <p>The date and time the NAT gateway was deleted, if applicable.</p>
     */
    inline void SetDeleteTime(double value) { m_deleteTimeHasBeenSet = true; m_deleteTime = value; }

    /**
     * <p>The date and time the NAT gateway was deleted, if applicable.</p>
     */
    inline NatGateway& WithDeleteTime(double value) { SetDeleteTime(value); return *this;}

    /**
     * <p>Information about the IP addresses and network interface associated with the
     * NAT gateway.</p>
     */
    inline const Aws::Vector<NatGatewayAddress>& GetNatGatewayAddresses() const{ return m_natGatewayAddresses; }

    /**
     * <p>Information about the IP addresses and network interface associated with the
     * NAT gateway.</p>
     */
    inline void SetNatGatewayAddresses(const Aws::Vector<NatGatewayAddress>& value) { m_natGatewayAddressesHasBeenSet = true; m_natGatewayAddresses = value; }

    /**
     * <p>Information about the IP addresses and network interface associated with the
     * NAT gateway.</p>
     */
    inline void SetNatGatewayAddresses(Aws::Vector<NatGatewayAddress>&& value) { m_natGatewayAddressesHasBeenSet = true; m_natGatewayAddresses = value; }

    /**
     * <p>Information about the IP addresses and network interface associated with the
     * NAT gateway.</p>
     */
    inline NatGateway& WithNatGatewayAddresses(const Aws::Vector<NatGatewayAddress>& value) { SetNatGatewayAddresses(value); return *this;}

    /**
     * <p>Information about the IP addresses and network interface associated with the
     * NAT gateway.</p>
     */
    inline NatGateway& WithNatGatewayAddresses(Aws::Vector<NatGatewayAddress>&& value) { SetNatGatewayAddresses(value); return *this;}

    /**
     * <p>Information about the IP addresses and network interface associated with the
     * NAT gateway.</p>
     */
    inline NatGateway& AddNatGatewayAddresses(const NatGatewayAddress& value) { m_natGatewayAddressesHasBeenSet = true; m_natGatewayAddresses.push_back(value); return *this; }

    /**
     * <p>Information about the IP addresses and network interface associated with the
     * NAT gateway.</p>
     */
    inline NatGateway& AddNatGatewayAddresses(NatGatewayAddress&& value) { m_natGatewayAddressesHasBeenSet = true; m_natGatewayAddresses.push_back(value); return *this; }

    /**
     * <p>The state of the NAT gateway.</p>
     */
    inline const NatGatewayState& GetState() const{ return m_state; }

    /**
     * <p>The state of the NAT gateway.</p>
     */
    inline void SetState(const NatGatewayState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the NAT gateway.</p>
     */
    inline void SetState(NatGatewayState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the NAT gateway.</p>
     */
    inline NatGateway& WithState(const NatGatewayState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the NAT gateway.</p>
     */
    inline NatGateway& WithState(NatGatewayState&& value) { SetState(value); return *this;}

    /**
     * <p>If the NAT gateway could not be created, specifies the error code for the
     * failure. (<code>InsufficientFreeAddressesInSubnet</code> |
     * <code>Gateway.NotAttached</code> | <code>InvalidAllocationID.NotFound</code> |
     * <code>Resource.AlreadyAssociated</code> | <code>InternalError</code> |
     * <code>InvalidSubnetID.NotFound</code>)</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>If the NAT gateway could not be created, specifies the error code for the
     * failure. (<code>InsufficientFreeAddressesInSubnet</code> |
     * <code>Gateway.NotAttached</code> | <code>InvalidAllocationID.NotFound</code> |
     * <code>Resource.AlreadyAssociated</code> | <code>InternalError</code> |
     * <code>InvalidSubnetID.NotFound</code>)</p>
     */
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>If the NAT gateway could not be created, specifies the error code for the
     * failure. (<code>InsufficientFreeAddressesInSubnet</code> |
     * <code>Gateway.NotAttached</code> | <code>InvalidAllocationID.NotFound</code> |
     * <code>Resource.AlreadyAssociated</code> | <code>InternalError</code> |
     * <code>InvalidSubnetID.NotFound</code>)</p>
     */
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>If the NAT gateway could not be created, specifies the error code for the
     * failure. (<code>InsufficientFreeAddressesInSubnet</code> |
     * <code>Gateway.NotAttached</code> | <code>InvalidAllocationID.NotFound</code> |
     * <code>Resource.AlreadyAssociated</code> | <code>InternalError</code> |
     * <code>InvalidSubnetID.NotFound</code>)</p>
     */
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }

    /**
     * <p>If the NAT gateway could not be created, specifies the error code for the
     * failure. (<code>InsufficientFreeAddressesInSubnet</code> |
     * <code>Gateway.NotAttached</code> | <code>InvalidAllocationID.NotFound</code> |
     * <code>Resource.AlreadyAssociated</code> | <code>InternalError</code> |
     * <code>InvalidSubnetID.NotFound</code>)</p>
     */
    inline NatGateway& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}

    /**
     * <p>If the NAT gateway could not be created, specifies the error code for the
     * failure. (<code>InsufficientFreeAddressesInSubnet</code> |
     * <code>Gateway.NotAttached</code> | <code>InvalidAllocationID.NotFound</code> |
     * <code>Resource.AlreadyAssociated</code> | <code>InternalError</code> |
     * <code>InvalidSubnetID.NotFound</code>)</p>
     */
    inline NatGateway& WithFailureCode(Aws::String&& value) { SetFailureCode(value); return *this;}

    /**
     * <p>If the NAT gateway could not be created, specifies the error code for the
     * failure. (<code>InsufficientFreeAddressesInSubnet</code> |
     * <code>Gateway.NotAttached</code> | <code>InvalidAllocationID.NotFound</code> |
     * <code>Resource.AlreadyAssociated</code> | <code>InternalError</code> |
     * <code>InvalidSubnetID.NotFound</code>)</p>
     */
    inline NatGateway& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}

    /**
     * <p>If the NAT gateway could not be created, specifies the error message for the
     * failure, that corresponds to the error code. </p> <ul> <li>For
     * InsufficientFreeAddressesInSubnet: <code>Subnet has insufficient free addresses
     * to create this NAT gateway</code></li> <li>For Gateway.NotAttached:
     * <code>Network vpc-xxxxxxxx has no Internet gateway attached</code></li> <li>For
     * InvalidAllocationID.NotFound: <code>Elastic IP address eipalloc-xxxxxxxx could
     * not be associated with this NAT gateway</code></li> <li>For
     * Resource.AlreadyAssociated: <code>Elastic IP address eipalloc-xxxxxxxx is
     * already associated</code></li> <li>For InternalError: <code>Network interface
     * eni-xxxxxxxx, created and used internally by this NAT gateway is in an invalid
     * state. Please try again.</code></li> <li>For InvalidSubnetID.NotFound: <code>The
     * specified subnet subnet-xxxxxxxx does not exist or could not be
     * found.</code></li> </ul>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>If the NAT gateway could not be created, specifies the error message for the
     * failure, that corresponds to the error code. </p> <ul> <li>For
     * InsufficientFreeAddressesInSubnet: <code>Subnet has insufficient free addresses
     * to create this NAT gateway</code></li> <li>For Gateway.NotAttached:
     * <code>Network vpc-xxxxxxxx has no Internet gateway attached</code></li> <li>For
     * InvalidAllocationID.NotFound: <code>Elastic IP address eipalloc-xxxxxxxx could
     * not be associated with this NAT gateway</code></li> <li>For
     * Resource.AlreadyAssociated: <code>Elastic IP address eipalloc-xxxxxxxx is
     * already associated</code></li> <li>For InternalError: <code>Network interface
     * eni-xxxxxxxx, created and used internally by this NAT gateway is in an invalid
     * state. Please try again.</code></li> <li>For InvalidSubnetID.NotFound: <code>The
     * specified subnet subnet-xxxxxxxx does not exist or could not be
     * found.</code></li> </ul>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p>If the NAT gateway could not be created, specifies the error message for the
     * failure, that corresponds to the error code. </p> <ul> <li>For
     * InsufficientFreeAddressesInSubnet: <code>Subnet has insufficient free addresses
     * to create this NAT gateway</code></li> <li>For Gateway.NotAttached:
     * <code>Network vpc-xxxxxxxx has no Internet gateway attached</code></li> <li>For
     * InvalidAllocationID.NotFound: <code>Elastic IP address eipalloc-xxxxxxxx could
     * not be associated with this NAT gateway</code></li> <li>For
     * Resource.AlreadyAssociated: <code>Elastic IP address eipalloc-xxxxxxxx is
     * already associated</code></li> <li>For InternalError: <code>Network interface
     * eni-xxxxxxxx, created and used internally by this NAT gateway is in an invalid
     * state. Please try again.</code></li> <li>For InvalidSubnetID.NotFound: <code>The
     * specified subnet subnet-xxxxxxxx does not exist or could not be
     * found.</code></li> </ul>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p>If the NAT gateway could not be created, specifies the error message for the
     * failure, that corresponds to the error code. </p> <ul> <li>For
     * InsufficientFreeAddressesInSubnet: <code>Subnet has insufficient free addresses
     * to create this NAT gateway</code></li> <li>For Gateway.NotAttached:
     * <code>Network vpc-xxxxxxxx has no Internet gateway attached</code></li> <li>For
     * InvalidAllocationID.NotFound: <code>Elastic IP address eipalloc-xxxxxxxx could
     * not be associated with this NAT gateway</code></li> <li>For
     * Resource.AlreadyAssociated: <code>Elastic IP address eipalloc-xxxxxxxx is
     * already associated</code></li> <li>For InternalError: <code>Network interface
     * eni-xxxxxxxx, created and used internally by this NAT gateway is in an invalid
     * state. Please try again.</code></li> <li>For InvalidSubnetID.NotFound: <code>The
     * specified subnet subnet-xxxxxxxx does not exist or could not be
     * found.</code></li> </ul>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }

    /**
     * <p>If the NAT gateway could not be created, specifies the error message for the
     * failure, that corresponds to the error code. </p> <ul> <li>For
     * InsufficientFreeAddressesInSubnet: <code>Subnet has insufficient free addresses
     * to create this NAT gateway</code></li> <li>For Gateway.NotAttached:
     * <code>Network vpc-xxxxxxxx has no Internet gateway attached</code></li> <li>For
     * InvalidAllocationID.NotFound: <code>Elastic IP address eipalloc-xxxxxxxx could
     * not be associated with this NAT gateway</code></li> <li>For
     * Resource.AlreadyAssociated: <code>Elastic IP address eipalloc-xxxxxxxx is
     * already associated</code></li> <li>For InternalError: <code>Network interface
     * eni-xxxxxxxx, created and used internally by this NAT gateway is in an invalid
     * state. Please try again.</code></li> <li>For InvalidSubnetID.NotFound: <code>The
     * specified subnet subnet-xxxxxxxx does not exist or could not be
     * found.</code></li> </ul>
     */
    inline NatGateway& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>If the NAT gateway could not be created, specifies the error message for the
     * failure, that corresponds to the error code. </p> <ul> <li>For
     * InsufficientFreeAddressesInSubnet: <code>Subnet has insufficient free addresses
     * to create this NAT gateway</code></li> <li>For Gateway.NotAttached:
     * <code>Network vpc-xxxxxxxx has no Internet gateway attached</code></li> <li>For
     * InvalidAllocationID.NotFound: <code>Elastic IP address eipalloc-xxxxxxxx could
     * not be associated with this NAT gateway</code></li> <li>For
     * Resource.AlreadyAssociated: <code>Elastic IP address eipalloc-xxxxxxxx is
     * already associated</code></li> <li>For InternalError: <code>Network interface
     * eni-xxxxxxxx, created and used internally by this NAT gateway is in an invalid
     * state. Please try again.</code></li> <li>For InvalidSubnetID.NotFound: <code>The
     * specified subnet subnet-xxxxxxxx does not exist or could not be
     * found.</code></li> </ul>
     */
    inline NatGateway& WithFailureMessage(Aws::String&& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>If the NAT gateway could not be created, specifies the error message for the
     * failure, that corresponds to the error code. </p> <ul> <li>For
     * InsufficientFreeAddressesInSubnet: <code>Subnet has insufficient free addresses
     * to create this NAT gateway</code></li> <li>For Gateway.NotAttached:
     * <code>Network vpc-xxxxxxxx has no Internet gateway attached</code></li> <li>For
     * InvalidAllocationID.NotFound: <code>Elastic IP address eipalloc-xxxxxxxx could
     * not be associated with this NAT gateway</code></li> <li>For
     * Resource.AlreadyAssociated: <code>Elastic IP address eipalloc-xxxxxxxx is
     * already associated</code></li> <li>For InternalError: <code>Network interface
     * eni-xxxxxxxx, created and used internally by this NAT gateway is in an invalid
     * state. Please try again.</code></li> <li>For InvalidSubnetID.NotFound: <code>The
     * specified subnet subnet-xxxxxxxx does not exist or could not be
     * found.</code></li> </ul>
     */
    inline NatGateway& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}

  private:
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
    Aws::String m_natGatewayId;
    bool m_natGatewayIdHasBeenSet;
    double m_createTime;
    bool m_createTimeHasBeenSet;
    double m_deleteTime;
    bool m_deleteTimeHasBeenSet;
    Aws::Vector<NatGatewayAddress> m_natGatewayAddresses;
    bool m_natGatewayAddressesHasBeenSet;
    NatGatewayState m_state;
    bool m_stateHasBeenSet;
    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet;
    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
