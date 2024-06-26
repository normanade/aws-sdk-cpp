﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/CreateConstraintResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateConstraintResult::CreateConstraintResult() : 
    m_status(Status::NOT_SET)
{
}

CreateConstraintResult::CreateConstraintResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateConstraintResult()
{
  *this = result;
}

CreateConstraintResult& CreateConstraintResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConstraintDetail"))
  {
    m_constraintDetail = jsonValue.GetObject("ConstraintDetail");

  }

  if(jsonValue.ValueExists("ConstraintParameters"))
  {
    m_constraintParameters = jsonValue.GetString("ConstraintParameters");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
