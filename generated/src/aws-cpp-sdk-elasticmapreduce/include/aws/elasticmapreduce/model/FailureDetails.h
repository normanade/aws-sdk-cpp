﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The details of the step failure. The service attempts to detect the root
   * cause for many common failures.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/FailureDetails">AWS
   * API Reference</a></p>
   */
  class FailureDetails
  {
  public:
    AWS_EMR_API FailureDetails();
    AWS_EMR_API FailureDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API FailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reason for the step failure. In the case where the service cannot
     * successfully determine the root cause of the failure, it returns "Unknown Error"
     * as a reason.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline FailureDetails& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline FailureDetails& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline FailureDetails& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive message including the error the Amazon EMR service has
     * identified as the cause of step failure. This is text from an error log that
     * describes the root cause of the failure.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline FailureDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline FailureDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline FailureDetails& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the log file where the step failure root cause was originally
     * recorded.</p>
     */
    inline const Aws::String& GetLogFile() const{ return m_logFile; }
    inline bool LogFileHasBeenSet() const { return m_logFileHasBeenSet; }
    inline void SetLogFile(const Aws::String& value) { m_logFileHasBeenSet = true; m_logFile = value; }
    inline void SetLogFile(Aws::String&& value) { m_logFileHasBeenSet = true; m_logFile = std::move(value); }
    inline void SetLogFile(const char* value) { m_logFileHasBeenSet = true; m_logFile.assign(value); }
    inline FailureDetails& WithLogFile(const Aws::String& value) { SetLogFile(value); return *this;}
    inline FailureDetails& WithLogFile(Aws::String&& value) { SetLogFile(std::move(value)); return *this;}
    inline FailureDetails& WithLogFile(const char* value) { SetLogFile(value); return *this;}
    ///@}
  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_logFile;
    bool m_logFileHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
