﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/ListBucketIntelligentTieringConfigurationsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Crt::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListBucketIntelligentTieringConfigurationsResult::ListBucketIntelligentTieringConfigurationsResult() : 
    m_isTruncated(false)
{
}

ListBucketIntelligentTieringConfigurationsResult::ListBucketIntelligentTieringConfigurationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : ListBucketIntelligentTieringConfigurationsResult()
{
  *this = result;
}

ListBucketIntelligentTieringConfigurationsResult& ListBucketIntelligentTieringConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
    }
    XmlNode continuationTokenNode = resultNode.FirstChild("ContinuationToken");
    if(!continuationTokenNode.IsNull())
    {
      m_continuationToken = Aws::Utils::Xml::DecodeEscapedXmlText(continuationTokenNode.GetText());
    }
    XmlNode nextContinuationTokenNode = resultNode.FirstChild("NextContinuationToken");
    if(!nextContinuationTokenNode.IsNull())
    {
      m_nextContinuationToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextContinuationTokenNode.GetText());
    }
    XmlNode intelligentTieringConfigurationListNode = resultNode.FirstChild("IntelligentTieringConfiguration");
    if(!intelligentTieringConfigurationListNode.IsNull())
    {
      XmlNode intelligentTieringConfigurationMember = intelligentTieringConfigurationListNode;
      while(!intelligentTieringConfigurationMember.IsNull())
      {
        m_intelligentTieringConfigurationList.push_back(intelligentTieringConfigurationMember);
        intelligentTieringConfigurationMember = intelligentTieringConfigurationMember.NextNode("IntelligentTieringConfiguration");
      }

    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amz-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

  return *this;
}
