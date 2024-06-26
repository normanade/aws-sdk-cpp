﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/BackupPlan.h>
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
namespace Backup
{
namespace Model
{
  class GetBackupPlanFromJSONResult
  {
  public:
    AWS_BACKUP_API GetBackupPlanFromJSONResult();
    AWS_BACKUP_API GetBackupPlanFromJSONResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetBackupPlanFromJSONResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the body of a backup plan. Includes a <code>BackupPlanName</code>
     * and one or more sets of <code>Rules</code>.</p>
     */
    inline const BackupPlan& GetBackupPlan() const{ return m_backupPlan; }
    inline void SetBackupPlan(const BackupPlan& value) { m_backupPlan = value; }
    inline void SetBackupPlan(BackupPlan&& value) { m_backupPlan = std::move(value); }
    inline GetBackupPlanFromJSONResult& WithBackupPlan(const BackupPlan& value) { SetBackupPlan(value); return *this;}
    inline GetBackupPlanFromJSONResult& WithBackupPlan(BackupPlan&& value) { SetBackupPlan(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBackupPlanFromJSONResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBackupPlanFromJSONResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBackupPlanFromJSONResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    BackupPlan m_backupPlan;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
