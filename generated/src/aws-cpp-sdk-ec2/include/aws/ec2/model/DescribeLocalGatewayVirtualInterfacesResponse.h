﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/LocalGatewayVirtualInterface.h>
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
  class DescribeLocalGatewayVirtualInterfacesResponse
  {
  public:
    AWS_EC2_API DescribeLocalGatewayVirtualInterfacesResponse();
    AWS_EC2_API DescribeLocalGatewayVirtualInterfacesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeLocalGatewayVirtualInterfacesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the virtual interfaces.</p>
     */
    inline const Aws::Vector<LocalGatewayVirtualInterface>& GetLocalGatewayVirtualInterfaces() const{ return m_localGatewayVirtualInterfaces; }
    inline void SetLocalGatewayVirtualInterfaces(const Aws::Vector<LocalGatewayVirtualInterface>& value) { m_localGatewayVirtualInterfaces = value; }
    inline void SetLocalGatewayVirtualInterfaces(Aws::Vector<LocalGatewayVirtualInterface>&& value) { m_localGatewayVirtualInterfaces = std::move(value); }
    inline DescribeLocalGatewayVirtualInterfacesResponse& WithLocalGatewayVirtualInterfaces(const Aws::Vector<LocalGatewayVirtualInterface>& value) { SetLocalGatewayVirtualInterfaces(value); return *this;}
    inline DescribeLocalGatewayVirtualInterfacesResponse& WithLocalGatewayVirtualInterfaces(Aws::Vector<LocalGatewayVirtualInterface>&& value) { SetLocalGatewayVirtualInterfaces(std::move(value)); return *this;}
    inline DescribeLocalGatewayVirtualInterfacesResponse& AddLocalGatewayVirtualInterfaces(const LocalGatewayVirtualInterface& value) { m_localGatewayVirtualInterfaces.push_back(value); return *this; }
    inline DescribeLocalGatewayVirtualInterfacesResponse& AddLocalGatewayVirtualInterfaces(LocalGatewayVirtualInterface&& value) { m_localGatewayVirtualInterfaces.push_back(std::move(value)); return *this; }
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
    inline DescribeLocalGatewayVirtualInterfacesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeLocalGatewayVirtualInterfacesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeLocalGatewayVirtualInterfacesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeLocalGatewayVirtualInterfacesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeLocalGatewayVirtualInterfacesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LocalGatewayVirtualInterface> m_localGatewayVirtualInterfaces;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
