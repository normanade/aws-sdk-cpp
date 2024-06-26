﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
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
namespace AuditManager
{
namespace Model
{
  class GetOrganizationAdminAccountResult
  {
  public:
    AWS_AUDITMANAGER_API GetOrganizationAdminAccountResult();
    AWS_AUDITMANAGER_API GetOrganizationAdminAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetOrganizationAdminAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The identifier for the administrator account. </p>
     */
    inline const Aws::String& GetAdminAccountId() const{ return m_adminAccountId; }
    inline void SetAdminAccountId(const Aws::String& value) { m_adminAccountId = value; }
    inline void SetAdminAccountId(Aws::String&& value) { m_adminAccountId = std::move(value); }
    inline void SetAdminAccountId(const char* value) { m_adminAccountId.assign(value); }
    inline GetOrganizationAdminAccountResult& WithAdminAccountId(const Aws::String& value) { SetAdminAccountId(value); return *this;}
    inline GetOrganizationAdminAccountResult& WithAdminAccountId(Aws::String&& value) { SetAdminAccountId(std::move(value)); return *this;}
    inline GetOrganizationAdminAccountResult& WithAdminAccountId(const char* value) { SetAdminAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the organization. </p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationId.assign(value); }
    inline GetOrganizationAdminAccountResult& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline GetOrganizationAdminAccountResult& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline GetOrganizationAdminAccountResult& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetOrganizationAdminAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetOrganizationAdminAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetOrganizationAdminAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_adminAccountId;

    Aws::String m_organizationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
