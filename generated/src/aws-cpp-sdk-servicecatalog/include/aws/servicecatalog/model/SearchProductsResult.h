﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProductViewSummary.h>
#include <aws/servicecatalog/model/ProductViewAggregationValue.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class SearchProductsResult
  {
  public:
    AWS_SERVICECATALOG_API SearchProductsResult();
    AWS_SERVICECATALOG_API SearchProductsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API SearchProductsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the product views.</p>
     */
    inline const Aws::Vector<ProductViewSummary>& GetProductViewSummaries() const{ return m_productViewSummaries; }
    inline void SetProductViewSummaries(const Aws::Vector<ProductViewSummary>& value) { m_productViewSummaries = value; }
    inline void SetProductViewSummaries(Aws::Vector<ProductViewSummary>&& value) { m_productViewSummaries = std::move(value); }
    inline SearchProductsResult& WithProductViewSummaries(const Aws::Vector<ProductViewSummary>& value) { SetProductViewSummaries(value); return *this;}
    inline SearchProductsResult& WithProductViewSummaries(Aws::Vector<ProductViewSummary>&& value) { SetProductViewSummaries(std::move(value)); return *this;}
    inline SearchProductsResult& AddProductViewSummaries(const ProductViewSummary& value) { m_productViewSummaries.push_back(value); return *this; }
    inline SearchProductsResult& AddProductViewSummaries(ProductViewSummary&& value) { m_productViewSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The product view aggregations.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>>& GetProductViewAggregations() const{ return m_productViewAggregations; }
    inline void SetProductViewAggregations(const Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>>& value) { m_productViewAggregations = value; }
    inline void SetProductViewAggregations(Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>>&& value) { m_productViewAggregations = std::move(value); }
    inline SearchProductsResult& WithProductViewAggregations(const Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>>& value) { SetProductViewAggregations(value); return *this;}
    inline SearchProductsResult& WithProductViewAggregations(Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>>&& value) { SetProductViewAggregations(std::move(value)); return *this;}
    inline SearchProductsResult& AddProductViewAggregations(const Aws::String& key, const Aws::Vector<ProductViewAggregationValue>& value) { m_productViewAggregations.emplace(key, value); return *this; }
    inline SearchProductsResult& AddProductViewAggregations(Aws::String&& key, const Aws::Vector<ProductViewAggregationValue>& value) { m_productViewAggregations.emplace(std::move(key), value); return *this; }
    inline SearchProductsResult& AddProductViewAggregations(const Aws::String& key, Aws::Vector<ProductViewAggregationValue>&& value) { m_productViewAggregations.emplace(key, std::move(value)); return *this; }
    inline SearchProductsResult& AddProductViewAggregations(Aws::String&& key, Aws::Vector<ProductViewAggregationValue>&& value) { m_productViewAggregations.emplace(std::move(key), std::move(value)); return *this; }
    inline SearchProductsResult& AddProductViewAggregations(const char* key, Aws::Vector<ProductViewAggregationValue>&& value) { m_productViewAggregations.emplace(key, std::move(value)); return *this; }
    inline SearchProductsResult& AddProductViewAggregations(const char* key, const Aws::Vector<ProductViewAggregationValue>& value) { m_productViewAggregations.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline SearchProductsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline SearchProductsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline SearchProductsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchProductsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchProductsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchProductsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProductViewSummary> m_productViewSummaries;

    Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>> m_productViewAggregations;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
