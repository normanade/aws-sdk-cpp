﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Information about a pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineMetadata">AWS
   * API Reference</a></p>
   */
  class PipelineMetadata
  {
  public:
    AWS_CODEPIPELINE_API PipelineMetadata();
    AWS_CODEPIPELINE_API PipelineMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API PipelineMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const{ return m_pipelineArn; }
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }
    inline void SetPipelineArn(const Aws::String& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = value; }
    inline void SetPipelineArn(Aws::String&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::move(value); }
    inline void SetPipelineArn(const char* value) { m_pipelineArnHasBeenSet = true; m_pipelineArn.assign(value); }
    inline PipelineMetadata& WithPipelineArn(const Aws::String& value) { SetPipelineArn(value); return *this;}
    inline PipelineMetadata& WithPipelineArn(Aws::String&& value) { SetPipelineArn(std::move(value)); return *this;}
    inline PipelineMetadata& WithPipelineArn(const char* value) { SetPipelineArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline PipelineMetadata& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline PipelineMetadata& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdated() const{ return m_updated; }
    inline bool UpdatedHasBeenSet() const { return m_updatedHasBeenSet; }
    inline void SetUpdated(const Aws::Utils::DateTime& value) { m_updatedHasBeenSet = true; m_updated = value; }
    inline void SetUpdated(Aws::Utils::DateTime&& value) { m_updatedHasBeenSet = true; m_updated = std::move(value); }
    inline PipelineMetadata& WithUpdated(const Aws::Utils::DateTime& value) { SetUpdated(value); return *this;}
    inline PipelineMetadata& WithUpdated(Aws::Utils::DateTime&& value) { SetUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that polling for source changes (periodic checks) was
     * stopped for the pipeline, in timestamp format. You can migrate (update) a
     * polling pipeline to use event-based change detection. For example, for a
     * pipeline with a CodeCommit source, we recommend you migrate (update) your
     * pipeline to use CloudWatch Events. To learn more, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/update-change-detection.html">Migrate
     * polling pipelines to use event-based change detection</a> in the CodePipeline
     * User Guide.</p>
     */
    inline const Aws::Utils::DateTime& GetPollingDisabledAt() const{ return m_pollingDisabledAt; }
    inline bool PollingDisabledAtHasBeenSet() const { return m_pollingDisabledAtHasBeenSet; }
    inline void SetPollingDisabledAt(const Aws::Utils::DateTime& value) { m_pollingDisabledAtHasBeenSet = true; m_pollingDisabledAt = value; }
    inline void SetPollingDisabledAt(Aws::Utils::DateTime&& value) { m_pollingDisabledAtHasBeenSet = true; m_pollingDisabledAt = std::move(value); }
    inline PipelineMetadata& WithPollingDisabledAt(const Aws::Utils::DateTime& value) { SetPollingDisabledAt(value); return *this;}
    inline PipelineMetadata& WithPollingDisabledAt(Aws::Utils::DateTime&& value) { SetPollingDisabledAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_updated;
    bool m_updatedHasBeenSet = false;

    Aws::Utils::DateTime m_pollingDisabledAt;
    bool m_pollingDisabledAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
