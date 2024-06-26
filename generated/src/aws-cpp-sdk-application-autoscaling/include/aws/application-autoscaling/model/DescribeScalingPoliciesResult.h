﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScalingPolicy.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApplicationAutoScaling
{
namespace Model
{
  class DescribeScalingPoliciesResult
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API DescribeScalingPoliciesResult();
    AWS_APPLICATIONAUTOSCALING_API DescribeScalingPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONAUTOSCALING_API DescribeScalingPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the scaling policies.</p>
     */
    inline const Aws::Vector<ScalingPolicy>& GetScalingPolicies() const{ return m_scalingPolicies; }
    inline void SetScalingPolicies(const Aws::Vector<ScalingPolicy>& value) { m_scalingPolicies = value; }
    inline void SetScalingPolicies(Aws::Vector<ScalingPolicy>&& value) { m_scalingPolicies = std::move(value); }
    inline DescribeScalingPoliciesResult& WithScalingPolicies(const Aws::Vector<ScalingPolicy>& value) { SetScalingPolicies(value); return *this;}
    inline DescribeScalingPoliciesResult& WithScalingPolicies(Aws::Vector<ScalingPolicy>&& value) { SetScalingPolicies(std::move(value)); return *this;}
    inline DescribeScalingPoliciesResult& AddScalingPolicies(const ScalingPolicy& value) { m_scalingPolicies.push_back(value); return *this; }
    inline DescribeScalingPoliciesResult& AddScalingPolicies(ScalingPolicy&& value) { m_scalingPolicies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeScalingPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeScalingPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeScalingPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeScalingPoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeScalingPoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeScalingPoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ScalingPolicy> m_scalingPolicies;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
