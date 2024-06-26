﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The ID and expiry time of the attachment set returned by the
   * <a>AddAttachmentsToSet</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddAttachmentsToSetResponse">AWS
   * API Reference</a></p>
   */
  class AddAttachmentsToSetResult
  {
  public:
    AWS_SUPPORT_API AddAttachmentsToSetResult();
    AWS_SUPPORT_API AddAttachmentsToSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API AddAttachmentsToSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> was not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> was specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline const Aws::String& GetAttachmentSetId() const{ return m_attachmentSetId; }
    inline void SetAttachmentSetId(const Aws::String& value) { m_attachmentSetId = value; }
    inline void SetAttachmentSetId(Aws::String&& value) { m_attachmentSetId = std::move(value); }
    inline void SetAttachmentSetId(const char* value) { m_attachmentSetId.assign(value); }
    inline AddAttachmentsToSetResult& WithAttachmentSetId(const Aws::String& value) { SetAttachmentSetId(value); return *this;}
    inline AddAttachmentsToSetResult& WithAttachmentSetId(Aws::String&& value) { SetAttachmentSetId(std::move(value)); return *this;}
    inline AddAttachmentsToSetResult& WithAttachmentSetId(const char* value) { SetAttachmentSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date when the attachment set expires.</p>
     */
    inline const Aws::String& GetExpiryTime() const{ return m_expiryTime; }
    inline void SetExpiryTime(const Aws::String& value) { m_expiryTime = value; }
    inline void SetExpiryTime(Aws::String&& value) { m_expiryTime = std::move(value); }
    inline void SetExpiryTime(const char* value) { m_expiryTime.assign(value); }
    inline AddAttachmentsToSetResult& WithExpiryTime(const Aws::String& value) { SetExpiryTime(value); return *this;}
    inline AddAttachmentsToSetResult& WithExpiryTime(Aws::String&& value) { SetExpiryTime(std::move(value)); return *this;}
    inline AddAttachmentsToSetResult& WithExpiryTime(const char* value) { SetExpiryTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AddAttachmentsToSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AddAttachmentsToSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AddAttachmentsToSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_attachmentSetId;

    Aws::String m_expiryTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
