﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionExecutionDetail.h>
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
namespace CodePipeline
{
namespace Model
{
  class ListActionExecutionsResult
  {
  public:
    AWS_CODEPIPELINE_API ListActionExecutionsResult();
    AWS_CODEPIPELINE_API ListActionExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API ListActionExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details for a list of recent executions, such as action execution ID.</p>
     */
    inline const Aws::Vector<ActionExecutionDetail>& GetActionExecutionDetails() const{ return m_actionExecutionDetails; }
    inline void SetActionExecutionDetails(const Aws::Vector<ActionExecutionDetail>& value) { m_actionExecutionDetails = value; }
    inline void SetActionExecutionDetails(Aws::Vector<ActionExecutionDetail>&& value) { m_actionExecutionDetails = std::move(value); }
    inline ListActionExecutionsResult& WithActionExecutionDetails(const Aws::Vector<ActionExecutionDetail>& value) { SetActionExecutionDetails(value); return *this;}
    inline ListActionExecutionsResult& WithActionExecutionDetails(Aws::Vector<ActionExecutionDetail>&& value) { SetActionExecutionDetails(std::move(value)); return *this;}
    inline ListActionExecutionsResult& AddActionExecutionDetails(const ActionExecutionDetail& value) { m_actionExecutionDetails.push_back(value); return *this; }
    inline ListActionExecutionsResult& AddActionExecutionDetails(ActionExecutionDetail&& value) { m_actionExecutionDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent
     * <code>ListActionExecutions</code> call to return the next set of action
     * executions in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListActionExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListActionExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListActionExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListActionExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListActionExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListActionExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ActionExecutionDetail> m_actionExecutionDetails;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
