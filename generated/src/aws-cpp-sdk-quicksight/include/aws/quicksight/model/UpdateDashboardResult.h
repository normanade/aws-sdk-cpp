﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ResourceStatus.h>
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
namespace QuickSight
{
namespace Model
{
  class UpdateDashboardResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateDashboardResult();
    AWS_QUICKSIGHT_API UpdateDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateDashboardResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateDashboardResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateDashboardResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the dashboard, including the version number.</p>
     */
    inline const Aws::String& GetVersionArn() const{ return m_versionArn; }
    inline void SetVersionArn(const Aws::String& value) { m_versionArn = value; }
    inline void SetVersionArn(Aws::String&& value) { m_versionArn = std::move(value); }
    inline void SetVersionArn(const char* value) { m_versionArn.assign(value); }
    inline UpdateDashboardResult& WithVersionArn(const Aws::String& value) { SetVersionArn(value); return *this;}
    inline UpdateDashboardResult& WithVersionArn(Aws::String&& value) { SetVersionArn(std::move(value)); return *this;}
    inline UpdateDashboardResult& WithVersionArn(const char* value) { SetVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }
    inline void SetDashboardId(const Aws::String& value) { m_dashboardId = value; }
    inline void SetDashboardId(Aws::String&& value) { m_dashboardId = std::move(value); }
    inline void SetDashboardId(const char* value) { m_dashboardId.assign(value); }
    inline UpdateDashboardResult& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}
    inline UpdateDashboardResult& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}
    inline UpdateDashboardResult& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation status of the request.</p>
     */
    inline const ResourceStatus& GetCreationStatus() const{ return m_creationStatus; }
    inline void SetCreationStatus(const ResourceStatus& value) { m_creationStatus = value; }
    inline void SetCreationStatus(ResourceStatus&& value) { m_creationStatus = std::move(value); }
    inline UpdateDashboardResult& WithCreationStatus(const ResourceStatus& value) { SetCreationStatus(value); return *this;}
    inline UpdateDashboardResult& WithCreationStatus(ResourceStatus&& value) { SetCreationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline UpdateDashboardResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDashboardResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDashboardResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDashboardResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_versionArn;

    Aws::String m_dashboardId;

    ResourceStatus m_creationStatus;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
