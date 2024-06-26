﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/TagOptionDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class ListTagOptionsResult
  {
  public:
    AWS_SERVICECATALOG_API ListTagOptionsResult();
    AWS_SERVICECATALOG_API ListTagOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListTagOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the TagOptions.</p>
     */
    inline const Aws::Vector<TagOptionDetail>& GetTagOptionDetails() const{ return m_tagOptionDetails; }
    inline void SetTagOptionDetails(const Aws::Vector<TagOptionDetail>& value) { m_tagOptionDetails = value; }
    inline void SetTagOptionDetails(Aws::Vector<TagOptionDetail>&& value) { m_tagOptionDetails = std::move(value); }
    inline ListTagOptionsResult& WithTagOptionDetails(const Aws::Vector<TagOptionDetail>& value) { SetTagOptionDetails(value); return *this;}
    inline ListTagOptionsResult& WithTagOptionDetails(Aws::Vector<TagOptionDetail>&& value) { SetTagOptionDetails(std::move(value)); return *this;}
    inline ListTagOptionsResult& AddTagOptionDetails(const TagOptionDetail& value) { m_tagOptionDetails.push_back(value); return *this; }
    inline ListTagOptionsResult& AddTagOptionDetails(TagOptionDetail&& value) { m_tagOptionDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }
    inline void SetPageToken(const Aws::String& value) { m_pageToken = value; }
    inline void SetPageToken(Aws::String&& value) { m_pageToken = std::move(value); }
    inline void SetPageToken(const char* value) { m_pageToken.assign(value); }
    inline ListTagOptionsResult& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}
    inline ListTagOptionsResult& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}
    inline ListTagOptionsResult& WithPageToken(const char* value) { SetPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTagOptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTagOptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTagOptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TagOptionDetail> m_tagOptionDetails;

    Aws::String m_pageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
