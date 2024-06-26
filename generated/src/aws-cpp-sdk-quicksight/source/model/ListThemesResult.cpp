﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ListThemesResult.h>
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

ListThemesResult::ListThemesResult() : 
    m_status(0)
{
}

ListThemesResult::ListThemesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : ListThemesResult()
{
  *this = result;
}

ListThemesResult& ListThemesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ThemeSummaryList"))
  {
    Aws::Utils::Array<JsonView> themeSummaryListJsonList = jsonValue.GetArray("ThemeSummaryList");
    for(unsigned themeSummaryListIndex = 0; themeSummaryListIndex < themeSummaryListJsonList.GetLength(); ++themeSummaryListIndex)
    {
      m_themeSummaryList.push_back(themeSummaryListJsonList[themeSummaryListIndex].AsObject());
    }
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


  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
