﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/DeletePermissionVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeletePermissionVersionResult::DeletePermissionVersionResult() : 
    m_returnValue(false),
    m_permissionStatus(PermissionStatus::NOT_SET)
{
}

DeletePermissionVersionResult::DeletePermissionVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DeletePermissionVersionResult()
{
  *this = result;
}

DeletePermissionVersionResult& DeletePermissionVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("returnValue"))
  {
    m_returnValue = jsonValue.GetBool("returnValue");

  }

  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");

  }

  if(jsonValue.ValueExists("permissionStatus"))
  {
    m_permissionStatus = PermissionStatusMapper::GetPermissionStatusForName(jsonValue.GetString("permissionStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
