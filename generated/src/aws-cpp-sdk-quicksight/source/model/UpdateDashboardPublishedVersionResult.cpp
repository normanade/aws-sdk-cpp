﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateDashboardPublishedVersionResult.h>
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

UpdateDashboardPublishedVersionResult::UpdateDashboardPublishedVersionResult() : 
    m_status(0)
{
}

UpdateDashboardPublishedVersionResult::UpdateDashboardPublishedVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateDashboardPublishedVersionResult()
{
  *this = result;
}

UpdateDashboardPublishedVersionResult& UpdateDashboardPublishedVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DashboardId"))
  {
    m_dashboardId = jsonValue.GetString("DashboardId");

  }

  if(jsonValue.ValueExists("DashboardArn"))
  {
    m_dashboardArn = jsonValue.GetString("DashboardArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
