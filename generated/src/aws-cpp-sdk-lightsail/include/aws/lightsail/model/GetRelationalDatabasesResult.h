﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RelationalDatabase.h>
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
  class GetRelationalDatabasesResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabasesResult();
    AWS_LIGHTSAIL_API GetRelationalDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object describing the result of your get relational databases request.</p>
     */
    inline const Aws::Vector<RelationalDatabase>& GetRelationalDatabases() const{ return m_relationalDatabases; }
    inline void SetRelationalDatabases(const Aws::Vector<RelationalDatabase>& value) { m_relationalDatabases = value; }
    inline void SetRelationalDatabases(Aws::Vector<RelationalDatabase>&& value) { m_relationalDatabases = std::move(value); }
    inline GetRelationalDatabasesResult& WithRelationalDatabases(const Aws::Vector<RelationalDatabase>& value) { SetRelationalDatabases(value); return *this;}
    inline GetRelationalDatabasesResult& WithRelationalDatabases(Aws::Vector<RelationalDatabase>&& value) { SetRelationalDatabases(std::move(value)); return *this;}
    inline GetRelationalDatabasesResult& AddRelationalDatabases(const RelationalDatabase& value) { m_relationalDatabases.push_back(value); return *this; }
    inline GetRelationalDatabasesResult& AddRelationalDatabases(RelationalDatabase&& value) { m_relationalDatabases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabases</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetRelationalDatabasesResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetRelationalDatabasesResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetRelationalDatabasesResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRelationalDatabasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRelationalDatabasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRelationalDatabasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RelationalDatabase> m_relationalDatabases;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
