﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/RegexMatchSetSummary.h>
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
namespace WAF
{
namespace Model
{
  class ListRegexMatchSetsResult
  {
  public:
    AWS_WAF_API ListRegexMatchSetsResult();
    AWS_WAF_API ListRegexMatchSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListRegexMatchSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If you have more <code>RegexMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RegexMatchSet</code> objects,
     * submit another <code>ListRegexMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline ListRegexMatchSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListRegexMatchSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListRegexMatchSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>RegexMatchSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<RegexMatchSetSummary>& GetRegexMatchSets() const{ return m_regexMatchSets; }
    inline void SetRegexMatchSets(const Aws::Vector<RegexMatchSetSummary>& value) { m_regexMatchSets = value; }
    inline void SetRegexMatchSets(Aws::Vector<RegexMatchSetSummary>&& value) { m_regexMatchSets = std::move(value); }
    inline ListRegexMatchSetsResult& WithRegexMatchSets(const Aws::Vector<RegexMatchSetSummary>& value) { SetRegexMatchSets(value); return *this;}
    inline ListRegexMatchSetsResult& WithRegexMatchSets(Aws::Vector<RegexMatchSetSummary>&& value) { SetRegexMatchSets(std::move(value)); return *this;}
    inline ListRegexMatchSetsResult& AddRegexMatchSets(const RegexMatchSetSummary& value) { m_regexMatchSets.push_back(value); return *this; }
    inline ListRegexMatchSetsResult& AddRegexMatchSets(RegexMatchSetSummary&& value) { m_regexMatchSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRegexMatchSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRegexMatchSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRegexMatchSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;

    Aws::Vector<RegexMatchSetSummary> m_regexMatchSets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
