﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class BackTestAnomalyDetectorResult
  {
  public:
    AWS_LOOKOUTMETRICS_API BackTestAnomalyDetectorResult();
    AWS_LOOKOUTMETRICS_API BackTestAnomalyDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API BackTestAnomalyDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BackTestAnomalyDetectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BackTestAnomalyDetectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BackTestAnomalyDetectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
