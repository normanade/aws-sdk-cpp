﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>An individual metric Forecast calculated when monitoring predictor usage. You
   * can compare the value for this metric to the metric's value in the
   * <a>Baseline</a> to see how your predictor's performance is changing.</p> <p>For
   * more information about metrics generated by Forecast see <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">Evaluating
   * Predictor Accuracy</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/MetricResult">AWS
   * API Reference</a></p>
   */
  class MetricResult
  {
  public:
    AWS_FORECASTSERVICE_API MetricResult();
    AWS_FORECASTSERVICE_API MetricResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API MetricResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline MetricResult& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline MetricResult& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline MetricResult& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the metric.</p>
     */
    inline double GetMetricValue() const{ return m_metricValue; }
    inline bool MetricValueHasBeenSet() const { return m_metricValueHasBeenSet; }
    inline void SetMetricValue(double value) { m_metricValueHasBeenSet = true; m_metricValue = value; }
    inline MetricResult& WithMetricValue(double value) { SetMetricValue(value); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    double m_metricValue;
    bool m_metricValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
