﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
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
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p> <p>For
   * information about the underlying REST API, see <a
   * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-archive-post.html">Upload
   * Archive</a>. For conceptual information, see <a
   * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/working-with-archives.html">Working
   * with Archives in Amazon S3 Glacier</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ArchiveCreationOutput">AWS
   * API Reference</a></p>
   */
  class CompleteMultipartUploadResult
  {
  public:
    AWS_GLACIER_API CompleteMultipartUploadResult();
    AWS_GLACIER_API CompleteMultipartUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API CompleteMultipartUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The relative URI path of the newly added archive resource.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline CompleteMultipartUploadResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline CompleteMultipartUploadResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline CompleteMultipartUploadResult& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The checksum of the archive computed by Amazon S3 Glacier.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }
    inline CompleteMultipartUploadResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}
    inline CompleteMultipartUploadResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}
    inline CompleteMultipartUploadResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the archive. This value is also included as part of the
     * location.</p>
     */
    inline const Aws::String& GetArchiveId() const{ return m_archiveId; }
    inline void SetArchiveId(const Aws::String& value) { m_archiveId = value; }
    inline void SetArchiveId(Aws::String&& value) { m_archiveId = std::move(value); }
    inline void SetArchiveId(const char* value) { m_archiveId.assign(value); }
    inline CompleteMultipartUploadResult& WithArchiveId(const Aws::String& value) { SetArchiveId(value); return *this;}
    inline CompleteMultipartUploadResult& WithArchiveId(Aws::String&& value) { SetArchiveId(std::move(value)); return *this;}
    inline CompleteMultipartUploadResult& WithArchiveId(const char* value) { SetArchiveId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CompleteMultipartUploadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CompleteMultipartUploadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CompleteMultipartUploadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_location;

    Aws::String m_checksum;

    Aws::String m_archiveId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
