﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ExportSourceType.h>
#include <aws/sesv2/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>A summary of the export job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ExportJobSummary">AWS
   * API Reference</a></p>
   */
  class ExportJobSummary
  {
  public:
    AWS_SESV2_API ExportJobSummary();
    AWS_SESV2_API ExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The export job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline ExportJobSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline ExportJobSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline ExportJobSummary& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source type of the export job.</p>
     */
    inline const ExportSourceType& GetExportSourceType() const{ return m_exportSourceType; }
    inline bool ExportSourceTypeHasBeenSet() const { return m_exportSourceTypeHasBeenSet; }
    inline void SetExportSourceType(const ExportSourceType& value) { m_exportSourceTypeHasBeenSet = true; m_exportSourceType = value; }
    inline void SetExportSourceType(ExportSourceType&& value) { m_exportSourceTypeHasBeenSet = true; m_exportSourceType = std::move(value); }
    inline ExportJobSummary& WithExportSourceType(const ExportSourceType& value) { SetExportSourceType(value); return *this;}
    inline ExportJobSummary& WithExportSourceType(ExportSourceType&& value) { SetExportSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the export job.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }
    inline ExportJobSummary& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline ExportJobSummary& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline ExportJobSummary& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline ExportJobSummary& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the export job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTimestamp() const{ return m_completedTimestamp; }
    inline bool CompletedTimestampHasBeenSet() const { return m_completedTimestampHasBeenSet; }
    inline void SetCompletedTimestamp(const Aws::Utils::DateTime& value) { m_completedTimestampHasBeenSet = true; m_completedTimestamp = value; }
    inline void SetCompletedTimestamp(Aws::Utils::DateTime&& value) { m_completedTimestampHasBeenSet = true; m_completedTimestamp = std::move(value); }
    inline ExportJobSummary& WithCompletedTimestamp(const Aws::Utils::DateTime& value) { SetCompletedTimestamp(value); return *this;}
    inline ExportJobSummary& WithCompletedTimestamp(Aws::Utils::DateTime&& value) { SetCompletedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    ExportSourceType m_exportSourceType;
    bool m_exportSourceTypeHasBeenSet = false;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_completedTimestamp;
    bool m_completedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
