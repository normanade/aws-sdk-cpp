﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/config/model/RemediationExceptionResourceKey.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class PutRemediationExceptionsRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutRemediationExceptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRemediationExceptions"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Config rule for which you want to create remediation
     * exception.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }
    inline PutRemediationExceptionsRequest& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}
    inline PutRemediationExceptionsRequest& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}
    inline PutRemediationExceptionsRequest& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. Config adds exception for each resource key. For example, Config adds 3
     * exceptions for 3 resource keys. </p>
     */
    inline const Aws::Vector<RemediationExceptionResourceKey>& GetResourceKeys() const{ return m_resourceKeys; }
    inline bool ResourceKeysHasBeenSet() const { return m_resourceKeysHasBeenSet; }
    inline void SetResourceKeys(const Aws::Vector<RemediationExceptionResourceKey>& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys = value; }
    inline void SetResourceKeys(Aws::Vector<RemediationExceptionResourceKey>&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys = std::move(value); }
    inline PutRemediationExceptionsRequest& WithResourceKeys(const Aws::Vector<RemediationExceptionResourceKey>& value) { SetResourceKeys(value); return *this;}
    inline PutRemediationExceptionsRequest& WithResourceKeys(Aws::Vector<RemediationExceptionResourceKey>&& value) { SetResourceKeys(std::move(value)); return *this;}
    inline PutRemediationExceptionsRequest& AddResourceKeys(const RemediationExceptionResourceKey& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(value); return *this; }
    inline PutRemediationExceptionsRequest& AddResourceKeys(RemediationExceptionResourceKey&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The message contains an explanation of the exception.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline PutRemediationExceptionsRequest& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline PutRemediationExceptionsRequest& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline PutRemediationExceptionsRequest& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exception is automatically deleted after the expiration date.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }
    inline PutRemediationExceptionsRequest& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}
    inline PutRemediationExceptionsRequest& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    Aws::Vector<RemediationExceptionResourceKey> m_resourceKeys;
    bool m_resourceKeysHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
