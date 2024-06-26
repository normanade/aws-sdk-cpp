﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>The properties of a managed product, such as an Amazon Web Services Managed
   * Rules rule group or an Amazon Web Services Marketplace managed rule group.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ManagedProductDescriptor">AWS
   * API Reference</a></p>
   */
  class ManagedProductDescriptor
  {
  public:
    AWS_WAFV2_API ManagedProductDescriptor();
    AWS_WAFV2_API ManagedProductDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ManagedProductDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify a rule group.</p>
     */
    inline const Aws::String& GetVendorName() const{ return m_vendorName; }
    inline bool VendorNameHasBeenSet() const { return m_vendorNameHasBeenSet; }
    inline void SetVendorName(const Aws::String& value) { m_vendorNameHasBeenSet = true; m_vendorName = value; }
    inline void SetVendorName(Aws::String&& value) { m_vendorNameHasBeenSet = true; m_vendorName = std::move(value); }
    inline void SetVendorName(const char* value) { m_vendorNameHasBeenSet = true; m_vendorName.assign(value); }
    inline ManagedProductDescriptor& WithVendorName(const Aws::String& value) { SetVendorName(value); return *this;}
    inline ManagedProductDescriptor& WithVendorName(Aws::String&& value) { SetVendorName(std::move(value)); return *this;}
    inline ManagedProductDescriptor& WithVendorName(const char* value) { SetVendorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed rule group. For example,
     * <code>AWSManagedRulesAnonymousIpList</code> or
     * <code>AWSManagedRulesATPRuleSet</code>.</p>
     */
    inline const Aws::String& GetManagedRuleSetName() const{ return m_managedRuleSetName; }
    inline bool ManagedRuleSetNameHasBeenSet() const { return m_managedRuleSetNameHasBeenSet; }
    inline void SetManagedRuleSetName(const Aws::String& value) { m_managedRuleSetNameHasBeenSet = true; m_managedRuleSetName = value; }
    inline void SetManagedRuleSetName(Aws::String&& value) { m_managedRuleSetNameHasBeenSet = true; m_managedRuleSetName = std::move(value); }
    inline void SetManagedRuleSetName(const char* value) { m_managedRuleSetNameHasBeenSet = true; m_managedRuleSetName.assign(value); }
    inline ManagedProductDescriptor& WithManagedRuleSetName(const Aws::String& value) { SetManagedRuleSetName(value); return *this;}
    inline ManagedProductDescriptor& WithManagedRuleSetName(Aws::String&& value) { SetManagedRuleSetName(std::move(value)); return *this;}
    inline ManagedProductDescriptor& WithManagedRuleSetName(const char* value) { SetManagedRuleSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the rule group. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }
    inline ManagedProductDescriptor& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline ManagedProductDescriptor& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline ManagedProductDescriptor& WithProductId(const char* value) { SetProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For Amazon Web Services Marketplace managed rule groups only, the link to the
     * rule group product page. </p>
     */
    inline const Aws::String& GetProductLink() const{ return m_productLink; }
    inline bool ProductLinkHasBeenSet() const { return m_productLinkHasBeenSet; }
    inline void SetProductLink(const Aws::String& value) { m_productLinkHasBeenSet = true; m_productLink = value; }
    inline void SetProductLink(Aws::String&& value) { m_productLinkHasBeenSet = true; m_productLink = std::move(value); }
    inline void SetProductLink(const char* value) { m_productLinkHasBeenSet = true; m_productLink.assign(value); }
    inline ManagedProductDescriptor& WithProductLink(const Aws::String& value) { SetProductLink(value); return *this;}
    inline ManagedProductDescriptor& WithProductLink(Aws::String&& value) { SetProductLink(std::move(value)); return *this;}
    inline ManagedProductDescriptor& WithProductLink(const char* value) { SetProductLink(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the managed rule group. For example, <code>Anonymous IP
     * list</code> or <code>Account takeover prevention</code>.</p>
     */
    inline const Aws::String& GetProductTitle() const{ return m_productTitle; }
    inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }
    inline void SetProductTitle(const Aws::String& value) { m_productTitleHasBeenSet = true; m_productTitle = value; }
    inline void SetProductTitle(Aws::String&& value) { m_productTitleHasBeenSet = true; m_productTitle = std::move(value); }
    inline void SetProductTitle(const char* value) { m_productTitleHasBeenSet = true; m_productTitle.assign(value); }
    inline ManagedProductDescriptor& WithProductTitle(const Aws::String& value) { SetProductTitle(value); return *this;}
    inline ManagedProductDescriptor& WithProductTitle(Aws::String&& value) { SetProductTitle(std::move(value)); return *this;}
    inline ManagedProductDescriptor& WithProductTitle(const char* value) { SetProductTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the managed rule group.</p>
     */
    inline const Aws::String& GetProductDescription() const{ return m_productDescription; }
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }
    inline void SetProductDescription(const Aws::String& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }
    inline void SetProductDescription(Aws::String&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = std::move(value); }
    inline void SetProductDescription(const char* value) { m_productDescriptionHasBeenSet = true; m_productDescription.assign(value); }
    inline ManagedProductDescriptor& WithProductDescription(const Aws::String& value) { SetProductDescription(value); return *this;}
    inline ManagedProductDescriptor& WithProductDescription(Aws::String&& value) { SetProductDescription(std::move(value)); return *this;}
    inline ManagedProductDescriptor& WithProductDescription(const char* value) { SetProductDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to provide notification of changes to the managed rule group.
     * You can subscribe to the SNS topic to receive notifications when the managed
     * rule group is modified, such as for new versions and for version expiration. For
     * more information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide</a>.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }
    inline ManagedProductDescriptor& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}
    inline ManagedProductDescriptor& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}
    inline ManagedProductDescriptor& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the rule group is versioned. </p>
     */
    inline bool GetIsVersioningSupported() const{ return m_isVersioningSupported; }
    inline bool IsVersioningSupportedHasBeenSet() const { return m_isVersioningSupportedHasBeenSet; }
    inline void SetIsVersioningSupported(bool value) { m_isVersioningSupportedHasBeenSet = true; m_isVersioningSupported = value; }
    inline ManagedProductDescriptor& WithIsVersioningSupported(bool value) { SetIsVersioningSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the rule group provides an advanced set of protections,
     * such as the the Amazon Web Services Managed Rules rule groups that are used for
     * WAF intelligent threat mitigation. </p>
     */
    inline bool GetIsAdvancedManagedRuleSet() const{ return m_isAdvancedManagedRuleSet; }
    inline bool IsAdvancedManagedRuleSetHasBeenSet() const { return m_isAdvancedManagedRuleSetHasBeenSet; }
    inline void SetIsAdvancedManagedRuleSet(bool value) { m_isAdvancedManagedRuleSetHasBeenSet = true; m_isAdvancedManagedRuleSet = value; }
    inline ManagedProductDescriptor& WithIsAdvancedManagedRuleSet(bool value) { SetIsAdvancedManagedRuleSet(value); return *this;}
    ///@}
  private:

    Aws::String m_vendorName;
    bool m_vendorNameHasBeenSet = false;

    Aws::String m_managedRuleSetName;
    bool m_managedRuleSetNameHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_productLink;
    bool m_productLinkHasBeenSet = false;

    Aws::String m_productTitle;
    bool m_productTitleHasBeenSet = false;

    Aws::String m_productDescription;
    bool m_productDescriptionHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    bool m_isVersioningSupported;
    bool m_isVersioningSupportedHasBeenSet = false;

    bool m_isAdvancedManagedRuleSet;
    bool m_isAdvancedManagedRuleSetHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
