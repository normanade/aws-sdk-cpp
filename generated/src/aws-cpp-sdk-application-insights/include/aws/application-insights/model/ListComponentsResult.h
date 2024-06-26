﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/ApplicationComponent.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class ListComponentsResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ListComponentsResult();
    AWS_APPLICATIONINSIGHTS_API ListComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API ListComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of application components.</p>
     */
    inline const Aws::Vector<ApplicationComponent>& GetApplicationComponentList() const{ return m_applicationComponentList; }
    inline void SetApplicationComponentList(const Aws::Vector<ApplicationComponent>& value) { m_applicationComponentList = value; }
    inline void SetApplicationComponentList(Aws::Vector<ApplicationComponent>&& value) { m_applicationComponentList = std::move(value); }
    inline ListComponentsResult& WithApplicationComponentList(const Aws::Vector<ApplicationComponent>& value) { SetApplicationComponentList(value); return *this;}
    inline ListComponentsResult& WithApplicationComponentList(Aws::Vector<ApplicationComponent>&& value) { SetApplicationComponentList(std::move(value)); return *this;}
    inline ListComponentsResult& AddApplicationComponentList(const ApplicationComponent& value) { m_applicationComponentList.push_back(value); return *this; }
    inline ListComponentsResult& AddApplicationComponentList(ApplicationComponent&& value) { m_applicationComponentList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListComponentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListComponentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListComponentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationComponent> m_applicationComponentList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
