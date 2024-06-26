﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/ContactChannel.h>
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
namespace SSMContacts
{
namespace Model
{
  class ListContactChannelsResult
  {
  public:
    AWS_SSMCONTACTS_API ListContactChannelsResult();
    AWS_SSMCONTACTS_API ListContactChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListContactChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListContactChannelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListContactChannelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListContactChannelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of contact channels related to the specified contact.</p>
     */
    inline const Aws::Vector<ContactChannel>& GetContactChannels() const{ return m_contactChannels; }
    inline void SetContactChannels(const Aws::Vector<ContactChannel>& value) { m_contactChannels = value; }
    inline void SetContactChannels(Aws::Vector<ContactChannel>&& value) { m_contactChannels = std::move(value); }
    inline ListContactChannelsResult& WithContactChannels(const Aws::Vector<ContactChannel>& value) { SetContactChannels(value); return *this;}
    inline ListContactChannelsResult& WithContactChannels(Aws::Vector<ContactChannel>&& value) { SetContactChannels(std::move(value)); return *this;}
    inline ListContactChannelsResult& AddContactChannels(const ContactChannel& value) { m_contactChannels.push_back(value); return *this; }
    inline ListContactChannelsResult& AddContactChannels(ContactChannel&& value) { m_contactChannels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListContactChannelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListContactChannelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListContactChannelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ContactChannel> m_contactChannels;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
