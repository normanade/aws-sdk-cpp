﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/StreamingImage.h>
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
namespace NimbleStudio
{
namespace Model
{
  class DeleteStreamingImageResult
  {
  public:
    AWS_NIMBLESTUDIO_API DeleteStreamingImageResult();
    AWS_NIMBLESTUDIO_API DeleteStreamingImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API DeleteStreamingImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The streaming image.</p>
     */
    inline const StreamingImage& GetStreamingImage() const{ return m_streamingImage; }
    inline void SetStreamingImage(const StreamingImage& value) { m_streamingImage = value; }
    inline void SetStreamingImage(StreamingImage&& value) { m_streamingImage = std::move(value); }
    inline DeleteStreamingImageResult& WithStreamingImage(const StreamingImage& value) { SetStreamingImage(value); return *this;}
    inline DeleteStreamingImageResult& WithStreamingImage(StreamingImage&& value) { SetStreamingImage(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteStreamingImageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteStreamingImageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteStreamingImageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    StreamingImage m_streamingImage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
