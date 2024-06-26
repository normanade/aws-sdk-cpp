﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateUpdatedImageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateUpdatedImageResult::CreateUpdatedImageResult() : 
    m_canUpdateImage(false)
{
}

CreateUpdatedImageResult::CreateUpdatedImageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateUpdatedImageResult()
{
  *this = result;
}

CreateUpdatedImageResult& CreateUpdatedImageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetObject("image");

  }

  if(jsonValue.ValueExists("canUpdateImage"))
  {
    m_canUpdateImage = jsonValue.GetBool("canUpdateImage");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
