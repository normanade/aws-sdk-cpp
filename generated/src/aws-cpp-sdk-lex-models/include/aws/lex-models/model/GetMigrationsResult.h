﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/MigrationSummary.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class GetMigrationsResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetMigrationsResult();
    AWS_LEXMODELBUILDINGSERVICE_API GetMigrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetMigrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of summaries for migrations from Amazon Lex V1 to Amazon Lex V2. To
     * see details of the migration, use the <code>migrationId</code> from the summary
     * in a call to the operation.</p>
     */
    inline const Aws::Vector<MigrationSummary>& GetMigrationSummaries() const{ return m_migrationSummaries; }
    inline void SetMigrationSummaries(const Aws::Vector<MigrationSummary>& value) { m_migrationSummaries = value; }
    inline void SetMigrationSummaries(Aws::Vector<MigrationSummary>&& value) { m_migrationSummaries = std::move(value); }
    inline GetMigrationsResult& WithMigrationSummaries(const Aws::Vector<MigrationSummary>& value) { SetMigrationSummaries(value); return *this;}
    inline GetMigrationsResult& WithMigrationSummaries(Aws::Vector<MigrationSummary>&& value) { SetMigrationSummaries(std::move(value)); return *this;}
    inline GetMigrationsResult& AddMigrationSummaries(const MigrationSummary& value) { m_migrationSummaries.push_back(value); return *this; }
    inline GetMigrationsResult& AddMigrationSummaries(MigrationSummary&& value) { m_migrationSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, it includes a pagination token that you can
     * specify in your next request to fetch the next page of migrations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetMigrationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetMigrationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetMigrationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMigrationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMigrationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMigrationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MigrationSummary> m_migrationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
