﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/AccountQuota.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeAccountAttributesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeAccountAttributesResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeAccountAttributesResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeAccountAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeAccountAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Account quota information.</p>
     */
    inline const Aws::Vector<AccountQuota>& GetAccountQuotas() const{ return m_accountQuotas; }
    inline void SetAccountQuotas(const Aws::Vector<AccountQuota>& value) { m_accountQuotas = value; }
    inline void SetAccountQuotas(Aws::Vector<AccountQuota>&& value) { m_accountQuotas = std::move(value); }
    inline DescribeAccountAttributesResult& WithAccountQuotas(const Aws::Vector<AccountQuota>& value) { SetAccountQuotas(value); return *this;}
    inline DescribeAccountAttributesResult& WithAccountQuotas(Aws::Vector<AccountQuota>&& value) { SetAccountQuotas(std::move(value)); return *this;}
    inline DescribeAccountAttributesResult& AddAccountQuotas(const AccountQuota& value) { m_accountQuotas.push_back(value); return *this; }
    inline DescribeAccountAttributesResult& AddAccountQuotas(AccountQuota&& value) { m_accountQuotas.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique DMS identifier for an account in a particular Amazon Web Services
     * Region. The value of this identifier has the following format:
     * <code>c99999999999</code>. DMS uses this identifier to name artifacts. For
     * example, DMS uses this identifier to name the default Amazon S3 bucket for
     * storing task assessment reports in a given Amazon Web Services Region. The
     * format of this S3 bucket name is the following:
     * <code>dms-<i>AccountNumber</i>-<i>UniqueAccountIdentifier</i>.</code> Here is an
     * example name for this default S3 bucket:
     * <code>dms-111122223333-c44445555666</code>.</p>  <p>DMS supports the
     * <code>UniqueAccountIdentifier</code> parameter in versions 3.1.4 and later.</p>
     * 
     */
    inline const Aws::String& GetUniqueAccountIdentifier() const{ return m_uniqueAccountIdentifier; }
    inline void SetUniqueAccountIdentifier(const Aws::String& value) { m_uniqueAccountIdentifier = value; }
    inline void SetUniqueAccountIdentifier(Aws::String&& value) { m_uniqueAccountIdentifier = std::move(value); }
    inline void SetUniqueAccountIdentifier(const char* value) { m_uniqueAccountIdentifier.assign(value); }
    inline DescribeAccountAttributesResult& WithUniqueAccountIdentifier(const Aws::String& value) { SetUniqueAccountIdentifier(value); return *this;}
    inline DescribeAccountAttributesResult& WithUniqueAccountIdentifier(Aws::String&& value) { SetUniqueAccountIdentifier(std::move(value)); return *this;}
    inline DescribeAccountAttributesResult& WithUniqueAccountIdentifier(const char* value) { SetUniqueAccountIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAccountAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAccountAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAccountAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AccountQuota> m_accountQuotas;

    Aws::String m_uniqueAccountIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
