﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Records a successful request to stop a specified
   * <code>JobRun</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchStopJobRunSuccessfulSubmission">AWS
   * API Reference</a></p>
   */
  class BatchStopJobRunSuccessfulSubmission
  {
  public:
    AWS_GLUE_API BatchStopJobRunSuccessfulSubmission();
    AWS_GLUE_API BatchStopJobRunSuccessfulSubmission(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API BatchStopJobRunSuccessfulSubmission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the job definition used in the job run that was stopped.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline BatchStopJobRunSuccessfulSubmission& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline BatchStopJobRunSuccessfulSubmission& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline BatchStopJobRunSuccessfulSubmission& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>JobRunId</code> of the job run that was stopped.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }
    inline BatchStopJobRunSuccessfulSubmission& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}
    inline BatchStopJobRunSuccessfulSubmission& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}
    inline BatchStopJobRunSuccessfulSubmission& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
