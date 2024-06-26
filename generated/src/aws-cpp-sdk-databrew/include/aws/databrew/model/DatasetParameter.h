﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/ParameterType.h>
#include <aws/databrew/model/DatetimeOptions.h>
#include <aws/databrew/model/FilterExpression.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents a dataset parameter that defines type and conditions for a
   * parameter in the Amazon S3 path of the dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DatasetParameter">AWS
   * API Reference</a></p>
   */
  class DatasetParameter
  {
  public:
    AWS_GLUEDATABREW_API DatasetParameter();
    AWS_GLUEDATABREW_API DatasetParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API DatasetParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter that is used in the dataset's Amazon S3 path.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DatasetParameter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DatasetParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DatasetParameter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the dataset parameter, can be one of a 'String', 'Number' or
     * 'Datetime'.</p>
     */
    inline const ParameterType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ParameterType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DatasetParameter& WithType(const ParameterType& value) { SetType(value); return *this;}
    inline DatasetParameter& WithType(ParameterType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional parameter options such as a format and a timezone. Required for
     * datetime parameters.</p>
     */
    inline const DatetimeOptions& GetDatetimeOptions() const{ return m_datetimeOptions; }
    inline bool DatetimeOptionsHasBeenSet() const { return m_datetimeOptionsHasBeenSet; }
    inline void SetDatetimeOptions(const DatetimeOptions& value) { m_datetimeOptionsHasBeenSet = true; m_datetimeOptions = value; }
    inline void SetDatetimeOptions(DatetimeOptions&& value) { m_datetimeOptionsHasBeenSet = true; m_datetimeOptions = std::move(value); }
    inline DatasetParameter& WithDatetimeOptions(const DatetimeOptions& value) { SetDatetimeOptions(value); return *this;}
    inline DatasetParameter& WithDatetimeOptions(DatetimeOptions&& value) { SetDatetimeOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional boolean value that defines whether the captured value of this
     * parameter should be used to create a new column in a dataset.</p>
     */
    inline bool GetCreateColumn() const{ return m_createColumn; }
    inline bool CreateColumnHasBeenSet() const { return m_createColumnHasBeenSet; }
    inline void SetCreateColumn(bool value) { m_createColumnHasBeenSet = true; m_createColumn = value; }
    inline DatasetParameter& WithCreateColumn(bool value) { SetCreateColumn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional filter expression structure to apply additional matching
     * criteria to the parameter.</p>
     */
    inline const FilterExpression& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const FilterExpression& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(FilterExpression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline DatasetParameter& WithFilter(const FilterExpression& value) { SetFilter(value); return *this;}
    inline DatasetParameter& WithFilter(FilterExpression&& value) { SetFilter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ParameterType m_type;
    bool m_typeHasBeenSet = false;

    DatetimeOptions m_datetimeOptions;
    bool m_datetimeOptionsHasBeenSet = false;

    bool m_createColumn;
    bool m_createColumnHasBeenSet = false;

    FilterExpression m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
