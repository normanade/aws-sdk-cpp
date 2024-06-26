﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{
  class GetGroupCertificateConfigurationResult
  {
  public:
    AWS_GREENGRASS_API GetGroupCertificateConfigurationResult();
    AWS_GREENGRASS_API GetGroupCertificateConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetGroupCertificateConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The amount of time remaining before the certificate authority expires, in
     * milliseconds.
     */
    inline const Aws::String& GetCertificateAuthorityExpiryInMilliseconds() const{ return m_certificateAuthorityExpiryInMilliseconds; }
    inline void SetCertificateAuthorityExpiryInMilliseconds(const Aws::String& value) { m_certificateAuthorityExpiryInMilliseconds = value; }
    inline void SetCertificateAuthorityExpiryInMilliseconds(Aws::String&& value) { m_certificateAuthorityExpiryInMilliseconds = std::move(value); }
    inline void SetCertificateAuthorityExpiryInMilliseconds(const char* value) { m_certificateAuthorityExpiryInMilliseconds.assign(value); }
    inline GetGroupCertificateConfigurationResult& WithCertificateAuthorityExpiryInMilliseconds(const Aws::String& value) { SetCertificateAuthorityExpiryInMilliseconds(value); return *this;}
    inline GetGroupCertificateConfigurationResult& WithCertificateAuthorityExpiryInMilliseconds(Aws::String&& value) { SetCertificateAuthorityExpiryInMilliseconds(std::move(value)); return *this;}
    inline GetGroupCertificateConfigurationResult& WithCertificateAuthorityExpiryInMilliseconds(const char* value) { SetCertificateAuthorityExpiryInMilliseconds(value); return *this;}
    ///@}

    ///@{
    /**
     * The amount of time remaining before the certificate expires, in milliseconds.
     */
    inline const Aws::String& GetCertificateExpiryInMilliseconds() const{ return m_certificateExpiryInMilliseconds; }
    inline void SetCertificateExpiryInMilliseconds(const Aws::String& value) { m_certificateExpiryInMilliseconds = value; }
    inline void SetCertificateExpiryInMilliseconds(Aws::String&& value) { m_certificateExpiryInMilliseconds = std::move(value); }
    inline void SetCertificateExpiryInMilliseconds(const char* value) { m_certificateExpiryInMilliseconds.assign(value); }
    inline GetGroupCertificateConfigurationResult& WithCertificateExpiryInMilliseconds(const Aws::String& value) { SetCertificateExpiryInMilliseconds(value); return *this;}
    inline GetGroupCertificateConfigurationResult& WithCertificateExpiryInMilliseconds(Aws::String&& value) { SetCertificateExpiryInMilliseconds(std::move(value)); return *this;}
    inline GetGroupCertificateConfigurationResult& WithCertificateExpiryInMilliseconds(const char* value) { SetCertificateExpiryInMilliseconds(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the group certificate configuration.
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline void SetGroupId(const Aws::String& value) { m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupId.assign(value); }
    inline GetGroupCertificateConfigurationResult& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline GetGroupCertificateConfigurationResult& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline GetGroupCertificateConfigurationResult& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetGroupCertificateConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetGroupCertificateConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetGroupCertificateConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateAuthorityExpiryInMilliseconds;

    Aws::String m_certificateExpiryInMilliseconds;

    Aws::String m_groupId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
