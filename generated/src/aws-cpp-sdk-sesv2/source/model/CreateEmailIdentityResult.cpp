﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/CreateEmailIdentityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateEmailIdentityResult::CreateEmailIdentityResult() : 
    m_identityType(IdentityType::NOT_SET),
    m_verifiedForSendingStatus(false)
{
}

CreateEmailIdentityResult::CreateEmailIdentityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateEmailIdentityResult()
{
  *this = result;
}

CreateEmailIdentityResult& CreateEmailIdentityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityType"))
  {
    m_identityType = IdentityTypeMapper::GetIdentityTypeForName(jsonValue.GetString("IdentityType"));

  }

  if(jsonValue.ValueExists("VerifiedForSendingStatus"))
  {
    m_verifiedForSendingStatus = jsonValue.GetBool("VerifiedForSendingStatus");

  }

  if(jsonValue.ValueExists("DkimAttributes"))
  {
    m_dkimAttributes = jsonValue.GetObject("DkimAttributes");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
