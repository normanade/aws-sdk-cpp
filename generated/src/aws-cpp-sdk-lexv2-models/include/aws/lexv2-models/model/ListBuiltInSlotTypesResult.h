﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BuiltInSlotTypeSummary.h>
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
namespace LexModelsV2
{
namespace Model
{
  class ListBuiltInSlotTypesResult
  {
  public:
    AWS_LEXMODELSV2_API ListBuiltInSlotTypesResult();
    AWS_LEXMODELSV2_API ListBuiltInSlotTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBuiltInSlotTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information for the built-in slot types that meet the filter criteria
     * specified in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more slot types
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline const Aws::Vector<BuiltInSlotTypeSummary>& GetBuiltInSlotTypeSummaries() const{ return m_builtInSlotTypeSummaries; }
    inline void SetBuiltInSlotTypeSummaries(const Aws::Vector<BuiltInSlotTypeSummary>& value) { m_builtInSlotTypeSummaries = value; }
    inline void SetBuiltInSlotTypeSummaries(Aws::Vector<BuiltInSlotTypeSummary>&& value) { m_builtInSlotTypeSummaries = std::move(value); }
    inline ListBuiltInSlotTypesResult& WithBuiltInSlotTypeSummaries(const Aws::Vector<BuiltInSlotTypeSummary>& value) { SetBuiltInSlotTypeSummaries(value); return *this;}
    inline ListBuiltInSlotTypesResult& WithBuiltInSlotTypeSummaries(Aws::Vector<BuiltInSlotTypeSummary>&& value) { SetBuiltInSlotTypeSummaries(std::move(value)); return *this;}
    inline ListBuiltInSlotTypesResult& AddBuiltInSlotTypeSummaries(const BuiltInSlotTypeSummary& value) { m_builtInSlotTypeSummaries.push_back(value); return *this; }
    inline ListBuiltInSlotTypesResult& AddBuiltInSlotTypeSummaries(BuiltInSlotTypeSummary&& value) { m_builtInSlotTypeSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBuiltInSlotTypes</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>LIstBuiltInSlotTypes</code>
     * operation request to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBuiltInSlotTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBuiltInSlotTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBuiltInSlotTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language and locale of the slot types in the list.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }
    inline ListBuiltInSlotTypesResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline ListBuiltInSlotTypesResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline ListBuiltInSlotTypesResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBuiltInSlotTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBuiltInSlotTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBuiltInSlotTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BuiltInSlotTypeSummary> m_builtInSlotTypeSummaries;

    Aws::String m_nextToken;

    Aws::String m_localeId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
