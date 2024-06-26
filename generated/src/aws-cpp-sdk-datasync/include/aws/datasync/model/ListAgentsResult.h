﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/AgentListEntry.h>
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
namespace DataSync
{
namespace Model
{
  /**
   * <p>ListAgentsResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListAgentsResponse">AWS
   * API Reference</a></p>
   */
  class ListAgentsResult
  {
  public:
    AWS_DATASYNC_API ListAgentsResult();
    AWS_DATASYNC_API ListAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API ListAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of DataSync agents in your Amazon Web Services account in the Amazon
     * Web Services Region specified in the request. The list is ordered by the agents'
     * Amazon Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<AgentListEntry>& GetAgents() const{ return m_agents; }
    inline void SetAgents(const Aws::Vector<AgentListEntry>& value) { m_agents = value; }
    inline void SetAgents(Aws::Vector<AgentListEntry>&& value) { m_agents = std::move(value); }
    inline ListAgentsResult& WithAgents(const Aws::Vector<AgentListEntry>& value) { SetAgents(value); return *this;}
    inline ListAgentsResult& WithAgents(Aws::Vector<AgentListEntry>&& value) { SetAgents(std::move(value)); return *this;}
    inline ListAgentsResult& AddAgents(const AgentListEntry& value) { m_agents.push_back(value); return *this; }
    inline ListAgentsResult& AddAgents(AgentListEntry&& value) { m_agents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAgentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAgentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAgentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAgentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAgentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAgentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AgentListEntry> m_agents;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
