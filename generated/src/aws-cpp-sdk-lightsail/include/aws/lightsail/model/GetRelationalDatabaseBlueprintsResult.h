﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RelationalDatabaseBlueprint.h>
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
  class GetRelationalDatabaseBlueprintsResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseBlueprintsResult();
    AWS_LIGHTSAIL_API GetRelationalDatabaseBlueprintsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseBlueprintsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object describing the result of your get relational database blueprints
     * request.</p>
     */
    inline const Aws::Vector<RelationalDatabaseBlueprint>& GetBlueprints() const{ return m_blueprints; }
    inline void SetBlueprints(const Aws::Vector<RelationalDatabaseBlueprint>& value) { m_blueprints = value; }
    inline void SetBlueprints(Aws::Vector<RelationalDatabaseBlueprint>&& value) { m_blueprints = std::move(value); }
    inline GetRelationalDatabaseBlueprintsResult& WithBlueprints(const Aws::Vector<RelationalDatabaseBlueprint>& value) { SetBlueprints(value); return *this;}
    inline GetRelationalDatabaseBlueprintsResult& WithBlueprints(Aws::Vector<RelationalDatabaseBlueprint>&& value) { SetBlueprints(std::move(value)); return *this;}
    inline GetRelationalDatabaseBlueprintsResult& AddBlueprints(const RelationalDatabaseBlueprint& value) { m_blueprints.push_back(value); return *this; }
    inline GetRelationalDatabaseBlueprintsResult& AddBlueprints(RelationalDatabaseBlueprint&& value) { m_blueprints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseBlueprints</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetRelationalDatabaseBlueprintsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetRelationalDatabaseBlueprintsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetRelationalDatabaseBlueprintsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRelationalDatabaseBlueprintsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRelationalDatabaseBlueprintsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRelationalDatabaseBlueprintsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RelationalDatabaseBlueprint> m_blueprints;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
