﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ProjectOperation.h>
#include <aws/quicksight/model/FilterOperation.h>
#include <aws/quicksight/model/CreateColumnsOperation.h>
#include <aws/quicksight/model/RenameColumnOperation.h>
#include <aws/quicksight/model/CastColumnTypeOperation.h>
#include <aws/quicksight/model/TagColumnOperation.h>
#include <aws/quicksight/model/UntagColumnOperation.h>
#include <aws/quicksight/model/OverrideDatasetParameterOperation.h>
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
   * <p>A data transformation on a logical table. This is a variant type structure.
   * For this structure to be valid, only one of the attributes can be
   * non-null.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TransformOperation">AWS
   * API Reference</a></p>
   */
  class TransformOperation
  {
  public:
    AWS_QUICKSIGHT_API TransformOperation();
    AWS_QUICKSIGHT_API TransformOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TransformOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An operation that projects columns. Operations that come after a projection
     * can only refer to projected columns.</p>
     */
    inline const ProjectOperation& GetProjectOperation() const{ return m_projectOperation; }
    inline bool ProjectOperationHasBeenSet() const { return m_projectOperationHasBeenSet; }
    inline void SetProjectOperation(const ProjectOperation& value) { m_projectOperationHasBeenSet = true; m_projectOperation = value; }
    inline void SetProjectOperation(ProjectOperation&& value) { m_projectOperationHasBeenSet = true; m_projectOperation = std::move(value); }
    inline TransformOperation& WithProjectOperation(const ProjectOperation& value) { SetProjectOperation(value); return *this;}
    inline TransformOperation& WithProjectOperation(ProjectOperation&& value) { SetProjectOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation that filters rows based on some condition.</p>
     */
    inline const FilterOperation& GetFilterOperation() const{ return m_filterOperation; }
    inline bool FilterOperationHasBeenSet() const { return m_filterOperationHasBeenSet; }
    inline void SetFilterOperation(const FilterOperation& value) { m_filterOperationHasBeenSet = true; m_filterOperation = value; }
    inline void SetFilterOperation(FilterOperation&& value) { m_filterOperationHasBeenSet = true; m_filterOperation = std::move(value); }
    inline TransformOperation& WithFilterOperation(const FilterOperation& value) { SetFilterOperation(value); return *this;}
    inline TransformOperation& WithFilterOperation(FilterOperation&& value) { SetFilterOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation that creates calculated columns. Columns created in one such
     * operation form a lexical closure.</p>
     */
    inline const CreateColumnsOperation& GetCreateColumnsOperation() const{ return m_createColumnsOperation; }
    inline bool CreateColumnsOperationHasBeenSet() const { return m_createColumnsOperationHasBeenSet; }
    inline void SetCreateColumnsOperation(const CreateColumnsOperation& value) { m_createColumnsOperationHasBeenSet = true; m_createColumnsOperation = value; }
    inline void SetCreateColumnsOperation(CreateColumnsOperation&& value) { m_createColumnsOperationHasBeenSet = true; m_createColumnsOperation = std::move(value); }
    inline TransformOperation& WithCreateColumnsOperation(const CreateColumnsOperation& value) { SetCreateColumnsOperation(value); return *this;}
    inline TransformOperation& WithCreateColumnsOperation(CreateColumnsOperation&& value) { SetCreateColumnsOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation that renames a column.</p>
     */
    inline const RenameColumnOperation& GetRenameColumnOperation() const{ return m_renameColumnOperation; }
    inline bool RenameColumnOperationHasBeenSet() const { return m_renameColumnOperationHasBeenSet; }
    inline void SetRenameColumnOperation(const RenameColumnOperation& value) { m_renameColumnOperationHasBeenSet = true; m_renameColumnOperation = value; }
    inline void SetRenameColumnOperation(RenameColumnOperation&& value) { m_renameColumnOperationHasBeenSet = true; m_renameColumnOperation = std::move(value); }
    inline TransformOperation& WithRenameColumnOperation(const RenameColumnOperation& value) { SetRenameColumnOperation(value); return *this;}
    inline TransformOperation& WithRenameColumnOperation(RenameColumnOperation&& value) { SetRenameColumnOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A transform operation that casts a column to a different type.</p>
     */
    inline const CastColumnTypeOperation& GetCastColumnTypeOperation() const{ return m_castColumnTypeOperation; }
    inline bool CastColumnTypeOperationHasBeenSet() const { return m_castColumnTypeOperationHasBeenSet; }
    inline void SetCastColumnTypeOperation(const CastColumnTypeOperation& value) { m_castColumnTypeOperationHasBeenSet = true; m_castColumnTypeOperation = value; }
    inline void SetCastColumnTypeOperation(CastColumnTypeOperation&& value) { m_castColumnTypeOperationHasBeenSet = true; m_castColumnTypeOperation = std::move(value); }
    inline TransformOperation& WithCastColumnTypeOperation(const CastColumnTypeOperation& value) { SetCastColumnTypeOperation(value); return *this;}
    inline TransformOperation& WithCastColumnTypeOperation(CastColumnTypeOperation&& value) { SetCastColumnTypeOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation that tags a column with additional information.</p>
     */
    inline const TagColumnOperation& GetTagColumnOperation() const{ return m_tagColumnOperation; }
    inline bool TagColumnOperationHasBeenSet() const { return m_tagColumnOperationHasBeenSet; }
    inline void SetTagColumnOperation(const TagColumnOperation& value) { m_tagColumnOperationHasBeenSet = true; m_tagColumnOperation = value; }
    inline void SetTagColumnOperation(TagColumnOperation&& value) { m_tagColumnOperationHasBeenSet = true; m_tagColumnOperation = std::move(value); }
    inline TransformOperation& WithTagColumnOperation(const TagColumnOperation& value) { SetTagColumnOperation(value); return *this;}
    inline TransformOperation& WithTagColumnOperation(TagColumnOperation&& value) { SetTagColumnOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UntagColumnOperation& GetUntagColumnOperation() const{ return m_untagColumnOperation; }
    inline bool UntagColumnOperationHasBeenSet() const { return m_untagColumnOperationHasBeenSet; }
    inline void SetUntagColumnOperation(const UntagColumnOperation& value) { m_untagColumnOperationHasBeenSet = true; m_untagColumnOperation = value; }
    inline void SetUntagColumnOperation(UntagColumnOperation&& value) { m_untagColumnOperationHasBeenSet = true; m_untagColumnOperation = std::move(value); }
    inline TransformOperation& WithUntagColumnOperation(const UntagColumnOperation& value) { SetUntagColumnOperation(value); return *this;}
    inline TransformOperation& WithUntagColumnOperation(UntagColumnOperation&& value) { SetUntagColumnOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OverrideDatasetParameterOperation& GetOverrideDatasetParameterOperation() const{ return m_overrideDatasetParameterOperation; }
    inline bool OverrideDatasetParameterOperationHasBeenSet() const { return m_overrideDatasetParameterOperationHasBeenSet; }
    inline void SetOverrideDatasetParameterOperation(const OverrideDatasetParameterOperation& value) { m_overrideDatasetParameterOperationHasBeenSet = true; m_overrideDatasetParameterOperation = value; }
    inline void SetOverrideDatasetParameterOperation(OverrideDatasetParameterOperation&& value) { m_overrideDatasetParameterOperationHasBeenSet = true; m_overrideDatasetParameterOperation = std::move(value); }
    inline TransformOperation& WithOverrideDatasetParameterOperation(const OverrideDatasetParameterOperation& value) { SetOverrideDatasetParameterOperation(value); return *this;}
    inline TransformOperation& WithOverrideDatasetParameterOperation(OverrideDatasetParameterOperation&& value) { SetOverrideDatasetParameterOperation(std::move(value)); return *this;}
    ///@}
  private:

    ProjectOperation m_projectOperation;
    bool m_projectOperationHasBeenSet = false;

    FilterOperation m_filterOperation;
    bool m_filterOperationHasBeenSet = false;

    CreateColumnsOperation m_createColumnsOperation;
    bool m_createColumnsOperationHasBeenSet = false;

    RenameColumnOperation m_renameColumnOperation;
    bool m_renameColumnOperationHasBeenSet = false;

    CastColumnTypeOperation m_castColumnTypeOperation;
    bool m_castColumnTypeOperationHasBeenSet = false;

    TagColumnOperation m_tagColumnOperation;
    bool m_tagColumnOperationHasBeenSet = false;

    UntagColumnOperation m_untagColumnOperation;
    bool m_untagColumnOperationHasBeenSet = false;

    OverrideDatasetParameterOperation m_overrideDatasetParameterOperation;
    bool m_overrideDatasetParameterOperationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
