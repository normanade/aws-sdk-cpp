﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/scheduler/model/ScheduleGroupSummary.h>
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
namespace Scheduler
{
namespace Model
{
  class ListScheduleGroupsResult
  {
  public:
    AWS_SCHEDULER_API ListScheduleGroupsResult();
    AWS_SCHEDULER_API ListScheduleGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEDULER_API ListScheduleGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether there are additional results to retrieve. If the value is
     * null, there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListScheduleGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListScheduleGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListScheduleGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule groups that match the specified criteria.</p>
     */
    inline const Aws::Vector<ScheduleGroupSummary>& GetScheduleGroups() const{ return m_scheduleGroups; }
    inline void SetScheduleGroups(const Aws::Vector<ScheduleGroupSummary>& value) { m_scheduleGroups = value; }
    inline void SetScheduleGroups(Aws::Vector<ScheduleGroupSummary>&& value) { m_scheduleGroups = std::move(value); }
    inline ListScheduleGroupsResult& WithScheduleGroups(const Aws::Vector<ScheduleGroupSummary>& value) { SetScheduleGroups(value); return *this;}
    inline ListScheduleGroupsResult& WithScheduleGroups(Aws::Vector<ScheduleGroupSummary>&& value) { SetScheduleGroups(std::move(value)); return *this;}
    inline ListScheduleGroupsResult& AddScheduleGroups(const ScheduleGroupSummary& value) { m_scheduleGroups.push_back(value); return *this; }
    inline ListScheduleGroupsResult& AddScheduleGroups(ScheduleGroupSummary&& value) { m_scheduleGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListScheduleGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListScheduleGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListScheduleGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ScheduleGroupSummary> m_scheduleGroups;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
