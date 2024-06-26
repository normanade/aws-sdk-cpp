﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregateResourceIdentifier.h>
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
namespace ConfigService
{
namespace Model
{
  class ListAggregateDiscoveredResourcesResult
  {
  public:
    AWS_CONFIGSERVICE_API ListAggregateDiscoveredResourcesResult();
    AWS_CONFIGSERVICE_API ListAggregateDiscoveredResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API ListAggregateDiscoveredResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of <code>ResourceIdentifiers</code> objects.</p>
     */
    inline const Aws::Vector<AggregateResourceIdentifier>& GetResourceIdentifiers() const{ return m_resourceIdentifiers; }
    inline void SetResourceIdentifiers(const Aws::Vector<AggregateResourceIdentifier>& value) { m_resourceIdentifiers = value; }
    inline void SetResourceIdentifiers(Aws::Vector<AggregateResourceIdentifier>&& value) { m_resourceIdentifiers = std::move(value); }
    inline ListAggregateDiscoveredResourcesResult& WithResourceIdentifiers(const Aws::Vector<AggregateResourceIdentifier>& value) { SetResourceIdentifiers(value); return *this;}
    inline ListAggregateDiscoveredResourcesResult& WithResourceIdentifiers(Aws::Vector<AggregateResourceIdentifier>&& value) { SetResourceIdentifiers(std::move(value)); return *this;}
    inline ListAggregateDiscoveredResourcesResult& AddResourceIdentifiers(const AggregateResourceIdentifier& value) { m_resourceIdentifiers.push_back(value); return *this; }
    inline ListAggregateDiscoveredResourcesResult& AddResourceIdentifiers(AggregateResourceIdentifier&& value) { m_resourceIdentifiers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAggregateDiscoveredResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAggregateDiscoveredResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAggregateDiscoveredResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAggregateDiscoveredResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAggregateDiscoveredResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAggregateDiscoveredResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AggregateResourceIdentifier> m_resourceIdentifiers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
