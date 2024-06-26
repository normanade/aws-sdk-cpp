﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FpgaImageAttribute.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class DescribeFpgaImageAttributeResponse
  {
  public:
    AWS_EC2_API DescribeFpgaImageAttributeResponse();
    AWS_EC2_API DescribeFpgaImageAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeFpgaImageAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the attribute.</p>
     */
    inline const FpgaImageAttribute& GetFpgaImageAttribute() const{ return m_fpgaImageAttribute; }
    inline void SetFpgaImageAttribute(const FpgaImageAttribute& value) { m_fpgaImageAttribute = value; }
    inline void SetFpgaImageAttribute(FpgaImageAttribute&& value) { m_fpgaImageAttribute = std::move(value); }
    inline DescribeFpgaImageAttributeResponse& WithFpgaImageAttribute(const FpgaImageAttribute& value) { SetFpgaImageAttribute(value); return *this;}
    inline DescribeFpgaImageAttributeResponse& WithFpgaImageAttribute(FpgaImageAttribute&& value) { SetFpgaImageAttribute(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeFpgaImageAttributeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeFpgaImageAttributeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    FpgaImageAttribute m_fpgaImageAttribute;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
