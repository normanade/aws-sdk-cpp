﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/ResourceInfo.h>
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
  class ListResourcesResult
  {
  public:
    AWS_LAKEFORMATION_API ListResourcesResult();
    AWS_LAKEFORMATION_API ListResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A summary of the data lake resources.</p>
     */
    inline const Aws::Vector<ResourceInfo>& GetResourceInfoList() const{ return m_resourceInfoList; }
    inline void SetResourceInfoList(const Aws::Vector<ResourceInfo>& value) { m_resourceInfoList = value; }
    inline void SetResourceInfoList(Aws::Vector<ResourceInfo>&& value) { m_resourceInfoList = std::move(value); }
    inline ListResourcesResult& WithResourceInfoList(const Aws::Vector<ResourceInfo>& value) { SetResourceInfoList(value); return *this;}
    inline ListResourcesResult& WithResourceInfoList(Aws::Vector<ResourceInfo>&& value) { SetResourceInfoList(std::move(value)); return *this;}
    inline ListResourcesResult& AddResourceInfoList(const ResourceInfo& value) { m_resourceInfoList.push_back(value); return *this; }
    inline ListResourcesResult& AddResourceInfoList(ResourceInfo&& value) { m_resourceInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceInfo> m_resourceInfoList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
