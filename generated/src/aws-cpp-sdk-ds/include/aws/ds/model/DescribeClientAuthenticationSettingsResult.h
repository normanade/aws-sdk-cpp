﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/ClientAuthenticationSettingInfo.h>
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
namespace DirectoryService
{
namespace Model
{
  class DescribeClientAuthenticationSettingsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeClientAuthenticationSettingsResult();
    AWS_DIRECTORYSERVICE_API DescribeClientAuthenticationSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeClientAuthenticationSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the type of client authentication for the specified
     * directory. The following information is retrieved: The date and time when the
     * status of the client authentication type was last updated, whether the client
     * authentication type is enabled or disabled, and the type of client
     * authentication.</p>
     */
    inline const Aws::Vector<ClientAuthenticationSettingInfo>& GetClientAuthenticationSettingsInfo() const{ return m_clientAuthenticationSettingsInfo; }
    inline void SetClientAuthenticationSettingsInfo(const Aws::Vector<ClientAuthenticationSettingInfo>& value) { m_clientAuthenticationSettingsInfo = value; }
    inline void SetClientAuthenticationSettingsInfo(Aws::Vector<ClientAuthenticationSettingInfo>&& value) { m_clientAuthenticationSettingsInfo = std::move(value); }
    inline DescribeClientAuthenticationSettingsResult& WithClientAuthenticationSettingsInfo(const Aws::Vector<ClientAuthenticationSettingInfo>& value) { SetClientAuthenticationSettingsInfo(value); return *this;}
    inline DescribeClientAuthenticationSettingsResult& WithClientAuthenticationSettingsInfo(Aws::Vector<ClientAuthenticationSettingInfo>&& value) { SetClientAuthenticationSettingsInfo(std::move(value)); return *this;}
    inline DescribeClientAuthenticationSettingsResult& AddClientAuthenticationSettingsInfo(const ClientAuthenticationSettingInfo& value) { m_clientAuthenticationSettingsInfo.push_back(value); return *this; }
    inline DescribeClientAuthenticationSettingsResult& AddClientAuthenticationSettingsInfo(ClientAuthenticationSettingInfo&& value) { m_clientAuthenticationSettingsInfo.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used to retrieve the client authentication settings if the
     * number of setting types exceeds page limit and there is another page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeClientAuthenticationSettingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeClientAuthenticationSettingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeClientAuthenticationSettingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeClientAuthenticationSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeClientAuthenticationSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeClientAuthenticationSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ClientAuthenticationSettingInfo> m_clientAuthenticationSettingsInfo;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
