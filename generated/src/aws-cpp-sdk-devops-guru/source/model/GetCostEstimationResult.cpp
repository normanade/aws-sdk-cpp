﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/GetCostEstimationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCostEstimationResult::GetCostEstimationResult() : 
    m_status(CostEstimationStatus::NOT_SET),
    m_totalCost(0.0)
{
}

GetCostEstimationResult::GetCostEstimationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetCostEstimationResult()
{
  *this = result;
}

GetCostEstimationResult& GetCostEstimationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceCollection"))
  {
    m_resourceCollection = jsonValue.GetObject("ResourceCollection");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CostEstimationStatusMapper::GetCostEstimationStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Costs"))
  {
    Aws::Utils::Array<JsonView> costsJsonList = jsonValue.GetArray("Costs");
    for(unsigned costsIndex = 0; costsIndex < costsJsonList.GetLength(); ++costsIndex)
    {
      m_costs.push_back(costsJsonList[costsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TimeRange"))
  {
    m_timeRange = jsonValue.GetObject("TimeRange");

  }

  if(jsonValue.ValueExists("TotalCost"))
  {
    m_totalCost = jsonValue.GetDouble("TotalCost");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
