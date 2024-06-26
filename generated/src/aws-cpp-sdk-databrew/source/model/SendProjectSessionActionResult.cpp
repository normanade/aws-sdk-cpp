﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/SendProjectSessionActionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SendProjectSessionActionResult::SendProjectSessionActionResult() : 
    m_actionId(0)
{
}

SendProjectSessionActionResult::SendProjectSessionActionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : SendProjectSessionActionResult()
{
  *this = result;
}

SendProjectSessionActionResult& SendProjectSessionActionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Result"))
  {
    m_result = jsonValue.GetString("Result");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("ActionId"))
  {
    m_actionId = jsonValue.GetInteger("ActionId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
