﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the response to a
   * <code>GetHostedZoneCount</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHostedZoneCountResponse">AWS
   * API Reference</a></p>
   */
  class GetHostedZoneCountResult
  {
  public:
    AWS_ROUTE53_API GetHostedZoneCountResult();
    AWS_ROUTE53_API GetHostedZoneCountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetHostedZoneCountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The total number of public and private hosted zones that are associated with
     * the current Amazon Web Services account.</p>
     */
    inline long long GetHostedZoneCount() const{ return m_hostedZoneCount; }
    inline void SetHostedZoneCount(long long value) { m_hostedZoneCount = value; }
    inline GetHostedZoneCountResult& WithHostedZoneCount(long long value) { SetHostedZoneCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetHostedZoneCountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetHostedZoneCountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetHostedZoneCountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    long long m_hostedZoneCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
