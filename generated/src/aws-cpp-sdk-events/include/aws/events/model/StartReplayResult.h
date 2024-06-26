﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ReplayState.h>
#include <aws/core/utils/DateTime.h>
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
  class StartReplayResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API StartReplayResult();
    AWS_CLOUDWATCHEVENTS_API StartReplayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API StartReplayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the replay.</p>
     */
    inline const Aws::String& GetReplayArn() const{ return m_replayArn; }
    inline void SetReplayArn(const Aws::String& value) { m_replayArn = value; }
    inline void SetReplayArn(Aws::String&& value) { m_replayArn = std::move(value); }
    inline void SetReplayArn(const char* value) { m_replayArn.assign(value); }
    inline StartReplayResult& WithReplayArn(const Aws::String& value) { SetReplayArn(value); return *this;}
    inline StartReplayResult& WithReplayArn(Aws::String&& value) { SetReplayArn(std::move(value)); return *this;}
    inline StartReplayResult& WithReplayArn(const char* value) { SetReplayArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the replay.</p>
     */
    inline const ReplayState& GetState() const{ return m_state; }
    inline void SetState(const ReplayState& value) { m_state = value; }
    inline void SetState(ReplayState&& value) { m_state = std::move(value); }
    inline StartReplayResult& WithState(const ReplayState& value) { SetState(value); return *this;}
    inline StartReplayResult& WithState(ReplayState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the replay is in the state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }
    inline void SetStateReason(const Aws::String& value) { m_stateReason = value; }
    inline void SetStateReason(Aws::String&& value) { m_stateReason = std::move(value); }
    inline void SetStateReason(const char* value) { m_stateReason.assign(value); }
    inline StartReplayResult& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}
    inline StartReplayResult& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}
    inline StartReplayResult& WithStateReason(const char* value) { SetStateReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the replay started.</p>
     */
    inline const Aws::Utils::DateTime& GetReplayStartTime() const{ return m_replayStartTime; }
    inline void SetReplayStartTime(const Aws::Utils::DateTime& value) { m_replayStartTime = value; }
    inline void SetReplayStartTime(Aws::Utils::DateTime&& value) { m_replayStartTime = std::move(value); }
    inline StartReplayResult& WithReplayStartTime(const Aws::Utils::DateTime& value) { SetReplayStartTime(value); return *this;}
    inline StartReplayResult& WithReplayStartTime(Aws::Utils::DateTime&& value) { SetReplayStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartReplayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartReplayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartReplayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_replayArn;

    ReplayState m_state;

    Aws::String m_stateReason;

    Aws::Utils::DateTime m_replayStartTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
