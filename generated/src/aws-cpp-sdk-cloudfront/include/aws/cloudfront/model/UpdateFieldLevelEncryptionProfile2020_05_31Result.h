﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FieldLevelEncryptionProfile.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  class UpdateFieldLevelEncryptionProfile2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API UpdateFieldLevelEncryptionProfile2020_05_31Result();
    AWS_CLOUDFRONT_API UpdateFieldLevelEncryptionProfile2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API UpdateFieldLevelEncryptionProfile2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Return the results of updating the profile.</p>
     */
    inline const FieldLevelEncryptionProfile& GetFieldLevelEncryptionProfile() const{ return m_fieldLevelEncryptionProfile; }
    inline void SetFieldLevelEncryptionProfile(const FieldLevelEncryptionProfile& value) { m_fieldLevelEncryptionProfile = value; }
    inline void SetFieldLevelEncryptionProfile(FieldLevelEncryptionProfile&& value) { m_fieldLevelEncryptionProfile = std::move(value); }
    inline UpdateFieldLevelEncryptionProfile2020_05_31Result& WithFieldLevelEncryptionProfile(const FieldLevelEncryptionProfile& value) { SetFieldLevelEncryptionProfile(value); return *this;}
    inline UpdateFieldLevelEncryptionProfile2020_05_31Result& WithFieldLevelEncryptionProfile(FieldLevelEncryptionProfile&& value) { SetFieldLevelEncryptionProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of the field-level encryption profile request.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline UpdateFieldLevelEncryptionProfile2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline UpdateFieldLevelEncryptionProfile2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline UpdateFieldLevelEncryptionProfile2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateFieldLevelEncryptionProfile2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateFieldLevelEncryptionProfile2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateFieldLevelEncryptionProfile2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    FieldLevelEncryptionProfile m_fieldLevelEncryptionProfile;

    Aws::String m_eTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
