﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AnomalyDetectionTaskStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>The status of an anomaly detector run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ExecutionStatus">AWS
   * API Reference</a></p>
   */
  class ExecutionStatus
  {
  public:
    AWS_LOOKOUTMETRICS_API ExecutionStatus();
    AWS_LOOKOUTMETRICS_API ExecutionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API ExecutionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The run's timestamp.</p>
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::String& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::String&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline void SetTimestamp(const char* value) { m_timestampHasBeenSet = true; m_timestamp.assign(value); }
    inline ExecutionStatus& WithTimestamp(const Aws::String& value) { SetTimestamp(value); return *this;}
    inline ExecutionStatus& WithTimestamp(Aws::String&& value) { SetTimestamp(std::move(value)); return *this;}
    inline ExecutionStatus& WithTimestamp(const char* value) { SetTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's status.</p>
     */
    inline const AnomalyDetectionTaskStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AnomalyDetectionTaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AnomalyDetectionTaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ExecutionStatus& WithStatus(const AnomalyDetectionTaskStatus& value) { SetStatus(value); return *this;}
    inline ExecutionStatus& WithStatus(AnomalyDetectionTaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the run failed, if applicable.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline ExecutionStatus& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline ExecutionStatus& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline ExecutionStatus& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet = false;

    AnomalyDetectionTaskStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
