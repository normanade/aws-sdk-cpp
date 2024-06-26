﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/CreateTransformerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateTransformerResult::CreateTransformerResult() : 
    m_fileFormat(FileFormat::NOT_SET),
    m_status(TransformerStatus::NOT_SET)
{
}

CreateTransformerResult::CreateTransformerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateTransformerResult()
{
  *this = result;
}

CreateTransformerResult& CreateTransformerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("transformerId"))
  {
    m_transformerId = jsonValue.GetString("transformerId");

  }

  if(jsonValue.ValueExists("transformerArn"))
  {
    m_transformerArn = jsonValue.GetString("transformerArn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("fileFormat"))
  {
    m_fileFormat = FileFormatMapper::GetFileFormatForName(jsonValue.GetString("fileFormat"));

  }

  if(jsonValue.ValueExists("mappingTemplate"))
  {
    m_mappingTemplate = jsonValue.GetString("mappingTemplate");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TransformerStatusMapper::GetTransformerStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("ediType"))
  {
    m_ediType = jsonValue.GetObject("ediType");

  }

  if(jsonValue.ValueExists("sampleDocument"))
  {
    m_sampleDocument = jsonValue.GetString("sampleDocument");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
