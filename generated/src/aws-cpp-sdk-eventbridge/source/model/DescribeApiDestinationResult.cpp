﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/DescribeApiDestinationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeApiDestinationResult::DescribeApiDestinationResult() : 
    m_apiDestinationState(ApiDestinationState::NOT_SET),
    m_httpMethod(ApiDestinationHttpMethod::NOT_SET),
    m_invocationRateLimitPerSecond(0)
{
}

DescribeApiDestinationResult::DescribeApiDestinationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeApiDestinationResult()
{
  *this = result;
}

DescribeApiDestinationResult& DescribeApiDestinationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApiDestinationArn"))
  {
    m_apiDestinationArn = jsonValue.GetString("ApiDestinationArn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("ApiDestinationState"))
  {
    m_apiDestinationState = ApiDestinationStateMapper::GetApiDestinationStateForName(jsonValue.GetString("ApiDestinationState"));

  }

  if(jsonValue.ValueExists("ConnectionArn"))
  {
    m_connectionArn = jsonValue.GetString("ConnectionArn");

  }

  if(jsonValue.ValueExists("InvocationEndpoint"))
  {
    m_invocationEndpoint = jsonValue.GetString("InvocationEndpoint");

  }

  if(jsonValue.ValueExists("HttpMethod"))
  {
    m_httpMethod = ApiDestinationHttpMethodMapper::GetApiDestinationHttpMethodForName(jsonValue.GetString("HttpMethod"));

  }

  if(jsonValue.ValueExists("InvocationRateLimitPerSecond"))
  {
    m_invocationRateLimitPerSecond = jsonValue.GetInteger("InvocationRateLimitPerSecond");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
