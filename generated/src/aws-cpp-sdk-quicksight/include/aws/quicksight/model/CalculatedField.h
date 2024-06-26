﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The calculated field of an analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CalculatedField">AWS
   * API Reference</a></p>
   */
  class CalculatedField
  {
  public:
    AWS_QUICKSIGHT_API CalculatedField();
    AWS_QUICKSIGHT_API CalculatedField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CalculatedField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data set that is used in this calculated field.</p>
     */
    inline const Aws::String& GetDataSetIdentifier() const{ return m_dataSetIdentifier; }
    inline bool DataSetIdentifierHasBeenSet() const { return m_dataSetIdentifierHasBeenSet; }
    inline void SetDataSetIdentifier(const Aws::String& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = value; }
    inline void SetDataSetIdentifier(Aws::String&& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = std::move(value); }
    inline void SetDataSetIdentifier(const char* value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier.assign(value); }
    inline CalculatedField& WithDataSetIdentifier(const Aws::String& value) { SetDataSetIdentifier(value); return *this;}
    inline CalculatedField& WithDataSetIdentifier(Aws::String&& value) { SetDataSetIdentifier(std::move(value)); return *this;}
    inline CalculatedField& WithDataSetIdentifier(const char* value) { SetDataSetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the calculated field.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CalculatedField& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CalculatedField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CalculatedField& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expression of the calculated field.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }
    inline CalculatedField& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}
    inline CalculatedField& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}
    inline CalculatedField& WithExpression(const char* value) { SetExpression(value); return *this;}
    ///@}
  private:

    Aws::String m_dataSetIdentifier;
    bool m_dataSetIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
