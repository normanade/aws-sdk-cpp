﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeGatewayCapabilityConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeGatewayCapabilityConfigurationResult::DescribeGatewayCapabilityConfigurationResult() : 
    m_capabilitySyncStatus(CapabilitySyncStatus::NOT_SET)
{
}

DescribeGatewayCapabilityConfigurationResult::DescribeGatewayCapabilityConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeGatewayCapabilityConfigurationResult()
{
  *this = result;
}

DescribeGatewayCapabilityConfigurationResult& DescribeGatewayCapabilityConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("gatewayId"))
  {
    m_gatewayId = jsonValue.GetString("gatewayId");

  }

  if(jsonValue.ValueExists("capabilityNamespace"))
  {
    m_capabilityNamespace = jsonValue.GetString("capabilityNamespace");

  }

  if(jsonValue.ValueExists("capabilityConfiguration"))
  {
    m_capabilityConfiguration = jsonValue.GetString("capabilityConfiguration");

  }

  if(jsonValue.ValueExists("capabilitySyncStatus"))
  {
    m_capabilitySyncStatus = CapabilitySyncStatusMapper::GetCapabilitySyncStatusForName(jsonValue.GetString("capabilitySyncStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
