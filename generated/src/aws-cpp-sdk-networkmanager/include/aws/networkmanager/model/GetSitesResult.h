﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Site.h>
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
namespace NetworkManager
{
namespace Model
{
  class GetSitesResult
  {
  public:
    AWS_NETWORKMANAGER_API GetSitesResult();
    AWS_NETWORKMANAGER_API GetSitesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetSitesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The sites.</p>
     */
    inline const Aws::Vector<Site>& GetSites() const{ return m_sites; }
    inline void SetSites(const Aws::Vector<Site>& value) { m_sites = value; }
    inline void SetSites(Aws::Vector<Site>&& value) { m_sites = std::move(value); }
    inline GetSitesResult& WithSites(const Aws::Vector<Site>& value) { SetSites(value); return *this;}
    inline GetSitesResult& WithSites(Aws::Vector<Site>&& value) { SetSites(std::move(value)); return *this;}
    inline GetSitesResult& AddSites(const Site& value) { m_sites.push_back(value); return *this; }
    inline GetSitesResult& AddSites(Site&& value) { m_sites.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetSitesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetSitesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetSitesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSitesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSitesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSitesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Site> m_sites;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
