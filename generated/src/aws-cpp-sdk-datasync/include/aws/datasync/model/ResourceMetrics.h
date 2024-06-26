﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datasync/model/P95Metrics.h>
#include <aws/datasync/model/Capacity.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/DiscoveryResourceType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{

  /**
   * <p>Information, including performance data and capacity usage, provided by
   * DataSync Discovery about a resource in your on-premises storage
   * system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ResourceMetrics">AWS
   * API Reference</a></p>
   */
  class ResourceMetrics
  {
  public:
    AWS_DATASYNC_API ResourceMetrics();
    AWS_DATASYNC_API ResourceMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API ResourceMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when DataSync Discovery collected this information from the
     * resource.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline ResourceMetrics& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline ResourceMetrics& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of performance data that DataSync Discovery collects about the
     * on-premises storage system resource.</p>
     */
    inline const P95Metrics& GetP95Metrics() const{ return m_p95Metrics; }
    inline bool P95MetricsHasBeenSet() const { return m_p95MetricsHasBeenSet; }
    inline void SetP95Metrics(const P95Metrics& value) { m_p95MetricsHasBeenSet = true; m_p95Metrics = value; }
    inline void SetP95Metrics(P95Metrics&& value) { m_p95MetricsHasBeenSet = true; m_p95Metrics = std::move(value); }
    inline ResourceMetrics& WithP95Metrics(const P95Metrics& value) { SetP95Metrics(value); return *this;}
    inline ResourceMetrics& WithP95Metrics(P95Metrics&& value) { SetP95Metrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage capacity of the on-premises storage system resource.</p>
     */
    inline const Capacity& GetCapacity() const{ return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(const Capacity& value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline void SetCapacity(Capacity&& value) { m_capacityHasBeenSet = true; m_capacity = std::move(value); }
    inline ResourceMetrics& WithCapacity(const Capacity& value) { SetCapacity(value); return *this;}
    inline ResourceMetrics& WithCapacity(Capacity&& value) { SetCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The universally unique identifier (UUID) of the on-premises storage system
     * resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ResourceMetrics& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ResourceMetrics& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ResourceMetrics& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of on-premises storage system resource.</p>
     */
    inline const DiscoveryResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const DiscoveryResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(DiscoveryResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ResourceMetrics& WithResourceType(const DiscoveryResourceType& value) { SetResourceType(value); return *this;}
    inline ResourceMetrics& WithResourceType(DiscoveryResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    P95Metrics m_p95Metrics;
    bool m_p95MetricsHasBeenSet = false;

    Capacity m_capacity;
    bool m_capacityHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    DiscoveryResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
