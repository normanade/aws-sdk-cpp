﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/FeatureTransformation.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeFeatureTransformationResult
  {
  public:
    AWS_PERSONALIZE_API DescribeFeatureTransformationResult();
    AWS_PERSONALIZE_API DescribeFeatureTransformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeFeatureTransformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A listing of the FeatureTransformation properties.</p>
     */
    inline const FeatureTransformation& GetFeatureTransformation() const{ return m_featureTransformation; }
    inline void SetFeatureTransformation(const FeatureTransformation& value) { m_featureTransformation = value; }
    inline void SetFeatureTransformation(FeatureTransformation&& value) { m_featureTransformation = std::move(value); }
    inline DescribeFeatureTransformationResult& WithFeatureTransformation(const FeatureTransformation& value) { SetFeatureTransformation(value); return *this;}
    inline DescribeFeatureTransformationResult& WithFeatureTransformation(FeatureTransformation&& value) { SetFeatureTransformation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFeatureTransformationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFeatureTransformationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFeatureTransformationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    FeatureTransformation m_featureTransformation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
