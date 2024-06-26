﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ConformancePackComplianceScore.h>
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
  class ListConformancePackComplianceScoresResult
  {
  public:
    AWS_CONFIGSERVICE_API ListConformancePackComplianceScoresResult();
    AWS_CONFIGSERVICE_API ListConformancePackComplianceScoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API ListConformancePackComplianceScoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>nextToken</code> string that you can use to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConformancePackComplianceScoresResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConformancePackComplianceScoresResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConformancePackComplianceScoresResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ConformancePackComplianceScore</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackComplianceScore>& GetConformancePackComplianceScores() const{ return m_conformancePackComplianceScores; }
    inline void SetConformancePackComplianceScores(const Aws::Vector<ConformancePackComplianceScore>& value) { m_conformancePackComplianceScores = value; }
    inline void SetConformancePackComplianceScores(Aws::Vector<ConformancePackComplianceScore>&& value) { m_conformancePackComplianceScores = std::move(value); }
    inline ListConformancePackComplianceScoresResult& WithConformancePackComplianceScores(const Aws::Vector<ConformancePackComplianceScore>& value) { SetConformancePackComplianceScores(value); return *this;}
    inline ListConformancePackComplianceScoresResult& WithConformancePackComplianceScores(Aws::Vector<ConformancePackComplianceScore>&& value) { SetConformancePackComplianceScores(std::move(value)); return *this;}
    inline ListConformancePackComplianceScoresResult& AddConformancePackComplianceScores(const ConformancePackComplianceScore& value) { m_conformancePackComplianceScores.push_back(value); return *this; }
    inline ListConformancePackComplianceScoresResult& AddConformancePackComplianceScores(ConformancePackComplianceScore&& value) { m_conformancePackComplianceScores.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConformancePackComplianceScoresResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConformancePackComplianceScoresResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConformancePackComplianceScoresResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ConformancePackComplianceScore> m_conformancePackComplianceScores;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
