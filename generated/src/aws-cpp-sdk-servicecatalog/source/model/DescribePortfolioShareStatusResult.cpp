﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribePortfolioShareStatusResult.h>
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

DescribePortfolioShareStatusResult::DescribePortfolioShareStatusResult() : 
    m_status(ShareStatus::NOT_SET)
{
}

DescribePortfolioShareStatusResult::DescribePortfolioShareStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribePortfolioShareStatusResult()
{
  *this = result;
}

DescribePortfolioShareStatusResult& DescribePortfolioShareStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PortfolioShareToken"))
  {
    m_portfolioShareToken = jsonValue.GetString("PortfolioShareToken");

  }

  if(jsonValue.ValueExists("PortfolioId"))
  {
    m_portfolioId = jsonValue.GetString("PortfolioId");

  }

  if(jsonValue.ValueExists("OrganizationNodeValue"))
  {
    m_organizationNodeValue = jsonValue.GetString("OrganizationNodeValue");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("ShareDetails"))
  {
    m_shareDetails = jsonValue.GetObject("ShareDetails");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
