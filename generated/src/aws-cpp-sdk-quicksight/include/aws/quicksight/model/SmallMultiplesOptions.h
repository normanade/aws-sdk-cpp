﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PanelConfiguration.h>
#include <aws/quicksight/model/SmallMultiplesAxisProperties.h>
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
   * <p>Options that determine the layout and display options of a chart's small
   * multiples.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SmallMultiplesOptions">AWS
   * API Reference</a></p>
   */
  class SmallMultiplesOptions
  {
  public:
    AWS_QUICKSIGHT_API SmallMultiplesOptions();
    AWS_QUICKSIGHT_API SmallMultiplesOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SmallMultiplesOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Sets the maximum number of visible rows to display in the grid of small
     * multiples panels.</p> <p>The default value is <code>Auto</code>, which
     * automatically adjusts the rows in the grid to fit the overall layout and size of
     * the given chart.</p>
     */
    inline long long GetMaxVisibleRows() const{ return m_maxVisibleRows; }
    inline bool MaxVisibleRowsHasBeenSet() const { return m_maxVisibleRowsHasBeenSet; }
    inline void SetMaxVisibleRows(long long value) { m_maxVisibleRowsHasBeenSet = true; m_maxVisibleRows = value; }
    inline SmallMultiplesOptions& WithMaxVisibleRows(long long value) { SetMaxVisibleRows(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the maximum number of visible columns to display in the grid of small
     * multiples panels.</p> <p>The default is <code>Auto</code>, which automatically
     * adjusts the columns in the grid to fit the overall layout and size of the given
     * chart.</p>
     */
    inline long long GetMaxVisibleColumns() const{ return m_maxVisibleColumns; }
    inline bool MaxVisibleColumnsHasBeenSet() const { return m_maxVisibleColumnsHasBeenSet; }
    inline void SetMaxVisibleColumns(long long value) { m_maxVisibleColumnsHasBeenSet = true; m_maxVisibleColumns = value; }
    inline SmallMultiplesOptions& WithMaxVisibleColumns(long long value) { SetMaxVisibleColumns(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the display options for each small multiples panel.</p>
     */
    inline const PanelConfiguration& GetPanelConfiguration() const{ return m_panelConfiguration; }
    inline bool PanelConfigurationHasBeenSet() const { return m_panelConfigurationHasBeenSet; }
    inline void SetPanelConfiguration(const PanelConfiguration& value) { m_panelConfigurationHasBeenSet = true; m_panelConfiguration = value; }
    inline void SetPanelConfiguration(PanelConfiguration&& value) { m_panelConfigurationHasBeenSet = true; m_panelConfiguration = std::move(value); }
    inline SmallMultiplesOptions& WithPanelConfiguration(const PanelConfiguration& value) { SetPanelConfiguration(value); return *this;}
    inline SmallMultiplesOptions& WithPanelConfiguration(PanelConfiguration&& value) { SetPanelConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of a small multiples X axis.</p>
     */
    inline const SmallMultiplesAxisProperties& GetXAxis() const{ return m_xAxis; }
    inline bool XAxisHasBeenSet() const { return m_xAxisHasBeenSet; }
    inline void SetXAxis(const SmallMultiplesAxisProperties& value) { m_xAxisHasBeenSet = true; m_xAxis = value; }
    inline void SetXAxis(SmallMultiplesAxisProperties&& value) { m_xAxisHasBeenSet = true; m_xAxis = std::move(value); }
    inline SmallMultiplesOptions& WithXAxis(const SmallMultiplesAxisProperties& value) { SetXAxis(value); return *this;}
    inline SmallMultiplesOptions& WithXAxis(SmallMultiplesAxisProperties&& value) { SetXAxis(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of a small multiples Y axis.</p>
     */
    inline const SmallMultiplesAxisProperties& GetYAxis() const{ return m_yAxis; }
    inline bool YAxisHasBeenSet() const { return m_yAxisHasBeenSet; }
    inline void SetYAxis(const SmallMultiplesAxisProperties& value) { m_yAxisHasBeenSet = true; m_yAxis = value; }
    inline void SetYAxis(SmallMultiplesAxisProperties&& value) { m_yAxisHasBeenSet = true; m_yAxis = std::move(value); }
    inline SmallMultiplesOptions& WithYAxis(const SmallMultiplesAxisProperties& value) { SetYAxis(value); return *this;}
    inline SmallMultiplesOptions& WithYAxis(SmallMultiplesAxisProperties&& value) { SetYAxis(std::move(value)); return *this;}
    ///@}
  private:

    long long m_maxVisibleRows;
    bool m_maxVisibleRowsHasBeenSet = false;

    long long m_maxVisibleColumns;
    bool m_maxVisibleColumnsHasBeenSet = false;

    PanelConfiguration m_panelConfiguration;
    bool m_panelConfigurationHasBeenSet = false;

    SmallMultiplesAxisProperties m_xAxis;
    bool m_xAxisHasBeenSet = false;

    SmallMultiplesAxisProperties m_yAxis;
    bool m_yAxisHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
