﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/DedicatedIp.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>Information about the dedicated IP addresses that are associated with your
   * Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDedicatedIpsResponse">AWS
   * API Reference</a></p>
   */
  class GetDedicatedIpsResult
  {
  public:
    AWS_PINPOINTEMAIL_API GetDedicatedIpsResult();
    AWS_PINPOINTEMAIL_API GetDedicatedIpsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API GetDedicatedIpsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of dedicated IP addresses that are reserved for use by your Amazon
     * Pinpoint account.</p>
     */
    inline const Aws::Vector<DedicatedIp>& GetDedicatedIps() const{ return m_dedicatedIps; }
    inline void SetDedicatedIps(const Aws::Vector<DedicatedIp>& value) { m_dedicatedIps = value; }
    inline void SetDedicatedIps(Aws::Vector<DedicatedIp>&& value) { m_dedicatedIps = std::move(value); }
    inline GetDedicatedIpsResult& WithDedicatedIps(const Aws::Vector<DedicatedIp>& value) { SetDedicatedIps(value); return *this;}
    inline GetDedicatedIpsResult& WithDedicatedIps(Aws::Vector<DedicatedIp>&& value) { SetDedicatedIps(std::move(value)); return *this;}
    inline GetDedicatedIpsResult& AddDedicatedIps(const DedicatedIp& value) { m_dedicatedIps.push_back(value); return *this; }
    inline GetDedicatedIpsResult& AddDedicatedIps(DedicatedIp&& value) { m_dedicatedIps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there are additional dedicated IP addresses to
     * list. To view additional addresses, issue another request to
     * <code>GetDedicatedIps</code>, passing this token in the <code>NextToken</code>
     * parameter.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetDedicatedIpsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetDedicatedIpsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetDedicatedIpsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDedicatedIpsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDedicatedIpsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDedicatedIpsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DedicatedIp> m_dedicatedIps;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
