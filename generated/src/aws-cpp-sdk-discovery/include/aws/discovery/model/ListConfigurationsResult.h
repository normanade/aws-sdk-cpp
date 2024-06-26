﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class ListConfigurationsResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API ListConfigurationsResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API ListConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API ListConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns configuration details, including the configuration ID, attribute
     * names, and attribute values.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetConfigurations() const{ return m_configurations; }
    inline void SetConfigurations(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_configurations = value; }
    inline void SetConfigurations(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_configurations = std::move(value); }
    inline ListConfigurationsResult& WithConfigurations(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetConfigurations(value); return *this;}
    inline ListConfigurationsResult& WithConfigurations(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetConfigurations(std::move(value)); return *this;}
    inline ListConfigurationsResult& AddConfigurations(const Aws::Map<Aws::String, Aws::String>& value) { m_configurations.push_back(value); return *this; }
    inline ListConfigurationsResult& AddConfigurations(Aws::Map<Aws::String, Aws::String>&& value) { m_configurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token to retrieve the next set of results. For example, if your call to
     * ListConfigurations returned 100 items, but you set
     * <code>ListConfigurationsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with this token. Use this token in the next query to retrieve
     * the next set of 10.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_configurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
