﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteFileCacheResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteFileCacheResult::DeleteFileCacheResult() : 
    m_lifecycle(FileCacheLifecycle::NOT_SET)
{
}

DeleteFileCacheResult::DeleteFileCacheResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DeleteFileCacheResult()
{
  *this = result;
}

DeleteFileCacheResult& DeleteFileCacheResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FileCacheId"))
  {
    m_fileCacheId = jsonValue.GetString("FileCacheId");

  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = FileCacheLifecycleMapper::GetFileCacheLifecycleForName(jsonValue.GetString("Lifecycle"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
