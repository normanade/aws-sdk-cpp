﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/DiscoveryResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/datasync/model/DiscoveryResourceFilter.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class DescribeStorageSystemResourcesRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API DescribeStorageSystemResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStorageSystemResources"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that's
     * collecting data from your on-premises storage system.</p>
     */
    inline const Aws::String& GetDiscoveryJobArn() const{ return m_discoveryJobArn; }
    inline bool DiscoveryJobArnHasBeenSet() const { return m_discoveryJobArnHasBeenSet; }
    inline void SetDiscoveryJobArn(const Aws::String& value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn = value; }
    inline void SetDiscoveryJobArn(Aws::String&& value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn = std::move(value); }
    inline void SetDiscoveryJobArn(const char* value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn.assign(value); }
    inline DescribeStorageSystemResourcesRequest& WithDiscoveryJobArn(const Aws::String& value) { SetDiscoveryJobArn(value); return *this;}
    inline DescribeStorageSystemResourcesRequest& WithDiscoveryJobArn(Aws::String&& value) { SetDiscoveryJobArn(std::move(value)); return *this;}
    inline DescribeStorageSystemResourcesRequest& WithDiscoveryJobArn(const char* value) { SetDiscoveryJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies what kind of storage system resources that you want information
     * about.</p>
     */
    inline const DiscoveryResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const DiscoveryResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(DiscoveryResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline DescribeStorageSystemResourcesRequest& WithResourceType(const DiscoveryResourceType& value) { SetResourceType(value); return *this;}
    inline DescribeStorageSystemResourcesRequest& WithResourceType(DiscoveryResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the universally unique identifiers (UUIDs) of the storage system
     * resources that you want information about. You can't use this parameter in
     * combination with the <code>Filter</code> parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }
    inline DescribeStorageSystemResourcesRequest& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}
    inline DescribeStorageSystemResourcesRequest& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}
    inline DescribeStorageSystemResourcesRequest& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }
    inline DescribeStorageSystemResourcesRequest& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }
    inline DescribeStorageSystemResourcesRequest& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the storage system resources that you want returned. For example,
     * this might be volumes associated with a specific storage virtual machine
     * (SVM).</p>
     */
    inline const Aws::Map<DiscoveryResourceFilter, Aws::Vector<Aws::String>>& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const Aws::Map<DiscoveryResourceFilter, Aws::Vector<Aws::String>>& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(Aws::Map<DiscoveryResourceFilter, Aws::Vector<Aws::String>>&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline DescribeStorageSystemResourcesRequest& WithFilter(const Aws::Map<DiscoveryResourceFilter, Aws::Vector<Aws::String>>& value) { SetFilter(value); return *this;}
    inline DescribeStorageSystemResourcesRequest& WithFilter(Aws::Map<DiscoveryResourceFilter, Aws::Vector<Aws::String>>&& value) { SetFilter(std::move(value)); return *this;}
    inline DescribeStorageSystemResourcesRequest& AddFilter(const DiscoveryResourceFilter& key, const Aws::Vector<Aws::String>& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }
    inline DescribeStorageSystemResourcesRequest& AddFilter(DiscoveryResourceFilter&& key, const Aws::Vector<Aws::String>& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), value); return *this; }
    inline DescribeStorageSystemResourcesRequest& AddFilter(const DiscoveryResourceFilter& key, Aws::Vector<Aws::String>&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }
    inline DescribeStorageSystemResourcesRequest& AddFilter(DiscoveryResourceFilter&& key, Aws::Vector<Aws::String>&& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of storage system resources that you want to
     * list in a response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeStorageSystemResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeStorageSystemResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeStorageSystemResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeStorageSystemResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_discoveryJobArn;
    bool m_discoveryJobArnHasBeenSet = false;

    DiscoveryResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    Aws::Map<DiscoveryResourceFilter, Aws::Vector<Aws::String>> m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
