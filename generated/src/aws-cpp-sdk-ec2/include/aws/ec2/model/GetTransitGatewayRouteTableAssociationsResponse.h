﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayRouteTableAssociation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class GetTransitGatewayRouteTableAssociationsResponse
  {
  public:
    AWS_EC2_API GetTransitGatewayRouteTableAssociationsResponse();
    AWS_EC2_API GetTransitGatewayRouteTableAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetTransitGatewayRouteTableAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the associations.</p>
     */
    inline const Aws::Vector<TransitGatewayRouteTableAssociation>& GetAssociations() const{ return m_associations; }
    inline void SetAssociations(const Aws::Vector<TransitGatewayRouteTableAssociation>& value) { m_associations = value; }
    inline void SetAssociations(Aws::Vector<TransitGatewayRouteTableAssociation>&& value) { m_associations = std::move(value); }
    inline GetTransitGatewayRouteTableAssociationsResponse& WithAssociations(const Aws::Vector<TransitGatewayRouteTableAssociation>& value) { SetAssociations(value); return *this;}
    inline GetTransitGatewayRouteTableAssociationsResponse& WithAssociations(Aws::Vector<TransitGatewayRouteTableAssociation>&& value) { SetAssociations(std::move(value)); return *this;}
    inline GetTransitGatewayRouteTableAssociationsResponse& AddAssociations(const TransitGatewayRouteTableAssociation& value) { m_associations.push_back(value); return *this; }
    inline GetTransitGatewayRouteTableAssociationsResponse& AddAssociations(TransitGatewayRouteTableAssociation&& value) { m_associations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetTransitGatewayRouteTableAssociationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetTransitGatewayRouteTableAssociationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetTransitGatewayRouteTableAssociationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetTransitGatewayRouteTableAssociationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetTransitGatewayRouteTableAssociationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransitGatewayRouteTableAssociation> m_associations;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
