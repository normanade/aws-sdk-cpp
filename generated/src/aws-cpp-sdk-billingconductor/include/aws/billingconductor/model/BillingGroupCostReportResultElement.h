﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/billingconductor/model/Attribute.h>
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
   * <p>A paginated call to retrieve a list of summary reports of actual Amazon Web
   * Services charges and the calculated Amazon Web Services charges, broken down by
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/BillingGroupCostReportResultElement">AWS
   * API Reference</a></p>
   */
  class BillingGroupCostReportResultElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API BillingGroupCostReportResultElement();
    AWS_BILLINGCONDUCTOR_API BillingGroupCostReportResultElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API BillingGroupCostReportResultElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) that uniquely identifies the billing
     * group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline BillingGroupCostReportResultElement& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline BillingGroupCostReportResultElement& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline BillingGroupCostReportResultElement& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual Amazon Web Services charges for the billing group.</p>
     */
    inline const Aws::String& GetAWSCost() const{ return m_aWSCost; }
    inline bool AWSCostHasBeenSet() const { return m_aWSCostHasBeenSet; }
    inline void SetAWSCost(const Aws::String& value) { m_aWSCostHasBeenSet = true; m_aWSCost = value; }
    inline void SetAWSCost(Aws::String&& value) { m_aWSCostHasBeenSet = true; m_aWSCost = std::move(value); }
    inline void SetAWSCost(const char* value) { m_aWSCostHasBeenSet = true; m_aWSCost.assign(value); }
    inline BillingGroupCostReportResultElement& WithAWSCost(const Aws::String& value) { SetAWSCost(value); return *this;}
    inline BillingGroupCostReportResultElement& WithAWSCost(Aws::String&& value) { SetAWSCost(std::move(value)); return *this;}
    inline BillingGroupCostReportResultElement& WithAWSCost(const char* value) { SetAWSCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hypothetical Amazon Web Services charges based on the associated pricing
     * plan of a billing group.</p>
     */
    inline const Aws::String& GetProformaCost() const{ return m_proformaCost; }
    inline bool ProformaCostHasBeenSet() const { return m_proformaCostHasBeenSet; }
    inline void SetProformaCost(const Aws::String& value) { m_proformaCostHasBeenSet = true; m_proformaCost = value; }
    inline void SetProformaCost(Aws::String&& value) { m_proformaCostHasBeenSet = true; m_proformaCost = std::move(value); }
    inline void SetProformaCost(const char* value) { m_proformaCostHasBeenSet = true; m_proformaCost.assign(value); }
    inline BillingGroupCostReportResultElement& WithProformaCost(const Aws::String& value) { SetProformaCost(value); return *this;}
    inline BillingGroupCostReportResultElement& WithProformaCost(Aws::String&& value) { SetProformaCost(std::move(value)); return *this;}
    inline BillingGroupCostReportResultElement& WithProformaCost(const char* value) { SetProformaCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing group margin.</p>
     */
    inline const Aws::String& GetMargin() const{ return m_margin; }
    inline bool MarginHasBeenSet() const { return m_marginHasBeenSet; }
    inline void SetMargin(const Aws::String& value) { m_marginHasBeenSet = true; m_margin = value; }
    inline void SetMargin(Aws::String&& value) { m_marginHasBeenSet = true; m_margin = std::move(value); }
    inline void SetMargin(const char* value) { m_marginHasBeenSet = true; m_margin.assign(value); }
    inline BillingGroupCostReportResultElement& WithMargin(const Aws::String& value) { SetMargin(value); return *this;}
    inline BillingGroupCostReportResultElement& WithMargin(Aws::String&& value) { SetMargin(std::move(value)); return *this;}
    inline BillingGroupCostReportResultElement& WithMargin(const char* value) { SetMargin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the billing group margin.</p>
     */
    inline const Aws::String& GetMarginPercentage() const{ return m_marginPercentage; }
    inline bool MarginPercentageHasBeenSet() const { return m_marginPercentageHasBeenSet; }
    inline void SetMarginPercentage(const Aws::String& value) { m_marginPercentageHasBeenSet = true; m_marginPercentage = value; }
    inline void SetMarginPercentage(Aws::String&& value) { m_marginPercentageHasBeenSet = true; m_marginPercentage = std::move(value); }
    inline void SetMarginPercentage(const char* value) { m_marginPercentageHasBeenSet = true; m_marginPercentage.assign(value); }
    inline BillingGroupCostReportResultElement& WithMarginPercentage(const Aws::String& value) { SetMarginPercentage(value); return *this;}
    inline BillingGroupCostReportResultElement& WithMarginPercentage(Aws::String&& value) { SetMarginPercentage(std::move(value)); return *this;}
    inline BillingGroupCostReportResultElement& WithMarginPercentage(const char* value) { SetMarginPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The displayed currency.</p>
     */
    inline const Aws::String& GetCurrency() const{ return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(const Aws::String& value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline void SetCurrency(Aws::String&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }
    inline void SetCurrency(const char* value) { m_currencyHasBeenSet = true; m_currency.assign(value); }
    inline BillingGroupCostReportResultElement& WithCurrency(const Aws::String& value) { SetCurrency(value); return *this;}
    inline BillingGroupCostReportResultElement& WithCurrency(Aws::String&& value) { SetCurrency(std::move(value)); return *this;}
    inline BillingGroupCostReportResultElement& WithCurrency(const char* value) { SetCurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key-value pairs that represent the attributes by which the
     * <code>BillingGroupCostReportResults</code> are grouped. For example, if you want
     * the Amazon S3 service-level breakdown of a billing group for November 2023, the
     * attributes list will contain a key-value pair of <code>"PRODUCT_NAME"</code> and
     * <code>"S3"</code> and a key-value pair of <code>"BILLING_PERIOD"</code> and
     * <code>"Nov 2023"</code>.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline BillingGroupCostReportResultElement& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}
    inline BillingGroupCostReportResultElement& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}
    inline BillingGroupCostReportResultElement& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline BillingGroupCostReportResultElement& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_aWSCost;
    bool m_aWSCostHasBeenSet = false;

    Aws::String m_proformaCost;
    bool m_proformaCostHasBeenSet = false;

    Aws::String m_margin;
    bool m_marginHasBeenSet = false;

    Aws::String m_marginPercentage;
    bool m_marginPercentageHasBeenSet = false;

    Aws::String m_currency;
    bool m_currencyHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
