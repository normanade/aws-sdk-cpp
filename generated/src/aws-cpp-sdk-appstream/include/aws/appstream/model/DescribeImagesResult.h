﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/Image.h>
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
namespace AppStream
{
namespace Model
{
  class DescribeImagesResult
  {
  public:
    AWS_APPSTREAM_API DescribeImagesResult();
    AWS_APPSTREAM_API DescribeImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the images.</p>
     */
    inline const Aws::Vector<Image>& GetImages() const{ return m_images; }
    inline void SetImages(const Aws::Vector<Image>& value) { m_images = value; }
    inline void SetImages(Aws::Vector<Image>&& value) { m_images = std::move(value); }
    inline DescribeImagesResult& WithImages(const Aws::Vector<Image>& value) { SetImages(value); return *this;}
    inline DescribeImagesResult& WithImages(Aws::Vector<Image>&& value) { SetImages(std::move(value)); return *this;}
    inline DescribeImagesResult& AddImages(const Image& value) { m_images.push_back(value); return *this; }
    inline DescribeImagesResult& AddImages(Image&& value) { m_images.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeImagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeImagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeImagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeImagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeImagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeImagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Image> m_images;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
