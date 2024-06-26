﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migration-hub-refactor-spaces/model/RouteSummary.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{
  class ListRoutesResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ListRoutesResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API ListRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API ListRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRoutesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRoutesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRoutesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of <code>RouteSummary</code> objects. </p>
     */
    inline const Aws::Vector<RouteSummary>& GetRouteSummaryList() const{ return m_routeSummaryList; }
    inline void SetRouteSummaryList(const Aws::Vector<RouteSummary>& value) { m_routeSummaryList = value; }
    inline void SetRouteSummaryList(Aws::Vector<RouteSummary>&& value) { m_routeSummaryList = std::move(value); }
    inline ListRoutesResult& WithRouteSummaryList(const Aws::Vector<RouteSummary>& value) { SetRouteSummaryList(value); return *this;}
    inline ListRoutesResult& WithRouteSummaryList(Aws::Vector<RouteSummary>&& value) { SetRouteSummaryList(std::move(value)); return *this;}
    inline ListRoutesResult& AddRouteSummaryList(const RouteSummary& value) { m_routeSummaryList.push_back(value); return *this; }
    inline ListRoutesResult& AddRouteSummaryList(RouteSummary&& value) { m_routeSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRoutesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRoutesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRoutesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<RouteSummary> m_routeSummaryList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
