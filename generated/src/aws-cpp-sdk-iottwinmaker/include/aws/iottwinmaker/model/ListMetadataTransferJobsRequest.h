﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/iottwinmaker/model/SourceType.h>
#include <aws/iottwinmaker/model/DestinationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/ListMetadataTransferJobsFilter.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class ListMetadataTransferJobsRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API ListMetadataTransferJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMetadataTransferJobs"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The metadata transfer job's source type.</p>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline ListMetadataTransferJobsRequest& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}
    inline ListMetadataTransferJobsRequest& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job's destination type.</p>
     */
    inline const DestinationType& GetDestinationType() const{ return m_destinationType; }
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }
    inline void SetDestinationType(const DestinationType& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }
    inline void SetDestinationType(DestinationType&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }
    inline ListMetadataTransferJobsRequest& WithDestinationType(const DestinationType& value) { SetDestinationType(value); return *this;}
    inline ListMetadataTransferJobsRequest& WithDestinationType(DestinationType&& value) { SetDestinationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that filters metadata transfer jobs.</p>
     */
    inline const Aws::Vector<ListMetadataTransferJobsFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<ListMetadataTransferJobsFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<ListMetadataTransferJobsFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListMetadataTransferJobsRequest& WithFilters(const Aws::Vector<ListMetadataTransferJobsFilter>& value) { SetFilters(value); return *this;}
    inline ListMetadataTransferJobsRequest& WithFilters(Aws::Vector<ListMetadataTransferJobsFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListMetadataTransferJobsRequest& AddFilters(const ListMetadataTransferJobsFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline ListMetadataTransferJobsRequest& AddFilters(ListMetadataTransferJobsFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListMetadataTransferJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMetadataTransferJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMetadataTransferJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMetadataTransferJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    SourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    DestinationType m_destinationType;
    bool m_destinationTypeHasBeenSet = false;

    Aws::Vector<ListMetadataTransferJobsFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
