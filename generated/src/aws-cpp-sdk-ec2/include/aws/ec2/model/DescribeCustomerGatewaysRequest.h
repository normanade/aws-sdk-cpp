﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeCustomerGateways.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeCustomerGatewaysRequest">AWS
   * API Reference</a></p>
   */
  class DescribeCustomerGatewaysRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeCustomerGatewaysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCustomerGateways"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>One or more customer gateway IDs.</p> <p>Default: Describes all your customer
     * gateways.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomerGatewayIds() const{ return m_customerGatewayIds; }
    inline bool CustomerGatewayIdsHasBeenSet() const { return m_customerGatewayIdsHasBeenSet; }
    inline void SetCustomerGatewayIds(const Aws::Vector<Aws::String>& value) { m_customerGatewayIdsHasBeenSet = true; m_customerGatewayIds = value; }
    inline void SetCustomerGatewayIds(Aws::Vector<Aws::String>&& value) { m_customerGatewayIdsHasBeenSet = true; m_customerGatewayIds = std::move(value); }
    inline DescribeCustomerGatewaysRequest& WithCustomerGatewayIds(const Aws::Vector<Aws::String>& value) { SetCustomerGatewayIds(value); return *this;}
    inline DescribeCustomerGatewaysRequest& WithCustomerGatewayIds(Aws::Vector<Aws::String>&& value) { SetCustomerGatewayIds(std::move(value)); return *this;}
    inline DescribeCustomerGatewaysRequest& AddCustomerGatewayIds(const Aws::String& value) { m_customerGatewayIdsHasBeenSet = true; m_customerGatewayIds.push_back(value); return *this; }
    inline DescribeCustomerGatewaysRequest& AddCustomerGatewayIds(Aws::String&& value) { m_customerGatewayIdsHasBeenSet = true; m_customerGatewayIds.push_back(std::move(value)); return *this; }
    inline DescribeCustomerGatewaysRequest& AddCustomerGatewayIds(const char* value) { m_customerGatewayIdsHasBeenSet = true; m_customerGatewayIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>bgp-asn</code> - The customer
     * gateway's Border Gateway Protocol (BGP) Autonomous System Number (ASN).</p>
     * </li> <li> <p> <code>customer-gateway-id</code> - The ID of the customer
     * gateway.</p> </li> <li> <p> <code>ip-address</code> - The IP address of the
     * customer gateway device's external interface.</p> </li> <li> <p>
     * <code>state</code> - The state of the customer gateway (<code>pending</code> |
     * <code>available</code> | <code>deleting</code> | <code>deleted</code>).</p>
     * </li> <li> <p> <code>type</code> - The type of customer gateway. Currently, the
     * only supported type is <code>ipsec.1</code>.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeCustomerGatewaysRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeCustomerGatewaysRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeCustomerGatewaysRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeCustomerGatewaysRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeCustomerGatewaysRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_customerGatewayIds;
    bool m_customerGatewayIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
