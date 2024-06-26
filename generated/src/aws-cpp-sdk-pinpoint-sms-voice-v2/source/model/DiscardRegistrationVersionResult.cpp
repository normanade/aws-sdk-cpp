﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DiscardRegistrationVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DiscardRegistrationVersionResult::DiscardRegistrationVersionResult() : 
    m_versionNumber(0),
    m_registrationVersionStatus(RegistrationVersionStatus::NOT_SET)
{
}

DiscardRegistrationVersionResult::DiscardRegistrationVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DiscardRegistrationVersionResult()
{
  *this = result;
}

DiscardRegistrationVersionResult& DiscardRegistrationVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RegistrationArn"))
  {
    m_registrationArn = jsonValue.GetString("RegistrationArn");

  }

  if(jsonValue.ValueExists("RegistrationId"))
  {
    m_registrationId = jsonValue.GetString("RegistrationId");

  }

  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("VersionNumber");

  }

  if(jsonValue.ValueExists("RegistrationVersionStatus"))
  {
    m_registrationVersionStatus = RegistrationVersionStatusMapper::GetRegistrationVersionStatusForName(jsonValue.GetString("RegistrationVersionStatus"));

  }

  if(jsonValue.ValueExists("RegistrationVersionStatusHistory"))
  {
    m_registrationVersionStatusHistory = jsonValue.GetObject("RegistrationVersionStatusHistory");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
