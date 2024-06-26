﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/CustomRoutingListener.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class ListCustomRoutingListenersResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCustomRoutingListenersResult();
    AWS_GLOBALACCELERATOR_API ListCustomRoutingListenersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCustomRoutingListenersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of listeners for a custom routing accelerator.</p>
     */
    inline const Aws::Vector<CustomRoutingListener>& GetListeners() const{ return m_listeners; }
    inline void SetListeners(const Aws::Vector<CustomRoutingListener>& value) { m_listeners = value; }
    inline void SetListeners(Aws::Vector<CustomRoutingListener>&& value) { m_listeners = std::move(value); }
    inline ListCustomRoutingListenersResult& WithListeners(const Aws::Vector<CustomRoutingListener>& value) { SetListeners(value); return *this;}
    inline ListCustomRoutingListenersResult& WithListeners(Aws::Vector<CustomRoutingListener>&& value) { SetListeners(std::move(value)); return *this;}
    inline ListCustomRoutingListenersResult& AddListeners(const CustomRoutingListener& value) { m_listeners.push_back(value); return *this; }
    inline ListCustomRoutingListenersResult& AddListeners(CustomRoutingListener&& value) { m_listeners.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCustomRoutingListenersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCustomRoutingListenersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCustomRoutingListenersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCustomRoutingListenersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCustomRoutingListenersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCustomRoutingListenersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CustomRoutingListener> m_listeners;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
