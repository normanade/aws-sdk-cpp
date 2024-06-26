﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateDashboardResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDashboardResult::UpdateDashboardResult() : 
    m_creationStatus(ResourceStatus::NOT_SET),
    m_status(0)
{
}

UpdateDashboardResult::UpdateDashboardResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateDashboardResult()
{
  *this = result;
}

UpdateDashboardResult& UpdateDashboardResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("VersionArn"))
  {
    m_versionArn = jsonValue.GetString("VersionArn");

  }

  if(jsonValue.ValueExists("DashboardId"))
  {
    m_dashboardId = jsonValue.GetString("DashboardId");

  }

  if(jsonValue.ValueExists("CreationStatus"))
  {
    m_creationStatus = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("CreationStatus"));

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetInteger("Status");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
