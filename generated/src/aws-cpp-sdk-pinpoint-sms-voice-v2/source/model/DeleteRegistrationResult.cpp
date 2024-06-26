﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DeleteRegistrationResult.h>
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

DeleteRegistrationResult::DeleteRegistrationResult() : 
    m_registrationStatus(RegistrationStatus::NOT_SET),
    m_currentVersionNumber(0),
    m_approvedVersionNumber(0),
    m_latestDeniedVersionNumber(0)
{
}

DeleteRegistrationResult::DeleteRegistrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DeleteRegistrationResult()
{
  *this = result;
}

DeleteRegistrationResult& DeleteRegistrationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("RegistrationType"))
  {
    m_registrationType = jsonValue.GetString("RegistrationType");

  }

  if(jsonValue.ValueExists("RegistrationStatus"))
  {
    m_registrationStatus = RegistrationStatusMapper::GetRegistrationStatusForName(jsonValue.GetString("RegistrationStatus"));

  }

  if(jsonValue.ValueExists("CurrentVersionNumber"))
  {
    m_currentVersionNumber = jsonValue.GetInt64("CurrentVersionNumber");

  }

  if(jsonValue.ValueExists("ApprovedVersionNumber"))
  {
    m_approvedVersionNumber = jsonValue.GetInt64("ApprovedVersionNumber");

  }

  if(jsonValue.ValueExists("LatestDeniedVersionNumber"))
  {
    m_latestDeniedVersionNumber = jsonValue.GetInt64("LatestDeniedVersionNumber");

  }

  if(jsonValue.ValueExists("AdditionalAttributes"))
  {
    Aws::Map<Aws::String, JsonView> additionalAttributesJsonMap = jsonValue.GetObject("AdditionalAttributes").GetAllObjects();
    for(auto& additionalAttributesItem : additionalAttributesJsonMap)
    {
      m_additionalAttributes[additionalAttributesItem.first] = additionalAttributesItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
