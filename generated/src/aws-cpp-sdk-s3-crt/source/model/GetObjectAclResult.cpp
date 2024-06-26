﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/GetObjectAclResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Crt::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetObjectAclResult::GetObjectAclResult() : 
    m_requestCharged(RequestCharged::NOT_SET)
{
}

GetObjectAclResult::GetObjectAclResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : GetObjectAclResult()
{
  *this = result;
}

GetObjectAclResult& GetObjectAclResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode ownerNode = resultNode.FirstChild("Owner");
    if(!ownerNode.IsNull())
    {
      m_owner = ownerNode;
    }
    XmlNode grantsNode = resultNode.FirstChild("AccessControlList");
    if(!grantsNode.IsNull())
    {
      XmlNode grantsMember = grantsNode.FirstChild("Grant");
      while(!grantsMember.IsNull())
      {
        m_grants.push_back(grantsMember);
        grantsMember = grantsMember.NextNode("Grant");
      }

    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestChargedIter = headers.find("x-amz-request-charged");
  if(requestChargedIter != headers.end())
  {
    m_requestCharged = RequestChargedMapper::GetRequestChargedForName(requestChargedIter->second);
  }

  const auto& requestIdIter = headers.find("x-amz-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

  return *this;
}
