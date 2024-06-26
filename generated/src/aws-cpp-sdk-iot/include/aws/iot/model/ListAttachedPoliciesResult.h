﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/Policy.h>
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
namespace IoT
{
namespace Model
{
  class ListAttachedPoliciesResult
  {
  public:
    AWS_IOT_API ListAttachedPoliciesResult();
    AWS_IOT_API ListAttachedPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListAttachedPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The policies.</p>
     */
    inline const Aws::Vector<Policy>& GetPolicies() const{ return m_policies; }
    inline void SetPolicies(const Aws::Vector<Policy>& value) { m_policies = value; }
    inline void SetPolicies(Aws::Vector<Policy>&& value) { m_policies = std::move(value); }
    inline ListAttachedPoliciesResult& WithPolicies(const Aws::Vector<Policy>& value) { SetPolicies(value); return *this;}
    inline ListAttachedPoliciesResult& WithPolicies(Aws::Vector<Policy>&& value) { SetPolicies(std::move(value)); return *this;}
    inline ListAttachedPoliciesResult& AddPolicies(const Policy& value) { m_policies.push_back(value); return *this; }
    inline ListAttachedPoliciesResult& AddPolicies(Policy&& value) { m_policies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results, or ``null`` if there are no
     * more results.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline ListAttachedPoliciesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListAttachedPoliciesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListAttachedPoliciesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAttachedPoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAttachedPoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAttachedPoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Policy> m_policies;

    Aws::String m_nextMarker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
