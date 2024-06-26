﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetMailboxDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMailboxDetailsResult::GetMailboxDetailsResult() : 
    m_mailboxQuota(0),
    m_mailboxSize(0.0)
{
}

GetMailboxDetailsResult::GetMailboxDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetMailboxDetailsResult()
{
  *this = result;
}

GetMailboxDetailsResult& GetMailboxDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MailboxQuota"))
  {
    m_mailboxQuota = jsonValue.GetInteger("MailboxQuota");

  }

  if(jsonValue.ValueExists("MailboxSize"))
  {
    m_mailboxSize = jsonValue.GetDouble("MailboxSize");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
