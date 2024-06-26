﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeMitigationActionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMitigationActionResult::DescribeMitigationActionResult() : 
    m_actionType(MitigationActionType::NOT_SET)
{
}

DescribeMitigationActionResult::DescribeMitigationActionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeMitigationActionResult()
{
  *this = result;
}

DescribeMitigationActionResult& DescribeMitigationActionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = jsonValue.GetString("actionName");

  }

  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = MitigationActionTypeMapper::GetMitigationActionTypeForName(jsonValue.GetString("actionType"));

  }

  if(jsonValue.ValueExists("actionArn"))
  {
    m_actionArn = jsonValue.GetString("actionArn");

  }

  if(jsonValue.ValueExists("actionId"))
  {
    m_actionId = jsonValue.GetString("actionId");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("actionParams"))
  {
    m_actionParams = jsonValue.GetObject("actionParams");

  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
