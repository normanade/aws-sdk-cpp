﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/AccountAssignmentOperationStatus.h>
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
namespace SSOAdmin
{
namespace Model
{
  class DescribeAccountAssignmentCreationStatusResult
  {
  public:
    AWS_SSOADMIN_API DescribeAccountAssignmentCreationStatusResult();
    AWS_SSOADMIN_API DescribeAccountAssignmentCreationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeAccountAssignmentCreationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status object for the account assignment creation operation.</p>
     */
    inline const AccountAssignmentOperationStatus& GetAccountAssignmentCreationStatus() const{ return m_accountAssignmentCreationStatus; }
    inline void SetAccountAssignmentCreationStatus(const AccountAssignmentOperationStatus& value) { m_accountAssignmentCreationStatus = value; }
    inline void SetAccountAssignmentCreationStatus(AccountAssignmentOperationStatus&& value) { m_accountAssignmentCreationStatus = std::move(value); }
    inline DescribeAccountAssignmentCreationStatusResult& WithAccountAssignmentCreationStatus(const AccountAssignmentOperationStatus& value) { SetAccountAssignmentCreationStatus(value); return *this;}
    inline DescribeAccountAssignmentCreationStatusResult& WithAccountAssignmentCreationStatus(AccountAssignmentOperationStatus&& value) { SetAccountAssignmentCreationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAccountAssignmentCreationStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAccountAssignmentCreationStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAccountAssignmentCreationStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AccountAssignmentOperationStatus m_accountAssignmentCreationStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
