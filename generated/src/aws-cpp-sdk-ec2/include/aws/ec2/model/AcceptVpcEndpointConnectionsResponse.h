﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/UnsuccessfulItem.h>
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
  class AcceptVpcEndpointConnectionsResponse
  {
  public:
    AWS_EC2_API AcceptVpcEndpointConnectionsResponse();
    AWS_EC2_API AcceptVpcEndpointConnectionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AcceptVpcEndpointConnectionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the interface endpoints that were not accepted, if
     * applicable.</p>
     */
    inline const Aws::Vector<UnsuccessfulItem>& GetUnsuccessful() const{ return m_unsuccessful; }
    inline void SetUnsuccessful(const Aws::Vector<UnsuccessfulItem>& value) { m_unsuccessful = value; }
    inline void SetUnsuccessful(Aws::Vector<UnsuccessfulItem>&& value) { m_unsuccessful = std::move(value); }
    inline AcceptVpcEndpointConnectionsResponse& WithUnsuccessful(const Aws::Vector<UnsuccessfulItem>& value) { SetUnsuccessful(value); return *this;}
    inline AcceptVpcEndpointConnectionsResponse& WithUnsuccessful(Aws::Vector<UnsuccessfulItem>&& value) { SetUnsuccessful(std::move(value)); return *this;}
    inline AcceptVpcEndpointConnectionsResponse& AddUnsuccessful(const UnsuccessfulItem& value) { m_unsuccessful.push_back(value); return *this; }
    inline AcceptVpcEndpointConnectionsResponse& AddUnsuccessful(UnsuccessfulItem&& value) { m_unsuccessful.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline AcceptVpcEndpointConnectionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline AcceptVpcEndpointConnectionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UnsuccessfulItem> m_unsuccessful;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
