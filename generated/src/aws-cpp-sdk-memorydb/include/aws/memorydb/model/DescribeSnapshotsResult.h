﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/Snapshot.h>
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
namespace MemoryDB
{
namespace Model
{
  class DescribeSnapshotsResult
  {
  public:
    AWS_MEMORYDB_API DescribeSnapshotsResult();
    AWS_MEMORYDB_API DescribeSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeSnapshotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeSnapshotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeSnapshotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of snapshots. Each item in the list contains detailed information
     * about one snapshot.</p>
     */
    inline const Aws::Vector<Snapshot>& GetSnapshots() const{ return m_snapshots; }
    inline void SetSnapshots(const Aws::Vector<Snapshot>& value) { m_snapshots = value; }
    inline void SetSnapshots(Aws::Vector<Snapshot>&& value) { m_snapshots = std::move(value); }
    inline DescribeSnapshotsResult& WithSnapshots(const Aws::Vector<Snapshot>& value) { SetSnapshots(value); return *this;}
    inline DescribeSnapshotsResult& WithSnapshots(Aws::Vector<Snapshot>&& value) { SetSnapshots(std::move(value)); return *this;}
    inline DescribeSnapshotsResult& AddSnapshots(const Snapshot& value) { m_snapshots.push_back(value); return *this; }
    inline DescribeSnapshotsResult& AddSnapshots(Snapshot&& value) { m_snapshots.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSnapshotsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSnapshotsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSnapshotsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Snapshot> m_snapshots;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
