﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DeleteAgentAliasResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteAgentAliasResult::DeleteAgentAliasResult() : 
    m_agentAliasStatus(AgentAliasStatus::NOT_SET)
{
}

DeleteAgentAliasResult::DeleteAgentAliasResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DeleteAgentAliasResult()
{
  *this = result;
}

DeleteAgentAliasResult& DeleteAgentAliasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("agentAliasId"))
  {
    m_agentAliasId = jsonValue.GetString("agentAliasId");

  }

  if(jsonValue.ValueExists("agentAliasStatus"))
  {
    m_agentAliasStatus = AgentAliasStatusMapper::GetAgentAliasStatusForName(jsonValue.GetString("agentAliasStatus"));

  }

  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
