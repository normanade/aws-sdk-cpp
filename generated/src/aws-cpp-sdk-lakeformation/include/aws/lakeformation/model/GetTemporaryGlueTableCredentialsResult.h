﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LakeFormation
{
namespace Model
{
  class GetTemporaryGlueTableCredentialsResult
  {
  public:
    AWS_LAKEFORMATION_API GetTemporaryGlueTableCredentialsResult();
    AWS_LAKEFORMATION_API GetTemporaryGlueTableCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetTemporaryGlueTableCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The access key ID for the temporary credentials.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyId = value; }
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyId = std::move(value); }
    inline void SetAccessKeyId(const char* value) { m_accessKeyId.assign(value); }
    inline GetTemporaryGlueTableCredentialsResult& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}
    inline GetTemporaryGlueTableCredentialsResult& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}
    inline GetTemporaryGlueTableCredentialsResult& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret key for the temporary credentials.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKey = value; }
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKey = std::move(value); }
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKey.assign(value); }
    inline GetTemporaryGlueTableCredentialsResult& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}
    inline GetTemporaryGlueTableCredentialsResult& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}
    inline GetTemporaryGlueTableCredentialsResult& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session token for the temporary credentials.</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }
    inline void SetSessionToken(const Aws::String& value) { m_sessionToken = value; }
    inline void SetSessionToken(Aws::String&& value) { m_sessionToken = std::move(value); }
    inline void SetSessionToken(const char* value) { m_sessionToken.assign(value); }
    inline GetTemporaryGlueTableCredentialsResult& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}
    inline GetTemporaryGlueTableCredentialsResult& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}
    inline GetTemporaryGlueTableCredentialsResult& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the temporary credentials expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expiration = value; }
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expiration = std::move(value); }
    inline GetTemporaryGlueTableCredentialsResult& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}
    inline GetTemporaryGlueTableCredentialsResult& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path for the temporary credentials.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVendedS3Path() const{ return m_vendedS3Path; }
    inline void SetVendedS3Path(const Aws::Vector<Aws::String>& value) { m_vendedS3Path = value; }
    inline void SetVendedS3Path(Aws::Vector<Aws::String>&& value) { m_vendedS3Path = std::move(value); }
    inline GetTemporaryGlueTableCredentialsResult& WithVendedS3Path(const Aws::Vector<Aws::String>& value) { SetVendedS3Path(value); return *this;}
    inline GetTemporaryGlueTableCredentialsResult& WithVendedS3Path(Aws::Vector<Aws::String>&& value) { SetVendedS3Path(std::move(value)); return *this;}
    inline GetTemporaryGlueTableCredentialsResult& AddVendedS3Path(const Aws::String& value) { m_vendedS3Path.push_back(value); return *this; }
    inline GetTemporaryGlueTableCredentialsResult& AddVendedS3Path(Aws::String&& value) { m_vendedS3Path.push_back(std::move(value)); return *this; }
    inline GetTemporaryGlueTableCredentialsResult& AddVendedS3Path(const char* value) { m_vendedS3Path.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTemporaryGlueTableCredentialsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTemporaryGlueTableCredentialsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTemporaryGlueTableCredentialsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_accessKeyId;

    Aws::String m_secretAccessKey;

    Aws::String m_sessionToken;

    Aws::Utils::DateTime m_expiration;

    Aws::Vector<Aws::String> m_vendedS3Path;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
