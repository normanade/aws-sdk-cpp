﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProductViewDetail.h>
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
  class SearchProductsAsAdminResult
  {
  public:
    AWS_SERVICECATALOG_API SearchProductsAsAdminResult();
    AWS_SERVICECATALOG_API SearchProductsAsAdminResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API SearchProductsAsAdminResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the product views.</p>
     */
    inline const Aws::Vector<ProductViewDetail>& GetProductViewDetails() const{ return m_productViewDetails; }
    inline void SetProductViewDetails(const Aws::Vector<ProductViewDetail>& value) { m_productViewDetails = value; }
    inline void SetProductViewDetails(Aws::Vector<ProductViewDetail>&& value) { m_productViewDetails = std::move(value); }
    inline SearchProductsAsAdminResult& WithProductViewDetails(const Aws::Vector<ProductViewDetail>& value) { SetProductViewDetails(value); return *this;}
    inline SearchProductsAsAdminResult& WithProductViewDetails(Aws::Vector<ProductViewDetail>&& value) { SetProductViewDetails(std::move(value)); return *this;}
    inline SearchProductsAsAdminResult& AddProductViewDetails(const ProductViewDetail& value) { m_productViewDetails.push_back(value); return *this; }
    inline SearchProductsAsAdminResult& AddProductViewDetails(ProductViewDetail&& value) { m_productViewDetails.push_back(std::move(value)); return *this; }
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
    inline SearchProductsAsAdminResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline SearchProductsAsAdminResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline SearchProductsAsAdminResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchProductsAsAdminResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchProductsAsAdminResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchProductsAsAdminResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProductViewDetail> m_productViewDetails;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
