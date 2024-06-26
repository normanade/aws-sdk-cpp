﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/CustomLineItemVersionListElement.h>
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
namespace BillingConductor
{
namespace Model
{
  class ListCustomLineItemVersionsResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsResult();
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>CustomLineItemVersionListElements</code> that are
     * received.</p>
     */
    inline const Aws::Vector<CustomLineItemVersionListElement>& GetCustomLineItemVersions() const{ return m_customLineItemVersions; }
    inline void SetCustomLineItemVersions(const Aws::Vector<CustomLineItemVersionListElement>& value) { m_customLineItemVersions = value; }
    inline void SetCustomLineItemVersions(Aws::Vector<CustomLineItemVersionListElement>&& value) { m_customLineItemVersions = std::move(value); }
    inline ListCustomLineItemVersionsResult& WithCustomLineItemVersions(const Aws::Vector<CustomLineItemVersionListElement>& value) { SetCustomLineItemVersions(value); return *this;}
    inline ListCustomLineItemVersionsResult& WithCustomLineItemVersions(Aws::Vector<CustomLineItemVersionListElement>&& value) { SetCustomLineItemVersions(std::move(value)); return *this;}
    inline ListCustomLineItemVersionsResult& AddCustomLineItemVersions(const CustomLineItemVersionListElement& value) { m_customLineItemVersions.push_back(value); return *this; }
    inline ListCustomLineItemVersionsResult& AddCustomLineItemVersions(CustomLineItemVersionListElement&& value) { m_customLineItemVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used on subsequent calls to retrieve custom line
     * item versions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCustomLineItemVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCustomLineItemVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCustomLineItemVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCustomLineItemVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCustomLineItemVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCustomLineItemVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CustomLineItemVersionListElement> m_customLineItemVersions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
