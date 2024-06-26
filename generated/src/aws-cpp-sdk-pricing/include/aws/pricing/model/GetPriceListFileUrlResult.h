﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
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
namespace Pricing
{
namespace Model
{
  class GetPriceListFileUrlResult
  {
  public:
    AWS_PRICING_API GetPriceListFileUrlResult();
    AWS_PRICING_API GetPriceListFileUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRICING_API GetPriceListFileUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The URL to download your Price List file from. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline void SetUrl(const Aws::String& value) { m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_url.assign(value); }
    inline GetPriceListFileUrlResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline GetPriceListFileUrlResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline GetPriceListFileUrlResult& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPriceListFileUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPriceListFileUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPriceListFileUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_url;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
