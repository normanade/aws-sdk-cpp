﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/StartDataSourceIntrospectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartDataSourceIntrospectionResult::StartDataSourceIntrospectionResult() : 
    m_introspectionStatus(DataSourceIntrospectionStatus::NOT_SET)
{
}

StartDataSourceIntrospectionResult::StartDataSourceIntrospectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : StartDataSourceIntrospectionResult()
{
  *this = result;
}

StartDataSourceIntrospectionResult& StartDataSourceIntrospectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("introspectionId"))
  {
    m_introspectionId = jsonValue.GetString("introspectionId");

  }

  if(jsonValue.ValueExists("introspectionStatus"))
  {
    m_introspectionStatus = DataSourceIntrospectionStatusMapper::GetDataSourceIntrospectionStatusForName(jsonValue.GetString("introspectionStatus"));

  }

  if(jsonValue.ValueExists("introspectionStatusDetail"))
  {
    m_introspectionStatusDetail = jsonValue.GetString("introspectionStatusDetail");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
