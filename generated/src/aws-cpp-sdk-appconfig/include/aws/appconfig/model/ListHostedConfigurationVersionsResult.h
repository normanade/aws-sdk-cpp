﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/HostedConfigurationVersionSummary.h>
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
namespace AppConfig
{
namespace Model
{
  class ListHostedConfigurationVersionsResult
  {
  public:
    AWS_APPCONFIG_API ListHostedConfigurationVersionsResult();
    AWS_APPCONFIG_API ListHostedConfigurationVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API ListHostedConfigurationVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The elements from this collection.</p>
     */
    inline const Aws::Vector<HostedConfigurationVersionSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<HostedConfigurationVersionSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<HostedConfigurationVersionSummary>&& value) { m_items = std::move(value); }
    inline ListHostedConfigurationVersionsResult& WithItems(const Aws::Vector<HostedConfigurationVersionSummary>& value) { SetItems(value); return *this;}
    inline ListHostedConfigurationVersionsResult& WithItems(Aws::Vector<HostedConfigurationVersionSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListHostedConfigurationVersionsResult& AddItems(const HostedConfigurationVersionSummary& value) { m_items.push_back(value); return *this; }
    inline ListHostedConfigurationVersionsResult& AddItems(HostedConfigurationVersionSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListHostedConfigurationVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListHostedConfigurationVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListHostedConfigurationVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListHostedConfigurationVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListHostedConfigurationVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListHostedConfigurationVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<HostedConfigurationVersionSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
