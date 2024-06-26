﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ActionSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListActionsResult
  {
  public:
    AWS_SAGEMAKER_API ListActionsResult();
    AWS_SAGEMAKER_API ListActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of actions and their properties.</p>
     */
    inline const Aws::Vector<ActionSummary>& GetActionSummaries() const{ return m_actionSummaries; }
    inline void SetActionSummaries(const Aws::Vector<ActionSummary>& value) { m_actionSummaries = value; }
    inline void SetActionSummaries(Aws::Vector<ActionSummary>&& value) { m_actionSummaries = std::move(value); }
    inline ListActionsResult& WithActionSummaries(const Aws::Vector<ActionSummary>& value) { SetActionSummaries(value); return *this;}
    inline ListActionsResult& WithActionSummaries(Aws::Vector<ActionSummary>&& value) { SetActionSummaries(std::move(value)); return *this;}
    inline ListActionsResult& AddActionSummaries(const ActionSummary& value) { m_actionSummaries.push_back(value); return *this; }
    inline ListActionsResult& AddActionSummaries(ActionSummary&& value) { m_actionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListActionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListActionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListActionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ActionSummary> m_actionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
