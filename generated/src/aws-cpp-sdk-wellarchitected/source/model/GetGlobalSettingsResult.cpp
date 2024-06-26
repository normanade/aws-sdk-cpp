﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/GetGlobalSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetGlobalSettingsResult::GetGlobalSettingsResult() : 
    m_organizationSharingStatus(OrganizationSharingStatus::NOT_SET),
    m_discoveryIntegrationStatus(DiscoveryIntegrationStatus::NOT_SET)
{
}

GetGlobalSettingsResult::GetGlobalSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetGlobalSettingsResult()
{
  *this = result;
}

GetGlobalSettingsResult& GetGlobalSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OrganizationSharingStatus"))
  {
    m_organizationSharingStatus = OrganizationSharingStatusMapper::GetOrganizationSharingStatusForName(jsonValue.GetString("OrganizationSharingStatus"));

  }

  if(jsonValue.ValueExists("DiscoveryIntegrationStatus"))
  {
    m_discoveryIntegrationStatus = DiscoveryIntegrationStatusMapper::GetDiscoveryIntegrationStatusForName(jsonValue.GetString("DiscoveryIntegrationStatus"));

  }

  if(jsonValue.ValueExists("JiraConfiguration"))
  {
    m_jiraConfiguration = jsonValue.GetObject("JiraConfiguration");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
