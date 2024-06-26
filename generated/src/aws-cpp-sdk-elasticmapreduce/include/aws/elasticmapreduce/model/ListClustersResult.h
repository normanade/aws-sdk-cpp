﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ClusterSummary.h>
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
namespace EMR
{
namespace Model
{
  /**
   * <p>This contains a ClusterSummaryList with the cluster details; for example, the
   * cluster IDs, names, and status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListClustersOutput">AWS
   * API Reference</a></p>
   */
  class ListClustersResult
  {
  public:
    AWS_EMR_API ListClustersResult();
    AWS_EMR_API ListClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of clusters for the account based on the given filters.</p>
     */
    inline const Aws::Vector<ClusterSummary>& GetClusters() const{ return m_clusters; }
    inline void SetClusters(const Aws::Vector<ClusterSummary>& value) { m_clusters = value; }
    inline void SetClusters(Aws::Vector<ClusterSummary>&& value) { m_clusters = std::move(value); }
    inline ListClustersResult& WithClusters(const Aws::Vector<ClusterSummary>& value) { SetClusters(value); return *this;}
    inline ListClustersResult& WithClusters(Aws::Vector<ClusterSummary>&& value) { SetClusters(std::move(value)); return *this;}
    inline ListClustersResult& AddClusters(const ClusterSummary& value) { m_clusters.push_back(value); return *this; }
    inline ListClustersResult& AddClusters(ClusterSummary&& value) { m_clusters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline ListClustersResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListClustersResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListClustersResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListClustersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListClustersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListClustersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ClusterSummary> m_clusters;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
