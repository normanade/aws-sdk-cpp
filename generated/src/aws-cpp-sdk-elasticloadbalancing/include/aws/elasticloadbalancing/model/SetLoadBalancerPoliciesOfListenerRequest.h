﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for SetLoadBalancePoliciesOfListener.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/SetLoadBalancerPoliciesOfListenerInput">AWS
   * API Reference</a></p>
   */
  class SetLoadBalancerPoliciesOfListenerRequest : public ElasticLoadBalancingRequest
  {
  public:
    AWS_ELASTICLOADBALANCING_API SetLoadBalancerPoliciesOfListenerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetLoadBalancerPoliciesOfListener"; }

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
    inline SetLoadBalancerPoliciesOfListenerRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}
    inline SetLoadBalancerPoliciesOfListenerRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}
    inline SetLoadBalancerPoliciesOfListenerRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external port of the load balancer.</p>
     */
    inline int GetLoadBalancerPort() const{ return m_loadBalancerPort; }
    inline bool LoadBalancerPortHasBeenSet() const { return m_loadBalancerPortHasBeenSet; }
    inline void SetLoadBalancerPort(int value) { m_loadBalancerPortHasBeenSet = true; m_loadBalancerPort = value; }
    inline SetLoadBalancerPoliciesOfListenerRequest& WithLoadBalancerPort(int value) { SetLoadBalancerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the policies. This list must include all policies to be enabled.
     * If you omit a policy that is currently enabled, it is disabled. If the list is
     * empty, all current policies are disabled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const{ return m_policyNames; }
    inline bool PolicyNamesHasBeenSet() const { return m_policyNamesHasBeenSet; }
    inline void SetPolicyNames(const Aws::Vector<Aws::String>& value) { m_policyNamesHasBeenSet = true; m_policyNames = value; }
    inline void SetPolicyNames(Aws::Vector<Aws::String>&& value) { m_policyNamesHasBeenSet = true; m_policyNames = std::move(value); }
    inline SetLoadBalancerPoliciesOfListenerRequest& WithPolicyNames(const Aws::Vector<Aws::String>& value) { SetPolicyNames(value); return *this;}
    inline SetLoadBalancerPoliciesOfListenerRequest& WithPolicyNames(Aws::Vector<Aws::String>&& value) { SetPolicyNames(std::move(value)); return *this;}
    inline SetLoadBalancerPoliciesOfListenerRequest& AddPolicyNames(const Aws::String& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }
    inline SetLoadBalancerPoliciesOfListenerRequest& AddPolicyNames(Aws::String&& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(std::move(value)); return *this; }
    inline SetLoadBalancerPoliciesOfListenerRequest& AddPolicyNames(const char* value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    int m_loadBalancerPort;
    bool m_loadBalancerPortHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyNames;
    bool m_policyNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
