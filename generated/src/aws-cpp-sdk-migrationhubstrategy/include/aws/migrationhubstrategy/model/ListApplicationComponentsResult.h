﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/ApplicationComponentDetail.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class ListApplicationComponentsResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListApplicationComponentsResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListApplicationComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListApplicationComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of application components with detailed information about each
     * component. </p>
     */
    inline const Aws::Vector<ApplicationComponentDetail>& GetApplicationComponentInfos() const{ return m_applicationComponentInfos; }
    inline void SetApplicationComponentInfos(const Aws::Vector<ApplicationComponentDetail>& value) { m_applicationComponentInfos = value; }
    inline void SetApplicationComponentInfos(Aws::Vector<ApplicationComponentDetail>&& value) { m_applicationComponentInfos = std::move(value); }
    inline ListApplicationComponentsResult& WithApplicationComponentInfos(const Aws::Vector<ApplicationComponentDetail>& value) { SetApplicationComponentInfos(value); return *this;}
    inline ListApplicationComponentsResult& WithApplicationComponentInfos(Aws::Vector<ApplicationComponentDetail>&& value) { SetApplicationComponentInfos(std::move(value)); return *this;}
    inline ListApplicationComponentsResult& AddApplicationComponentInfos(const ApplicationComponentDetail& value) { m_applicationComponentInfos.push_back(value); return *this; }
    inline ListApplicationComponentsResult& AddApplicationComponentInfos(ApplicationComponentDetail&& value) { m_applicationComponentInfos.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListApplicationComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListApplicationComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListApplicationComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListApplicationComponentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListApplicationComponentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListApplicationComponentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationComponentDetail> m_applicationComponentInfos;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
