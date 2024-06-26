﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/LaunchTemplateVersion.h>
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
  class DescribeLaunchTemplateVersionsResponse
  {
  public:
    AWS_EC2_API DescribeLaunchTemplateVersionsResponse();
    AWS_EC2_API DescribeLaunchTemplateVersionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeLaunchTemplateVersionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the launch template versions.</p>
     */
    inline const Aws::Vector<LaunchTemplateVersion>& GetLaunchTemplateVersions() const{ return m_launchTemplateVersions; }
    inline void SetLaunchTemplateVersions(const Aws::Vector<LaunchTemplateVersion>& value) { m_launchTemplateVersions = value; }
    inline void SetLaunchTemplateVersions(Aws::Vector<LaunchTemplateVersion>&& value) { m_launchTemplateVersions = std::move(value); }
    inline DescribeLaunchTemplateVersionsResponse& WithLaunchTemplateVersions(const Aws::Vector<LaunchTemplateVersion>& value) { SetLaunchTemplateVersions(value); return *this;}
    inline DescribeLaunchTemplateVersionsResponse& WithLaunchTemplateVersions(Aws::Vector<LaunchTemplateVersion>&& value) { SetLaunchTemplateVersions(std::move(value)); return *this;}
    inline DescribeLaunchTemplateVersionsResponse& AddLaunchTemplateVersions(const LaunchTemplateVersion& value) { m_launchTemplateVersions.push_back(value); return *this; }
    inline DescribeLaunchTemplateVersionsResponse& AddLaunchTemplateVersions(LaunchTemplateVersion&& value) { m_launchTemplateVersions.push_back(std::move(value)); return *this; }
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
    inline DescribeLaunchTemplateVersionsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeLaunchTemplateVersionsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeLaunchTemplateVersionsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeLaunchTemplateVersionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeLaunchTemplateVersionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LaunchTemplateVersion> m_launchTemplateVersions;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
