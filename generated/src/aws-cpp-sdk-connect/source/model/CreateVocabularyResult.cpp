﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateVocabularyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateVocabularyResult::CreateVocabularyResult() : 
    m_state(VocabularyState::NOT_SET)
{
}

CreateVocabularyResult::CreateVocabularyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateVocabularyResult()
{
  *this = result;
}

CreateVocabularyResult& CreateVocabularyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VocabularyArn"))
  {
    m_vocabularyArn = jsonValue.GetString("VocabularyArn");

  }

  if(jsonValue.ValueExists("VocabularyId"))
  {
    m_vocabularyId = jsonValue.GetString("VocabularyId");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = VocabularyStateMapper::GetVocabularyStateForName(jsonValue.GetString("State"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
