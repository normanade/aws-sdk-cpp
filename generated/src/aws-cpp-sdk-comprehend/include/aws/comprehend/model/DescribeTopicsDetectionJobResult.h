﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/TopicsDetectionJobProperties.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Comprehend
{
namespace Model
{
  class DescribeTopicsDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API DescribeTopicsDetectionJobResult();
    AWS_COMPREHEND_API DescribeTopicsDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeTopicsDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of properties for the requested job.</p>
     */
    inline const TopicsDetectionJobProperties& GetTopicsDetectionJobProperties() const{ return m_topicsDetectionJobProperties; }
    inline void SetTopicsDetectionJobProperties(const TopicsDetectionJobProperties& value) { m_topicsDetectionJobProperties = value; }
    inline void SetTopicsDetectionJobProperties(TopicsDetectionJobProperties&& value) { m_topicsDetectionJobProperties = std::move(value); }
    inline DescribeTopicsDetectionJobResult& WithTopicsDetectionJobProperties(const TopicsDetectionJobProperties& value) { SetTopicsDetectionJobProperties(value); return *this;}
    inline DescribeTopicsDetectionJobResult& WithTopicsDetectionJobProperties(TopicsDetectionJobProperties&& value) { SetTopicsDetectionJobProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTopicsDetectionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTopicsDetectionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTopicsDetectionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TopicsDetectionJobProperties m_topicsDetectionJobProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
