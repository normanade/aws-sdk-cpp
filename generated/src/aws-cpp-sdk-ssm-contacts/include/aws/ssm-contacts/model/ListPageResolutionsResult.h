﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/ResolutionContact.h>
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
namespace SSMContacts
{
namespace Model
{
  class ListPageResolutionsResult
  {
  public:
    AWS_SSMCONTACTS_API ListPageResolutionsResult();
    AWS_SSMCONTACTS_API ListPageResolutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListPageResolutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPageResolutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPageResolutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPageResolutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resolution for an engagement.</p>
     */
    inline const Aws::Vector<ResolutionContact>& GetPageResolutions() const{ return m_pageResolutions; }
    inline void SetPageResolutions(const Aws::Vector<ResolutionContact>& value) { m_pageResolutions = value; }
    inline void SetPageResolutions(Aws::Vector<ResolutionContact>&& value) { m_pageResolutions = std::move(value); }
    inline ListPageResolutionsResult& WithPageResolutions(const Aws::Vector<ResolutionContact>& value) { SetPageResolutions(value); return *this;}
    inline ListPageResolutionsResult& WithPageResolutions(Aws::Vector<ResolutionContact>&& value) { SetPageResolutions(std::move(value)); return *this;}
    inline ListPageResolutionsResult& AddPageResolutions(const ResolutionContact& value) { m_pageResolutions.push_back(value); return *this; }
    inline ListPageResolutionsResult& AddPageResolutions(ResolutionContact&& value) { m_pageResolutions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPageResolutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPageResolutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPageResolutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ResolutionContact> m_pageResolutions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
