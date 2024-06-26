﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>The counter that describes a DDoS attack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/SummarizedCounter">AWS
   * API Reference</a></p>
   */
  class SummarizedCounter
  {
  public:
    AWS_SHIELD_API SummarizedCounter();
    AWS_SHIELD_API SummarizedCounter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API SummarizedCounter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The counter name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SummarizedCounter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SummarizedCounter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SummarizedCounter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value of the counter for a specified time period.</p>
     */
    inline double GetMax() const{ return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }
    inline SummarizedCounter& WithMax(double value) { SetMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average value of the counter for a specified time period.</p>
     */
    inline double GetAverage() const{ return m_average; }
    inline bool AverageHasBeenSet() const { return m_averageHasBeenSet; }
    inline void SetAverage(double value) { m_averageHasBeenSet = true; m_average = value; }
    inline SummarizedCounter& WithAverage(double value) { SetAverage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total of counter values for a specified time period.</p>
     */
    inline double GetSum() const{ return m_sum; }
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }
    inline SummarizedCounter& WithSum(double value) { SetSum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of counters for a specified time period.</p>
     */
    inline int GetN() const{ return m_n; }
    inline bool NHasBeenSet() const { return m_nHasBeenSet; }
    inline void SetN(int value) { m_nHasBeenSet = true; m_n = value; }
    inline SummarizedCounter& WithN(int value) { SetN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of the counters.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline SummarizedCounter& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline SummarizedCounter& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline SummarizedCounter& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_max;
    bool m_maxHasBeenSet = false;

    double m_average;
    bool m_averageHasBeenSet = false;

    double m_sum;
    bool m_sumHasBeenSet = false;

    int m_n;
    bool m_nHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
