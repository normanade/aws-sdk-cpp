﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScalingActivity.h>
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
  class DescribeScalingActivitiesResult
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API DescribeScalingActivitiesResult();
    AWS_APPLICATIONAUTOSCALING_API DescribeScalingActivitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONAUTOSCALING_API DescribeScalingActivitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of scaling activity objects.</p>
     */
    inline const Aws::Vector<ScalingActivity>& GetScalingActivities() const{ return m_scalingActivities; }
    inline void SetScalingActivities(const Aws::Vector<ScalingActivity>& value) { m_scalingActivities = value; }
    inline void SetScalingActivities(Aws::Vector<ScalingActivity>&& value) { m_scalingActivities = std::move(value); }
    inline DescribeScalingActivitiesResult& WithScalingActivities(const Aws::Vector<ScalingActivity>& value) { SetScalingActivities(value); return *this;}
    inline DescribeScalingActivitiesResult& WithScalingActivities(Aws::Vector<ScalingActivity>&& value) { SetScalingActivities(std::move(value)); return *this;}
    inline DescribeScalingActivitiesResult& AddScalingActivities(const ScalingActivity& value) { m_scalingActivities.push_back(value); return *this; }
    inline DescribeScalingActivitiesResult& AddScalingActivities(ScalingActivity&& value) { m_scalingActivities.push_back(std::move(value)); return *this; }
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
    inline DescribeScalingActivitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeScalingActivitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeScalingActivitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeScalingActivitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeScalingActivitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeScalingActivitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ScalingActivity> m_scalingActivities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
