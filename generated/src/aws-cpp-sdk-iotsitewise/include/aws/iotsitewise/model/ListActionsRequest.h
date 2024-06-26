﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/model/TargetResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class ListActionsRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListActionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListActions"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline const TargetResourceType& GetTargetResourceType() const{ return m_targetResourceType; }
    inline bool TargetResourceTypeHasBeenSet() const { return m_targetResourceTypeHasBeenSet; }
    inline void SetTargetResourceType(const TargetResourceType& value) { m_targetResourceTypeHasBeenSet = true; m_targetResourceType = value; }
    inline void SetTargetResourceType(TargetResourceType&& value) { m_targetResourceTypeHasBeenSet = true; m_targetResourceType = std::move(value); }
    inline ListActionsRequest& WithTargetResourceType(const TargetResourceType& value) { SetTargetResourceType(value); return *this;}
    inline ListActionsRequest& WithTargetResourceType(TargetResourceType&& value) { SetTargetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the target resource.</p>
     */
    inline const Aws::String& GetTargetResourceId() const{ return m_targetResourceId; }
    inline bool TargetResourceIdHasBeenSet() const { return m_targetResourceIdHasBeenSet; }
    inline void SetTargetResourceId(const Aws::String& value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId = value; }
    inline void SetTargetResourceId(Aws::String&& value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId = std::move(value); }
    inline void SetTargetResourceId(const char* value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId.assign(value); }
    inline ListActionsRequest& WithTargetResourceId(const Aws::String& value) { SetTargetResourceId(value); return *this;}
    inline ListActionsRequest& WithTargetResourceId(Aws::String&& value) { SetTargetResourceId(std::move(value)); return *this;}
    inline ListActionsRequest& WithTargetResourceId(const char* value) { SetTargetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListActionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListActionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListActionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListActionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    TargetResourceType m_targetResourceType;
    bool m_targetResourceTypeHasBeenSet = false;

    Aws::String m_targetResourceId;
    bool m_targetResourceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
