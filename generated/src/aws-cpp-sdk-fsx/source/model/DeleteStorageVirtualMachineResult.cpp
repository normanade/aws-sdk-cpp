﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteStorageVirtualMachineResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteStorageVirtualMachineResult::DeleteStorageVirtualMachineResult() : 
    m_lifecycle(StorageVirtualMachineLifecycle::NOT_SET)
{
}

DeleteStorageVirtualMachineResult::DeleteStorageVirtualMachineResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DeleteStorageVirtualMachineResult()
{
  *this = result;
}

DeleteStorageVirtualMachineResult& DeleteStorageVirtualMachineResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StorageVirtualMachineId"))
  {
    m_storageVirtualMachineId = jsonValue.GetString("StorageVirtualMachineId");

  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = StorageVirtualMachineLifecycleMapper::GetStorageVirtualMachineLifecycleForName(jsonValue.GetString("Lifecycle"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
