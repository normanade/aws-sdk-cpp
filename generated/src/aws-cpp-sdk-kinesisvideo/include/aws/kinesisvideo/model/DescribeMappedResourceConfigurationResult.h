﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/MappedResourceConfigurationListItem.h>
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
namespace KinesisVideo
{
namespace Model
{
  class DescribeMappedResourceConfigurationResult
  {
  public:
    AWS_KINESISVIDEO_API DescribeMappedResourceConfigurationResult();
    AWS_KINESISVIDEO_API DescribeMappedResourceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API DescribeMappedResourceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline const Aws::Vector<MappedResourceConfigurationListItem>& GetMappedResourceConfigurationList() const{ return m_mappedResourceConfigurationList; }
    inline void SetMappedResourceConfigurationList(const Aws::Vector<MappedResourceConfigurationListItem>& value) { m_mappedResourceConfigurationList = value; }
    inline void SetMappedResourceConfigurationList(Aws::Vector<MappedResourceConfigurationListItem>&& value) { m_mappedResourceConfigurationList = std::move(value); }
    inline DescribeMappedResourceConfigurationResult& WithMappedResourceConfigurationList(const Aws::Vector<MappedResourceConfigurationListItem>& value) { SetMappedResourceConfigurationList(value); return *this;}
    inline DescribeMappedResourceConfigurationResult& WithMappedResourceConfigurationList(Aws::Vector<MappedResourceConfigurationListItem>&& value) { SetMappedResourceConfigurationList(std::move(value)); return *this;}
    inline DescribeMappedResourceConfigurationResult& AddMappedResourceConfigurationList(const MappedResourceConfigurationListItem& value) { m_mappedResourceConfigurationList.push_back(value); return *this; }
    inline DescribeMappedResourceConfigurationResult& AddMappedResourceConfigurationList(MappedResourceConfigurationListItem&& value) { m_mappedResourceConfigurationList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that was used in the <code>NextToken</code>request to fetch the
     * next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeMappedResourceConfigurationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeMappedResourceConfigurationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeMappedResourceConfigurationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMappedResourceConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMappedResourceConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMappedResourceConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MappedResourceConfigurationListItem> m_mappedResourceConfigurationList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
