﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PurchaseHostReservationResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

PurchaseHostReservationResponse::PurchaseHostReservationResponse() : 
    m_currencyCode(CurrencyCodeValues::NOT_SET)
{
}

PurchaseHostReservationResponse::PurchaseHostReservationResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : PurchaseHostReservationResponse()
{
  *this = result;
}

PurchaseHostReservationResponse& PurchaseHostReservationResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "PurchaseHostReservationResponse"))
  {
    resultNode = rootNode.FirstChild("PurchaseHostReservationResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode clientTokenNode = resultNode.FirstChild("clientToken");
    if(!clientTokenNode.IsNull())
    {
      m_clientToken = Aws::Utils::Xml::DecodeEscapedXmlText(clientTokenNode.GetText());
    }
    XmlNode currencyCodeNode = resultNode.FirstChild("currencyCode");
    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = CurrencyCodeValuesMapper::GetCurrencyCodeValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(currencyCodeNode.GetText()).c_str()).c_str());
    }
    XmlNode purchaseNode = resultNode.FirstChild("purchase");
    if(!purchaseNode.IsNull())
    {
      XmlNode purchaseMember = purchaseNode.FirstChild("item");
      while(!purchaseMember.IsNull())
      {
        m_purchase.push_back(purchaseMember);
        purchaseMember = purchaseMember.NextNode("item");
      }

    }
    XmlNode totalHourlyPriceNode = resultNode.FirstChild("totalHourlyPrice");
    if(!totalHourlyPriceNode.IsNull())
    {
      m_totalHourlyPrice = Aws::Utils::Xml::DecodeEscapedXmlText(totalHourlyPriceNode.GetText());
    }
    XmlNode totalUpfrontPriceNode = resultNode.FirstChild("totalUpfrontPrice");
    if(!totalUpfrontPriceNode.IsNull())
    {
      m_totalUpfrontPrice = Aws::Utils::Xml::DecodeEscapedXmlText(totalUpfrontPriceNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::PurchaseHostReservationResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
