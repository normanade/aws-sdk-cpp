﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudWatchRUM
{
namespace Model
{
  class GetAppMonitorDataResult
  {
  public:
    AWS_CLOUDWATCHRUM_API GetAppMonitorDataResult();
    AWS_CLOUDWATCHRUM_API GetAppMonitorDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHRUM_API GetAppMonitorDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The events that RUM collected that match your request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEvents() const{ return m_events; }
    inline void SetEvents(const Aws::Vector<Aws::String>& value) { m_events = value; }
    inline void SetEvents(Aws::Vector<Aws::String>&& value) { m_events = std::move(value); }
    inline GetAppMonitorDataResult& WithEvents(const Aws::Vector<Aws::String>& value) { SetEvents(value); return *this;}
    inline GetAppMonitorDataResult& WithEvents(Aws::Vector<Aws::String>&& value) { SetEvents(std::move(value)); return *this;}
    inline GetAppMonitorDataResult& AddEvents(const Aws::String& value) { m_events.push_back(value); return *this; }
    inline GetAppMonitorDataResult& AddEvents(Aws::String&& value) { m_events.push_back(std::move(value)); return *this; }
    inline GetAppMonitorDataResult& AddEvents(const char* value) { m_events.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetAppMonitorDataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetAppMonitorDataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetAppMonitorDataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAppMonitorDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAppMonitorDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAppMonitorDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_events;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
