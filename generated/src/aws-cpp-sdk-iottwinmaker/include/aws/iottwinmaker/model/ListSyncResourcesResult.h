﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/SyncResourceSummary.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class ListSyncResourcesResult
  {
  public:
    AWS_IOTTWINMAKER_API ListSyncResourcesResult();
    AWS_IOTTWINMAKER_API ListSyncResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListSyncResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The sync resources.</p>
     */
    inline const Aws::Vector<SyncResourceSummary>& GetSyncResources() const{ return m_syncResources; }
    inline void SetSyncResources(const Aws::Vector<SyncResourceSummary>& value) { m_syncResources = value; }
    inline void SetSyncResources(Aws::Vector<SyncResourceSummary>&& value) { m_syncResources = std::move(value); }
    inline ListSyncResourcesResult& WithSyncResources(const Aws::Vector<SyncResourceSummary>& value) { SetSyncResources(value); return *this;}
    inline ListSyncResourcesResult& WithSyncResources(Aws::Vector<SyncResourceSummary>&& value) { SetSyncResources(std::move(value)); return *this;}
    inline ListSyncResourcesResult& AddSyncResources(const SyncResourceSummary& value) { m_syncResources.push_back(value); return *this; }
    inline ListSyncResourcesResult& AddSyncResources(SyncResourceSummary&& value) { m_syncResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSyncResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSyncResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSyncResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSyncResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSyncResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSyncResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SyncResourceSummary> m_syncResources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
