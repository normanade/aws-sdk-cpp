﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/GrantListEntry.h>
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
namespace KMS
{
namespace Model
{
  class ListRetirableGrantsResult
  {
  public:
    AWS_KMS_API ListRetirableGrantsResult();
    AWS_KMS_API ListRetirableGrantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API ListRetirableGrantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of grants.</p>
     */
    inline const Aws::Vector<GrantListEntry>& GetGrants() const{ return m_grants; }
    inline void SetGrants(const Aws::Vector<GrantListEntry>& value) { m_grants = value; }
    inline void SetGrants(Aws::Vector<GrantListEntry>&& value) { m_grants = std::move(value); }
    inline ListRetirableGrantsResult& WithGrants(const Aws::Vector<GrantListEntry>& value) { SetGrants(value); return *this;}
    inline ListRetirableGrantsResult& WithGrants(Aws::Vector<GrantListEntry>&& value) { SetGrants(std::move(value)); return *this;}
    inline ListRetirableGrantsResult& AddGrants(const GrantListEntry& value) { m_grants.push_back(value); return *this; }
    inline ListRetirableGrantsResult& AddGrants(GrantListEntry&& value) { m_grants.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline ListRetirableGrantsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListRetirableGrantsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListRetirableGrantsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more items in the list. When this
     * value is true, the list in this response is truncated. To get more items, pass
     * the value of the <code>NextMarker</code> element in this response to the
     * <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline bool GetTruncated() const{ return m_truncated; }
    inline void SetTruncated(bool value) { m_truncated = value; }
    inline ListRetirableGrantsResult& WithTruncated(bool value) { SetTruncated(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRetirableGrantsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRetirableGrantsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRetirableGrantsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GrantListEntry> m_grants;

    Aws::String m_nextMarker;

    bool m_truncated;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
