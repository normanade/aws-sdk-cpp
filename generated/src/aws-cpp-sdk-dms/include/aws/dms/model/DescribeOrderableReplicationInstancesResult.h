﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/OrderableReplicationInstance.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeOrderableReplicationInstancesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeOrderableReplicationInstancesResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeOrderableReplicationInstancesResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeOrderableReplicationInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeOrderableReplicationInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The order-able replication instances available.</p>
     */
    inline const Aws::Vector<OrderableReplicationInstance>& GetOrderableReplicationInstances() const{ return m_orderableReplicationInstances; }
    inline void SetOrderableReplicationInstances(const Aws::Vector<OrderableReplicationInstance>& value) { m_orderableReplicationInstances = value; }
    inline void SetOrderableReplicationInstances(Aws::Vector<OrderableReplicationInstance>&& value) { m_orderableReplicationInstances = std::move(value); }
    inline DescribeOrderableReplicationInstancesResult& WithOrderableReplicationInstances(const Aws::Vector<OrderableReplicationInstance>& value) { SetOrderableReplicationInstances(value); return *this;}
    inline DescribeOrderableReplicationInstancesResult& WithOrderableReplicationInstances(Aws::Vector<OrderableReplicationInstance>&& value) { SetOrderableReplicationInstances(std::move(value)); return *this;}
    inline DescribeOrderableReplicationInstancesResult& AddOrderableReplicationInstances(const OrderableReplicationInstance& value) { m_orderableReplicationInstances.push_back(value); return *this; }
    inline DescribeOrderableReplicationInstancesResult& AddOrderableReplicationInstances(OrderableReplicationInstance&& value) { m_orderableReplicationInstances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeOrderableReplicationInstancesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeOrderableReplicationInstancesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeOrderableReplicationInstancesResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeOrderableReplicationInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeOrderableReplicationInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeOrderableReplicationInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<OrderableReplicationInstance> m_orderableReplicationInstances;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
