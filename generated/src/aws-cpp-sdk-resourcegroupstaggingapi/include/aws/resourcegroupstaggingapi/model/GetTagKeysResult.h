﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{
  class GetTagKeysResult
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetTagKeysResult();
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetTagKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetTagKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A string that indicates that there is more data available than this response
     * contains. To receive the next part of the response, specify this response value
     * as the <code>PaginationToken</code> value in the request for the next page.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }
    inline void SetPaginationToken(const Aws::String& value) { m_paginationToken = value; }
    inline void SetPaginationToken(Aws::String&& value) { m_paginationToken = std::move(value); }
    inline void SetPaginationToken(const char* value) { m_paginationToken.assign(value); }
    inline GetTagKeysResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}
    inline GetTagKeysResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}
    inline GetTagKeysResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of all tag keys in the Amazon Web Services account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeys = value; }
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeys = std::move(value); }
    inline GetTagKeysResult& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}
    inline GetTagKeysResult& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}
    inline GetTagKeysResult& AddTagKeys(const Aws::String& value) { m_tagKeys.push_back(value); return *this; }
    inline GetTagKeysResult& AddTagKeys(Aws::String&& value) { m_tagKeys.push_back(std::move(value)); return *this; }
    inline GetTagKeysResult& AddTagKeys(const char* value) { m_tagKeys.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTagKeysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTagKeysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTagKeysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_paginationToken;

    Aws::Vector<Aws::String> m_tagKeys;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
