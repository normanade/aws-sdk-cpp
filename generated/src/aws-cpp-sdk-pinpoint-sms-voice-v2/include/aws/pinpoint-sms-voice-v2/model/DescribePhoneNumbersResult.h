﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/PhoneNumberInformation.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class DescribePhoneNumbersResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribePhoneNumbersResult();
    AWS_PINPOINTSMSVOICEV2_API DescribePhoneNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribePhoneNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of PhoneNumberInformation objects that contain the details for the
     * requested phone numbers.</p>
     */
    inline const Aws::Vector<PhoneNumberInformation>& GetPhoneNumbers() const{ return m_phoneNumbers; }
    inline void SetPhoneNumbers(const Aws::Vector<PhoneNumberInformation>& value) { m_phoneNumbers = value; }
    inline void SetPhoneNumbers(Aws::Vector<PhoneNumberInformation>&& value) { m_phoneNumbers = std::move(value); }
    inline DescribePhoneNumbersResult& WithPhoneNumbers(const Aws::Vector<PhoneNumberInformation>& value) { SetPhoneNumbers(value); return *this;}
    inline DescribePhoneNumbersResult& WithPhoneNumbers(Aws::Vector<PhoneNumberInformation>&& value) { SetPhoneNumbers(std::move(value)); return *this;}
    inline DescribePhoneNumbersResult& AddPhoneNumbers(const PhoneNumberInformation& value) { m_phoneNumbers.push_back(value); return *this; }
    inline DescribePhoneNumbersResult& AddPhoneNumbers(PhoneNumberInformation&& value) { m_phoneNumbers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribePhoneNumbersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribePhoneNumbersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribePhoneNumbersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePhoneNumbersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePhoneNumbersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePhoneNumbersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PhoneNumberInformation> m_phoneNumbers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
