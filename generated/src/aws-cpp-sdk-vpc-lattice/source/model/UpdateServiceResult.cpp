﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/UpdateServiceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateServiceResult::UpdateServiceResult() : 
    m_authType(AuthType::NOT_SET)
{
}

UpdateServiceResult::UpdateServiceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateServiceResult()
{
  *this = result;
}

UpdateServiceResult& UpdateServiceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("authType"))
  {
    m_authType = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("authType"));

  }

  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");

  }

  if(jsonValue.ValueExists("customDomainName"))
  {
    m_customDomainName = jsonValue.GetString("customDomainName");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
