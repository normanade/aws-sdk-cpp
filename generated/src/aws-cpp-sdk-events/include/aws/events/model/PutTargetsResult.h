﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/PutTargetsResultEntry.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class PutTargetsResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API PutTargetsResult();
    AWS_CLOUDWATCHEVENTS_API PutTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API PutTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of failed entries.</p>
     */
    inline int GetFailedEntryCount() const{ return m_failedEntryCount; }
    inline void SetFailedEntryCount(int value) { m_failedEntryCount = value; }
    inline PutTargetsResult& WithFailedEntryCount(int value) { SetFailedEntryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failed target entries.</p>
     */
    inline const Aws::Vector<PutTargetsResultEntry>& GetFailedEntries() const{ return m_failedEntries; }
    inline void SetFailedEntries(const Aws::Vector<PutTargetsResultEntry>& value) { m_failedEntries = value; }
    inline void SetFailedEntries(Aws::Vector<PutTargetsResultEntry>&& value) { m_failedEntries = std::move(value); }
    inline PutTargetsResult& WithFailedEntries(const Aws::Vector<PutTargetsResultEntry>& value) { SetFailedEntries(value); return *this;}
    inline PutTargetsResult& WithFailedEntries(Aws::Vector<PutTargetsResultEntry>&& value) { SetFailedEntries(std::move(value)); return *this;}
    inline PutTargetsResult& AddFailedEntries(const PutTargetsResultEntry& value) { m_failedEntries.push_back(value); return *this; }
    inline PutTargetsResult& AddFailedEntries(PutTargetsResultEntry&& value) { m_failedEntries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutTargetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutTargetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutTargetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_failedEntryCount;

    Aws::Vector<PutTargetsResultEntry> m_failedEntries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
