﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class DeletePortfolioShareResult
  {
  public:
    AWS_SERVICECATALOG_API DeletePortfolioShareResult();
    AWS_SERVICECATALOG_API DeletePortfolioShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DeletePortfolioShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The portfolio share unique identifier. This will only be returned if delete
     * is made to an organization node.</p>
     */
    inline const Aws::String& GetPortfolioShareToken() const{ return m_portfolioShareToken; }
    inline void SetPortfolioShareToken(const Aws::String& value) { m_portfolioShareToken = value; }
    inline void SetPortfolioShareToken(Aws::String&& value) { m_portfolioShareToken = std::move(value); }
    inline void SetPortfolioShareToken(const char* value) { m_portfolioShareToken.assign(value); }
    inline DeletePortfolioShareResult& WithPortfolioShareToken(const Aws::String& value) { SetPortfolioShareToken(value); return *this;}
    inline DeletePortfolioShareResult& WithPortfolioShareToken(Aws::String&& value) { SetPortfolioShareToken(std::move(value)); return *this;}
    inline DeletePortfolioShareResult& WithPortfolioShareToken(const char* value) { SetPortfolioShareToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeletePortfolioShareResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeletePortfolioShareResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeletePortfolioShareResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_portfolioShareToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
