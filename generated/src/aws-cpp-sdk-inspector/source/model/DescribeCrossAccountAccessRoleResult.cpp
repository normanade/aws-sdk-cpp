﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DescribeCrossAccountAccessRoleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCrossAccountAccessRoleResult::DescribeCrossAccountAccessRoleResult() : 
    m_valid(false)
{
}

DescribeCrossAccountAccessRoleResult::DescribeCrossAccountAccessRoleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeCrossAccountAccessRoleResult()
{
  *this = result;
}

DescribeCrossAccountAccessRoleResult& DescribeCrossAccountAccessRoleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("valid"))
  {
    m_valid = jsonValue.GetBool("valid");

  }

  if(jsonValue.ValueExists("registeredAt"))
  {
    m_registeredAt = jsonValue.GetDouble("registeredAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
