﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/GetCellReadinessSummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCellReadinessSummaryResult::GetCellReadinessSummaryResult() : 
    m_readiness(Readiness::NOT_SET)
{
}

GetCellReadinessSummaryResult::GetCellReadinessSummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetCellReadinessSummaryResult()
{
  *this = result;
}

GetCellReadinessSummaryResult& GetCellReadinessSummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("readiness"))
  {
    m_readiness = ReadinessMapper::GetReadinessForName(jsonValue.GetString("readiness"));

  }

  if(jsonValue.ValueExists("readinessChecks"))
  {
    Aws::Utils::Array<JsonView> readinessChecksJsonList = jsonValue.GetArray("readinessChecks");
    for(unsigned readinessChecksIndex = 0; readinessChecksIndex < readinessChecksJsonList.GetLength(); ++readinessChecksIndex)
    {
      m_readinessChecks.push_back(readinessChecksJsonList[readinessChecksIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
