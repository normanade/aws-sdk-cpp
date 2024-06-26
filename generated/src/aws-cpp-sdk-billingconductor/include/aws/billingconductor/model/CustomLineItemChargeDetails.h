﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/CustomLineItemFlatChargeDetails.h>
#include <aws/billingconductor/model/CustomLineItemPercentageChargeDetails.h>
#include <aws/billingconductor/model/CustomLineItemType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/billingconductor/model/LineItemFilter.h>
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
namespace BillingConductor
{
namespace Model
{

  /**
   * <p>The charge details of a custom line item. It should contain only one of
   * <code>Flat</code> or <code>Percentage</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/CustomLineItemChargeDetails">AWS
   * API Reference</a></p>
   */
  class CustomLineItemChargeDetails
  {
  public:
    AWS_BILLINGCONDUCTOR_API CustomLineItemChargeDetails();
    AWS_BILLINGCONDUCTOR_API CustomLineItemChargeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API CustomLineItemChargeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>CustomLineItemFlatChargeDetails</code> that describes the charge
     * details of a flat custom line item.</p>
     */
    inline const CustomLineItemFlatChargeDetails& GetFlat() const{ return m_flat; }
    inline bool FlatHasBeenSet() const { return m_flatHasBeenSet; }
    inline void SetFlat(const CustomLineItemFlatChargeDetails& value) { m_flatHasBeenSet = true; m_flat = value; }
    inline void SetFlat(CustomLineItemFlatChargeDetails&& value) { m_flatHasBeenSet = true; m_flat = std::move(value); }
    inline CustomLineItemChargeDetails& WithFlat(const CustomLineItemFlatChargeDetails& value) { SetFlat(value); return *this;}
    inline CustomLineItemChargeDetails& WithFlat(CustomLineItemFlatChargeDetails&& value) { SetFlat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CustomLineItemPercentageChargeDetails</code> that describes the
     * charge details of a percentage custom line item.</p>
     */
    inline const CustomLineItemPercentageChargeDetails& GetPercentage() const{ return m_percentage; }
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
    inline void SetPercentage(const CustomLineItemPercentageChargeDetails& value) { m_percentageHasBeenSet = true; m_percentage = value; }
    inline void SetPercentage(CustomLineItemPercentageChargeDetails&& value) { m_percentageHasBeenSet = true; m_percentage = std::move(value); }
    inline CustomLineItemChargeDetails& WithPercentage(const CustomLineItemPercentageChargeDetails& value) { SetPercentage(value); return *this;}
    inline CustomLineItemChargeDetails& WithPercentage(CustomLineItemPercentageChargeDetails&& value) { SetPercentage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the custom line item that indicates whether the charge is a fee
     * or credit.</p>
     */
    inline const CustomLineItemType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CustomLineItemType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CustomLineItemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CustomLineItemChargeDetails& WithType(const CustomLineItemType& value) { SetType(value); return *this;}
    inline CustomLineItemChargeDetails& WithType(CustomLineItemType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A representation of the line item filter.</p>
     */
    inline const Aws::Vector<LineItemFilter>& GetLineItemFilters() const{ return m_lineItemFilters; }
    inline bool LineItemFiltersHasBeenSet() const { return m_lineItemFiltersHasBeenSet; }
    inline void SetLineItemFilters(const Aws::Vector<LineItemFilter>& value) { m_lineItemFiltersHasBeenSet = true; m_lineItemFilters = value; }
    inline void SetLineItemFilters(Aws::Vector<LineItemFilter>&& value) { m_lineItemFiltersHasBeenSet = true; m_lineItemFilters = std::move(value); }
    inline CustomLineItemChargeDetails& WithLineItemFilters(const Aws::Vector<LineItemFilter>& value) { SetLineItemFilters(value); return *this;}
    inline CustomLineItemChargeDetails& WithLineItemFilters(Aws::Vector<LineItemFilter>&& value) { SetLineItemFilters(std::move(value)); return *this;}
    inline CustomLineItemChargeDetails& AddLineItemFilters(const LineItemFilter& value) { m_lineItemFiltersHasBeenSet = true; m_lineItemFilters.push_back(value); return *this; }
    inline CustomLineItemChargeDetails& AddLineItemFilters(LineItemFilter&& value) { m_lineItemFiltersHasBeenSet = true; m_lineItemFilters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    CustomLineItemFlatChargeDetails m_flat;
    bool m_flatHasBeenSet = false;

    CustomLineItemPercentageChargeDetails m_percentage;
    bool m_percentageHasBeenSet = false;

    CustomLineItemType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<LineItemFilter> m_lineItemFilters;
    bool m_lineItemFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
