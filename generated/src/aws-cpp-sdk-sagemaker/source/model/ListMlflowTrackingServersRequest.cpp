﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListMlflowTrackingServersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListMlflowTrackingServersRequest::ListMlflowTrackingServersRequest() : 
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_trackingServerStatus(TrackingServerStatus::NOT_SET),
    m_trackingServerStatusHasBeenSet(false),
    m_mlflowVersionHasBeenSet(false),
    m_sortBy(SortTrackingServerBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListMlflowTrackingServersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_createdAfterHasBeenSet)
  {
   payload.WithDouble("CreatedAfter", m_createdAfter.SecondsWithMSPrecision());
  }

  if(m_createdBeforeHasBeenSet)
  {
   payload.WithDouble("CreatedBefore", m_createdBefore.SecondsWithMSPrecision());
  }

  if(m_trackingServerStatusHasBeenSet)
  {
   payload.WithString("TrackingServerStatus", TrackingServerStatusMapper::GetNameForTrackingServerStatus(m_trackingServerStatus));
  }

  if(m_mlflowVersionHasBeenSet)
  {
   payload.WithString("MlflowVersion", m_mlflowVersion);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", SortTrackingServerByMapper::GetNameForSortTrackingServerBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListMlflowTrackingServersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListMlflowTrackingServers"));
  return headers;

}




