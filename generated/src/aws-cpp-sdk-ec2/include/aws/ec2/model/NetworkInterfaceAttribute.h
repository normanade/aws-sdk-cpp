﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class NetworkInterfaceAttribute
  {
    NOT_SET,
    description,
    groupSet,
    sourceDestCheck,
    attachment,
    associatePublicIpAddress
  };

namespace NetworkInterfaceAttributeMapper
{
AWS_EC2_API NetworkInterfaceAttribute GetNetworkInterfaceAttributeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForNetworkInterfaceAttribute(NetworkInterfaceAttribute value);
} // namespace NetworkInterfaceAttributeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
