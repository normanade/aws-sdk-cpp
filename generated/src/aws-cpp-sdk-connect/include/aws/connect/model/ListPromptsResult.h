﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PromptSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListPromptsResult
  {
  public:
    AWS_CONNECT_API ListPromptsResult();
    AWS_CONNECT_API ListPromptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListPromptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the prompts.</p>
     */
    inline const Aws::Vector<PromptSummary>& GetPromptSummaryList() const{ return m_promptSummaryList; }
    inline void SetPromptSummaryList(const Aws::Vector<PromptSummary>& value) { m_promptSummaryList = value; }
    inline void SetPromptSummaryList(Aws::Vector<PromptSummary>&& value) { m_promptSummaryList = std::move(value); }
    inline ListPromptsResult& WithPromptSummaryList(const Aws::Vector<PromptSummary>& value) { SetPromptSummaryList(value); return *this;}
    inline ListPromptsResult& WithPromptSummaryList(Aws::Vector<PromptSummary>&& value) { SetPromptSummaryList(std::move(value)); return *this;}
    inline ListPromptsResult& AddPromptSummaryList(const PromptSummary& value) { m_promptSummaryList.push_back(value); return *this; }
    inline ListPromptsResult& AddPromptSummaryList(PromptSummary&& value) { m_promptSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPromptsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPromptsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPromptsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPromptsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPromptsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPromptsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PromptSummary> m_promptSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
