﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class GetTransitGatewayRegistrationsRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API GetTransitGatewayRegistrationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTransitGatewayRegistrations"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

    AWS_NETWORKMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }
    inline GetTransitGatewayRegistrationsRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}
    inline GetTransitGatewayRegistrationsRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}
    inline GetTransitGatewayRegistrationsRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of one or more transit gateways. The maximum
     * is 10.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTransitGatewayArns() const{ return m_transitGatewayArns; }
    inline bool TransitGatewayArnsHasBeenSet() const { return m_transitGatewayArnsHasBeenSet; }
    inline void SetTransitGatewayArns(const Aws::Vector<Aws::String>& value) { m_transitGatewayArnsHasBeenSet = true; m_transitGatewayArns = value; }
    inline void SetTransitGatewayArns(Aws::Vector<Aws::String>&& value) { m_transitGatewayArnsHasBeenSet = true; m_transitGatewayArns = std::move(value); }
    inline GetTransitGatewayRegistrationsRequest& WithTransitGatewayArns(const Aws::Vector<Aws::String>& value) { SetTransitGatewayArns(value); return *this;}
    inline GetTransitGatewayRegistrationsRequest& WithTransitGatewayArns(Aws::Vector<Aws::String>&& value) { SetTransitGatewayArns(std::move(value)); return *this;}
    inline GetTransitGatewayRegistrationsRequest& AddTransitGatewayArns(const Aws::String& value) { m_transitGatewayArnsHasBeenSet = true; m_transitGatewayArns.push_back(value); return *this; }
    inline GetTransitGatewayRegistrationsRequest& AddTransitGatewayArns(Aws::String&& value) { m_transitGatewayArnsHasBeenSet = true; m_transitGatewayArns.push_back(std::move(value)); return *this; }
    inline GetTransitGatewayRegistrationsRequest& AddTransitGatewayArns(const char* value) { m_transitGatewayArnsHasBeenSet = true; m_transitGatewayArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetTransitGatewayRegistrationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetTransitGatewayRegistrationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetTransitGatewayRegistrationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetTransitGatewayRegistrationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_transitGatewayArns;
    bool m_transitGatewayArnsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
