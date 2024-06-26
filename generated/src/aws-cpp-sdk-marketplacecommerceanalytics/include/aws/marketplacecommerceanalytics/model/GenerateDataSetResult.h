﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
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
namespace MarketplaceCommerceAnalytics
{
namespace Model
{
  /**
   * Container for the result of the GenerateDataSet operation.<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplacecommerceanalytics-2015-07-01/GenerateDataSetResult">AWS
   * API Reference</a></p>
   */
  class GenerateDataSetResult
  {
  public:
    AWS_MARKETPLACECOMMERCEANALYTICS_API GenerateDataSetResult();
    AWS_MARKETPLACECOMMERCEANALYTICS_API GenerateDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECOMMERCEANALYTICS_API GenerateDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A unique identifier representing a specific request to the GenerateDataSet
     * operation. This identifier can be used to correlate a request with notifications
     * from the SNS topic.
     */
    inline const Aws::String& GetDataSetRequestId() const{ return m_dataSetRequestId; }
    inline void SetDataSetRequestId(const Aws::String& value) { m_dataSetRequestId = value; }
    inline void SetDataSetRequestId(Aws::String&& value) { m_dataSetRequestId = std::move(value); }
    inline void SetDataSetRequestId(const char* value) { m_dataSetRequestId.assign(value); }
    inline GenerateDataSetResult& WithDataSetRequestId(const Aws::String& value) { SetDataSetRequestId(value); return *this;}
    inline GenerateDataSetResult& WithDataSetRequestId(Aws::String&& value) { SetDataSetRequestId(std::move(value)); return *this;}
    inline GenerateDataSetResult& WithDataSetRequestId(const char* value) { SetDataSetRequestId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GenerateDataSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GenerateDataSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GenerateDataSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_dataSetRequestId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MarketplaceCommerceAnalytics
} // namespace Aws
