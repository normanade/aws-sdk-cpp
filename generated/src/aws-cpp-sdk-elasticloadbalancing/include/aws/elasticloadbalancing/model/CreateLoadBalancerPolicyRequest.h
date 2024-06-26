﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/PolicyAttribute.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateLoadBalancerPolicy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLoadBalancerPolicyInput">AWS
   * API Reference</a></p>
   */
  class CreateLoadBalancerPolicyRequest : public ElasticLoadBalancingRequest
  {
  public:
    AWS_ELASTICLOADBALANCING_API CreateLoadBalancerPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoadBalancerPolicy"; }

    AWS_ELASTICLOADBALANCING_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }
    inline CreateLoadBalancerPolicyRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}
    inline CreateLoadBalancerPolicyRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}
    inline CreateLoadBalancerPolicyRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the load balancer policy to be created. This name must be unique
     * within the set of policies for this load balancer.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }
    inline CreateLoadBalancerPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline CreateLoadBalancerPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline CreateLoadBalancerPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the base policy type. To get the list of policy types, use
     * <a>DescribeLoadBalancerPolicyTypes</a>.</p>
     */
    inline const Aws::String& GetPolicyTypeName() const{ return m_policyTypeName; }
    inline bool PolicyTypeNameHasBeenSet() const { return m_policyTypeNameHasBeenSet; }
    inline void SetPolicyTypeName(const Aws::String& value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName = value; }
    inline void SetPolicyTypeName(Aws::String&& value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName = std::move(value); }
    inline void SetPolicyTypeName(const char* value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName.assign(value); }
    inline CreateLoadBalancerPolicyRequest& WithPolicyTypeName(const Aws::String& value) { SetPolicyTypeName(value); return *this;}
    inline CreateLoadBalancerPolicyRequest& WithPolicyTypeName(Aws::String&& value) { SetPolicyTypeName(std::move(value)); return *this;}
    inline CreateLoadBalancerPolicyRequest& WithPolicyTypeName(const char* value) { SetPolicyTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy attributes.</p>
     */
    inline const Aws::Vector<PolicyAttribute>& GetPolicyAttributes() const{ return m_policyAttributes; }
    inline bool PolicyAttributesHasBeenSet() const { return m_policyAttributesHasBeenSet; }
    inline void SetPolicyAttributes(const Aws::Vector<PolicyAttribute>& value) { m_policyAttributesHasBeenSet = true; m_policyAttributes = value; }
    inline void SetPolicyAttributes(Aws::Vector<PolicyAttribute>&& value) { m_policyAttributesHasBeenSet = true; m_policyAttributes = std::move(value); }
    inline CreateLoadBalancerPolicyRequest& WithPolicyAttributes(const Aws::Vector<PolicyAttribute>& value) { SetPolicyAttributes(value); return *this;}
    inline CreateLoadBalancerPolicyRequest& WithPolicyAttributes(Aws::Vector<PolicyAttribute>&& value) { SetPolicyAttributes(std::move(value)); return *this;}
    inline CreateLoadBalancerPolicyRequest& AddPolicyAttributes(const PolicyAttribute& value) { m_policyAttributesHasBeenSet = true; m_policyAttributes.push_back(value); return *this; }
    inline CreateLoadBalancerPolicyRequest& AddPolicyAttributes(PolicyAttribute&& value) { m_policyAttributesHasBeenSet = true; m_policyAttributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyTypeName;
    bool m_policyTypeNameHasBeenSet = false;

    Aws::Vector<PolicyAttribute> m_policyAttributes;
    bool m_policyAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
