﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BackupDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  class DescribeBackupResult
  {
  public:
    AWS_DYNAMODB_API DescribeBackupResult();
    AWS_DYNAMODB_API DescribeBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the description of the backup created for the table.</p>
     */
    inline const BackupDescription& GetBackupDescription() const{ return m_backupDescription; }
    inline void SetBackupDescription(const BackupDescription& value) { m_backupDescription = value; }
    inline void SetBackupDescription(BackupDescription&& value) { m_backupDescription = std::move(value); }
    inline DescribeBackupResult& WithBackupDescription(const BackupDescription& value) { SetBackupDescription(value); return *this;}
    inline DescribeBackupResult& WithBackupDescription(BackupDescription&& value) { SetBackupDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeBackupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeBackupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeBackupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    BackupDescription m_backupDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
