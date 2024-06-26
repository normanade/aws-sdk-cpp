﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/ConnectionDetails.h>
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
namespace Outposts
{
namespace Model
{
  class GetConnectionResult
  {
  public:
    AWS_OUTPOSTS_API GetConnectionResult();
    AWS_OUTPOSTS_API GetConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API GetConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ID of the connection. </p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }
    inline GetConnectionResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline GetConnectionResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline GetConnectionResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the connection. </p>
     */
    inline const ConnectionDetails& GetConnectionDetails() const{ return m_connectionDetails; }
    inline void SetConnectionDetails(const ConnectionDetails& value) { m_connectionDetails = value; }
    inline void SetConnectionDetails(ConnectionDetails&& value) { m_connectionDetails = std::move(value); }
    inline GetConnectionResult& WithConnectionDetails(const ConnectionDetails& value) { SetConnectionDetails(value); return *this;}
    inline GetConnectionResult& WithConnectionDetails(ConnectionDetails&& value) { SetConnectionDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;

    ConnectionDetails m_connectionDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
