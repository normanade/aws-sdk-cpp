﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/CreateTokenWithIAMResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSOOIDC::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateTokenWithIAMResult::CreateTokenWithIAMResult() : 
    m_expiresIn(0)
{
}

CreateTokenWithIAMResult::CreateTokenWithIAMResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateTokenWithIAMResult()
{
  *this = result;
}

CreateTokenWithIAMResult& CreateTokenWithIAMResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accessToken"))
  {
    m_accessToken = jsonValue.GetString("accessToken");

  }

  if(jsonValue.ValueExists("tokenType"))
  {
    m_tokenType = jsonValue.GetString("tokenType");

  }

  if(jsonValue.ValueExists("expiresIn"))
  {
    m_expiresIn = jsonValue.GetInteger("expiresIn");

  }

  if(jsonValue.ValueExists("refreshToken"))
  {
    m_refreshToken = jsonValue.GetString("refreshToken");

  }

  if(jsonValue.ValueExists("idToken"))
  {
    m_idToken = jsonValue.GetString("idToken");

  }

  if(jsonValue.ValueExists("issuedTokenType"))
  {
    m_issuedTokenType = jsonValue.GetString("issuedTokenType");

  }

  if(jsonValue.ValueExists("scope"))
  {
    Aws::Utils::Array<JsonView> scopeJsonList = jsonValue.GetArray("scope");
    for(unsigned scopeIndex = 0; scopeIndex < scopeJsonList.GetLength(); ++scopeIndex)
    {
      m_scope.push_back(scopeJsonList[scopeIndex].AsString());
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
