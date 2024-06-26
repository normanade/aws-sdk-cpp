﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/SearchProvisionedProductsResult.h>
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

SearchProvisionedProductsResult::SearchProvisionedProductsResult() : 
    m_totalResultsCount(0)
{
}

SearchProvisionedProductsResult::SearchProvisionedProductsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : SearchProvisionedProductsResult()
{
  *this = result;
}

SearchProvisionedProductsResult& SearchProvisionedProductsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProvisionedProducts"))
  {
    Aws::Utils::Array<JsonView> provisionedProductsJsonList = jsonValue.GetArray("ProvisionedProducts");
    for(unsigned provisionedProductsIndex = 0; provisionedProductsIndex < provisionedProductsJsonList.GetLength(); ++provisionedProductsIndex)
    {
      m_provisionedProducts.push_back(provisionedProductsJsonList[provisionedProductsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TotalResultsCount"))
  {
    m_totalResultsCount = jsonValue.GetInteger("TotalResultsCount");

  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
