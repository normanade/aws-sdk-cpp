﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorOAuthRequest.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Appflow
{
namespace Model
{

  /**
   * <p>The connector-specific profile credentials required when using Salesforce
   * Pardot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/PardotConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class PardotConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API PardotConnectorProfileCredentials();
    AWS_APPFLOW_API PardotConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API PardotConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The credentials used to access protected Salesforce Pardot resources.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline PardotConnectorProfileCredentials& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline PardotConnectorProfileCredentials& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline PardotConnectorProfileCredentials& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials used to acquire new access tokens.</p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    inline void SetRefreshToken(const Aws::String& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }
    inline void SetRefreshToken(Aws::String&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }
    inline void SetRefreshToken(const char* value) { m_refreshTokenHasBeenSet = true; m_refreshToken.assign(value); }
    inline PardotConnectorProfileCredentials& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}
    inline PardotConnectorProfileCredentials& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}
    inline PardotConnectorProfileCredentials& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ConnectorOAuthRequest& GetOAuthRequest() const{ return m_oAuthRequest; }
    inline bool OAuthRequestHasBeenSet() const { return m_oAuthRequestHasBeenSet; }
    inline void SetOAuthRequest(const ConnectorOAuthRequest& value) { m_oAuthRequestHasBeenSet = true; m_oAuthRequest = value; }
    inline void SetOAuthRequest(ConnectorOAuthRequest&& value) { m_oAuthRequestHasBeenSet = true; m_oAuthRequest = std::move(value); }
    inline PardotConnectorProfileCredentials& WithOAuthRequest(const ConnectorOAuthRequest& value) { SetOAuthRequest(value); return *this;}
    inline PardotConnectorProfileCredentials& WithOAuthRequest(ConnectorOAuthRequest&& value) { SetOAuthRequest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret manager ARN, which contains the client ID and client secret of the
     * connected app.</p>
     */
    inline const Aws::String& GetClientCredentialsArn() const{ return m_clientCredentialsArn; }
    inline bool ClientCredentialsArnHasBeenSet() const { return m_clientCredentialsArnHasBeenSet; }
    inline void SetClientCredentialsArn(const Aws::String& value) { m_clientCredentialsArnHasBeenSet = true; m_clientCredentialsArn = value; }
    inline void SetClientCredentialsArn(Aws::String&& value) { m_clientCredentialsArnHasBeenSet = true; m_clientCredentialsArn = std::move(value); }
    inline void SetClientCredentialsArn(const char* value) { m_clientCredentialsArnHasBeenSet = true; m_clientCredentialsArn.assign(value); }
    inline PardotConnectorProfileCredentials& WithClientCredentialsArn(const Aws::String& value) { SetClientCredentialsArn(value); return *this;}
    inline PardotConnectorProfileCredentials& WithClientCredentialsArn(Aws::String&& value) { SetClientCredentialsArn(std::move(value)); return *this;}
    inline PardotConnectorProfileCredentials& WithClientCredentialsArn(const char* value) { SetClientCredentialsArn(value); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    ConnectorOAuthRequest m_oAuthRequest;
    bool m_oAuthRequestHasBeenSet = false;

    Aws::String m_clientCredentialsArn;
    bool m_clientCredentialsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
