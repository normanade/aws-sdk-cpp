﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateBridgeStateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateBridgeStateResult::UpdateBridgeStateResult() : 
    m_desiredState(DesiredState::NOT_SET)
{
}

UpdateBridgeStateResult::UpdateBridgeStateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateBridgeStateResult()
{
  *this = result;
}

UpdateBridgeStateResult& UpdateBridgeStateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("bridgeArn"))
  {
    m_bridgeArn = jsonValue.GetString("bridgeArn");

  }

  if(jsonValue.ValueExists("desiredState"))
  {
    m_desiredState = DesiredStateMapper::GetDesiredStateForName(jsonValue.GetString("desiredState"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
