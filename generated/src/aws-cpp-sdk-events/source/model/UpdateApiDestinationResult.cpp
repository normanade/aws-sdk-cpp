﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/UpdateApiDestinationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateApiDestinationResult::UpdateApiDestinationResult() : 
    m_apiDestinationState(ApiDestinationState::NOT_SET)
{
}

UpdateApiDestinationResult::UpdateApiDestinationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateApiDestinationResult()
{
  *this = result;
}

UpdateApiDestinationResult& UpdateApiDestinationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApiDestinationArn"))
  {
    m_apiDestinationArn = jsonValue.GetString("ApiDestinationArn");

  }

  if(jsonValue.ValueExists("ApiDestinationState"))
  {
    m_apiDestinationState = ApiDestinationStateMapper::GetApiDestinationStateForName(jsonValue.GetString("ApiDestinationState"));

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
