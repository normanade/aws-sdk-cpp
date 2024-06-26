﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/osis/model/ChangeProgressStageStatuses.h>
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
namespace OSIS
{
namespace Model
{

  /**
   * <p>Progress details for a specific stage of a pipeline configuration
   * change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/ChangeProgressStage">AWS
   * API Reference</a></p>
   */
  class ChangeProgressStage
  {
  public:
    AWS_OSIS_API ChangeProgressStage();
    AWS_OSIS_API ChangeProgressStage(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API ChangeProgressStage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ChangeProgressStage& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ChangeProgressStage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ChangeProgressStage& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the stage that the change is in.</p>
     */
    inline const ChangeProgressStageStatuses& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ChangeProgressStageStatuses& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ChangeProgressStageStatuses&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ChangeProgressStage& WithStatus(const ChangeProgressStageStatuses& value) { SetStatus(value); return *this;}
    inline ChangeProgressStage& WithStatus(ChangeProgressStageStatuses&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the stage.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ChangeProgressStage& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ChangeProgressStage& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ChangeProgressStage& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent updated timestamp of the stage.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline ChangeProgressStage& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline ChangeProgressStage& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ChangeProgressStageStatuses m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
