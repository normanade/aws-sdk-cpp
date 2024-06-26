﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeactivateEvaluationFormResult.h>
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

DeactivateEvaluationFormResult::DeactivateEvaluationFormResult() : 
    m_evaluationFormVersion(0)
{
}

DeactivateEvaluationFormResult::DeactivateEvaluationFormResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DeactivateEvaluationFormResult()
{
  *this = result;
}

DeactivateEvaluationFormResult& DeactivateEvaluationFormResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EvaluationFormId"))
  {
    m_evaluationFormId = jsonValue.GetString("EvaluationFormId");

  }

  if(jsonValue.ValueExists("EvaluationFormArn"))
  {
    m_evaluationFormArn = jsonValue.GetString("EvaluationFormArn");

  }

  if(jsonValue.ValueExists("EvaluationFormVersion"))
  {
    m_evaluationFormVersion = jsonValue.GetInteger("EvaluationFormVersion");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
