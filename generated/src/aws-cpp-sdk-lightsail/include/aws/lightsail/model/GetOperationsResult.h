﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/Operation.h>
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
namespace Lightsail
{
namespace Model
{
  class GetOperationsResult
  {
  public:
    AWS_LIGHTSAIL_API GetOperationsResult();
    AWS_LIGHTSAIL_API GetOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline const Aws::Vector<Operation>& GetOperations() const{ return m_operations; }
    inline void SetOperations(const Aws::Vector<Operation>& value) { m_operations = value; }
    inline void SetOperations(Aws::Vector<Operation>&& value) { m_operations = std::move(value); }
    inline GetOperationsResult& WithOperations(const Aws::Vector<Operation>& value) { SetOperations(value); return *this;}
    inline GetOperationsResult& WithOperations(Aws::Vector<Operation>&& value) { SetOperations(std::move(value)); return *this;}
    inline GetOperationsResult& AddOperations(const Operation& value) { m_operations.push_back(value); return *this; }
    inline GetOperationsResult& AddOperations(Operation&& value) { m_operations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetOperations</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetOperationsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetOperationsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetOperationsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetOperationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetOperationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetOperationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Operation> m_operations;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
