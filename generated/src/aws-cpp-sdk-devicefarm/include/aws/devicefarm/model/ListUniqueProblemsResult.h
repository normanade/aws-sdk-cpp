﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/ExecutionResult.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/UniqueProblem.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a list unique problems request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUniqueProblemsResult">AWS
   * API Reference</a></p>
   */
  class ListUniqueProblemsResult
  {
  public:
    AWS_DEVICEFARM_API ListUniqueProblemsResult();
    AWS_DEVICEFARM_API ListUniqueProblemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListUniqueProblemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the unique problems.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li>
     * <li> <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li>
     * <li> <p>STOPPED</p> </li> </ul>
     */
    inline const Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>>& GetUniqueProblems() const{ return m_uniqueProblems; }
    inline void SetUniqueProblems(const Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>>& value) { m_uniqueProblems = value; }
    inline void SetUniqueProblems(Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>>&& value) { m_uniqueProblems = std::move(value); }
    inline ListUniqueProblemsResult& WithUniqueProblems(const Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>>& value) { SetUniqueProblems(value); return *this;}
    inline ListUniqueProblemsResult& WithUniqueProblems(Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>>&& value) { SetUniqueProblems(std::move(value)); return *this;}
    inline ListUniqueProblemsResult& AddUniqueProblems(const ExecutionResult& key, const Aws::Vector<UniqueProblem>& value) { m_uniqueProblems.emplace(key, value); return *this; }
    inline ListUniqueProblemsResult& AddUniqueProblems(ExecutionResult&& key, const Aws::Vector<UniqueProblem>& value) { m_uniqueProblems.emplace(std::move(key), value); return *this; }
    inline ListUniqueProblemsResult& AddUniqueProblems(const ExecutionResult& key, Aws::Vector<UniqueProblem>&& value) { m_uniqueProblems.emplace(key, std::move(value)); return *this; }
    inline ListUniqueProblemsResult& AddUniqueProblems(ExecutionResult&& key, Aws::Vector<UniqueProblem>&& value) { m_uniqueProblems.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListUniqueProblemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUniqueProblemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUniqueProblemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListUniqueProblemsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListUniqueProblemsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListUniqueProblemsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>> m_uniqueProblems;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
