﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/TimeGranularity.h>
#include <aws/quicksight/model/DateTimeFormatConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The dimension type field with date type columns.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DateDimensionField">AWS
   * API Reference</a></p>
   */
  class DateDimensionField
  {
  public:
    AWS_QUICKSIGHT_API DateDimensionField();
    AWS_QUICKSIGHT_API DateDimensionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateDimensionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom field ID.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }
    inline DateDimensionField& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}
    inline DateDimensionField& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}
    inline DateDimensionField& WithFieldId(const char* value) { SetFieldId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that is used in the <code>DateDimensionField</code>.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }
    inline DateDimensionField& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}
    inline DateDimensionField& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date granularity of the <code>DateDimensionField</code>. Choose one of
     * the following options:</p> <ul> <li> <p> <code>YEAR</code> </p> </li> <li> <p>
     * <code>QUARTER</code> </p> </li> <li> <p> <code>MONTH</code> </p> </li> <li> <p>
     * <code>WEEK</code> </p> </li> <li> <p> <code>DAY</code> </p> </li> <li> <p>
     * <code>HOUR</code> </p> </li> <li> <p> <code>MINUTE</code> </p> </li> <li> <p>
     * <code>SECOND</code> </p> </li> <li> <p> <code>MILLISECOND</code> </p> </li>
     * </ul>
     */
    inline const TimeGranularity& GetDateGranularity() const{ return m_dateGranularity; }
    inline bool DateGranularityHasBeenSet() const { return m_dateGranularityHasBeenSet; }
    inline void SetDateGranularity(const TimeGranularity& value) { m_dateGranularityHasBeenSet = true; m_dateGranularity = value; }
    inline void SetDateGranularity(TimeGranularity&& value) { m_dateGranularityHasBeenSet = true; m_dateGranularity = std::move(value); }
    inline DateDimensionField& WithDateGranularity(const TimeGranularity& value) { SetDateGranularity(value); return *this;}
    inline DateDimensionField& WithDateGranularity(TimeGranularity&& value) { SetDateGranularity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom hierarchy ID.</p>
     */
    inline const Aws::String& GetHierarchyId() const{ return m_hierarchyId; }
    inline bool HierarchyIdHasBeenSet() const { return m_hierarchyIdHasBeenSet; }
    inline void SetHierarchyId(const Aws::String& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = value; }
    inline void SetHierarchyId(Aws::String&& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = std::move(value); }
    inline void SetHierarchyId(const char* value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId.assign(value); }
    inline DateDimensionField& WithHierarchyId(const Aws::String& value) { SetHierarchyId(value); return *this;}
    inline DateDimensionField& WithHierarchyId(Aws::String&& value) { SetHierarchyId(std::move(value)); return *this;}
    inline DateDimensionField& WithHierarchyId(const char* value) { SetHierarchyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format configuration of the field.</p>
     */
    inline const DateTimeFormatConfiguration& GetFormatConfiguration() const{ return m_formatConfiguration; }
    inline bool FormatConfigurationHasBeenSet() const { return m_formatConfigurationHasBeenSet; }
    inline void SetFormatConfiguration(const DateTimeFormatConfiguration& value) { m_formatConfigurationHasBeenSet = true; m_formatConfiguration = value; }
    inline void SetFormatConfiguration(DateTimeFormatConfiguration&& value) { m_formatConfigurationHasBeenSet = true; m_formatConfiguration = std::move(value); }
    inline DateDimensionField& WithFormatConfiguration(const DateTimeFormatConfiguration& value) { SetFormatConfiguration(value); return *this;}
    inline DateDimensionField& WithFormatConfiguration(DateTimeFormatConfiguration&& value) { SetFormatConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    TimeGranularity m_dateGranularity;
    bool m_dateGranularityHasBeenSet = false;

    Aws::String m_hierarchyId;
    bool m_hierarchyIdHasBeenSet = false;

    DateTimeFormatConfiguration m_formatConfiguration;
    bool m_formatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
