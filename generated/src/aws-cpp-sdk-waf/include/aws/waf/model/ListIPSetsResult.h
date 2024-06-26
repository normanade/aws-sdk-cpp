﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/IPSetSummary.h>
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
  class ListIPSetsResult
  {
  public:
    AWS_WAF_API ListIPSetsResult();
    AWS_WAF_API ListIPSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListIPSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>To list more <code>IPSet</code> objects, submit another
     * <code>ListIPSets</code> request, and in the next request use the
     * <code>NextMarker</code> response value as the <code>NextMarker</code> value.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline ListIPSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListIPSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListIPSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>IPSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<IPSetSummary>& GetIPSets() const{ return m_iPSets; }
    inline void SetIPSets(const Aws::Vector<IPSetSummary>& value) { m_iPSets = value; }
    inline void SetIPSets(Aws::Vector<IPSetSummary>&& value) { m_iPSets = std::move(value); }
    inline ListIPSetsResult& WithIPSets(const Aws::Vector<IPSetSummary>& value) { SetIPSets(value); return *this;}
    inline ListIPSetsResult& WithIPSets(Aws::Vector<IPSetSummary>&& value) { SetIPSets(std::move(value)); return *this;}
    inline ListIPSetsResult& AddIPSets(const IPSetSummary& value) { m_iPSets.push_back(value); return *this; }
    inline ListIPSetsResult& AddIPSets(IPSetSummary&& value) { m_iPSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIPSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIPSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIPSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;

    Aws::Vector<IPSetSummary> m_iPSets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
