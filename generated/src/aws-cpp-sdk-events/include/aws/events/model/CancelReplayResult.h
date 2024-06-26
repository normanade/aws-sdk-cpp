﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ReplayState.h>
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
  class CancelReplayResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API CancelReplayResult();
    AWS_CLOUDWATCHEVENTS_API CancelReplayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API CancelReplayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the replay to cancel.</p>
     */
    inline const Aws::String& GetReplayArn() const{ return m_replayArn; }
    inline void SetReplayArn(const Aws::String& value) { m_replayArn = value; }
    inline void SetReplayArn(Aws::String&& value) { m_replayArn = std::move(value); }
    inline void SetReplayArn(const char* value) { m_replayArn.assign(value); }
    inline CancelReplayResult& WithReplayArn(const Aws::String& value) { SetReplayArn(value); return *this;}
    inline CancelReplayResult& WithReplayArn(Aws::String&& value) { SetReplayArn(std::move(value)); return *this;}
    inline CancelReplayResult& WithReplayArn(const char* value) { SetReplayArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the replay.</p>
     */
    inline const ReplayState& GetState() const{ return m_state; }
    inline void SetState(const ReplayState& value) { m_state = value; }
    inline void SetState(ReplayState&& value) { m_state = std::move(value); }
    inline CancelReplayResult& WithState(const ReplayState& value) { SetState(value); return *this;}
    inline CancelReplayResult& WithState(ReplayState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the replay is in the current state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }
    inline void SetStateReason(const Aws::String& value) { m_stateReason = value; }
    inline void SetStateReason(Aws::String&& value) { m_stateReason = std::move(value); }
    inline void SetStateReason(const char* value) { m_stateReason.assign(value); }
    inline CancelReplayResult& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}
    inline CancelReplayResult& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}
    inline CancelReplayResult& WithStateReason(const char* value) { SetStateReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelReplayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelReplayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelReplayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_replayArn;

    ReplayState m_state;

    Aws::String m_stateReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
