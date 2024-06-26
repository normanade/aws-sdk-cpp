﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/EnvironmentAccountConnectionRequesterAccountType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/EnvironmentAccountConnectionStatus.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class ListEnvironmentAccountConnectionsRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API ListEnvironmentAccountConnectionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEnvironmentAccountConnections"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The environment name that's associated with each listed environment account
     * connection.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline ListEnvironmentAccountConnectionsRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline ListEnvironmentAccountConnectionsRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline ListEnvironmentAccountConnectionsRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of environment account connections to list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEnvironmentAccountConnectionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates the location of the next environment account
     * connection in the array of environment account connections, after the list of
     * environment account connections that was previously requested.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListEnvironmentAccountConnectionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEnvironmentAccountConnectionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEnvironmentAccountConnectionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of account making the <code>ListEnvironmentAccountConnections</code>
     * request.</p>
     */
    inline const EnvironmentAccountConnectionRequesterAccountType& GetRequestedBy() const{ return m_requestedBy; }
    inline bool RequestedByHasBeenSet() const { return m_requestedByHasBeenSet; }
    inline void SetRequestedBy(const EnvironmentAccountConnectionRequesterAccountType& value) { m_requestedByHasBeenSet = true; m_requestedBy = value; }
    inline void SetRequestedBy(EnvironmentAccountConnectionRequesterAccountType&& value) { m_requestedByHasBeenSet = true; m_requestedBy = std::move(value); }
    inline ListEnvironmentAccountConnectionsRequest& WithRequestedBy(const EnvironmentAccountConnectionRequesterAccountType& value) { SetRequestedBy(value); return *this;}
    inline ListEnvironmentAccountConnectionsRequest& WithRequestedBy(EnvironmentAccountConnectionRequesterAccountType&& value) { SetRequestedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status details for each listed environment account connection.</p>
     */
    inline const Aws::Vector<EnvironmentAccountConnectionStatus>& GetStatuses() const{ return m_statuses; }
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
    inline void SetStatuses(const Aws::Vector<EnvironmentAccountConnectionStatus>& value) { m_statusesHasBeenSet = true; m_statuses = value; }
    inline void SetStatuses(Aws::Vector<EnvironmentAccountConnectionStatus>&& value) { m_statusesHasBeenSet = true; m_statuses = std::move(value); }
    inline ListEnvironmentAccountConnectionsRequest& WithStatuses(const Aws::Vector<EnvironmentAccountConnectionStatus>& value) { SetStatuses(value); return *this;}
    inline ListEnvironmentAccountConnectionsRequest& WithStatuses(Aws::Vector<EnvironmentAccountConnectionStatus>&& value) { SetStatuses(std::move(value)); return *this;}
    inline ListEnvironmentAccountConnectionsRequest& AddStatuses(const EnvironmentAccountConnectionStatus& value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }
    inline ListEnvironmentAccountConnectionsRequest& AddStatuses(EnvironmentAccountConnectionStatus&& value) { m_statusesHasBeenSet = true; m_statuses.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    EnvironmentAccountConnectionRequesterAccountType m_requestedBy;
    bool m_requestedByHasBeenSet = false;

    Aws::Vector<EnvironmentAccountConnectionStatus> m_statuses;
    bool m_statusesHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
