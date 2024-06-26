﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/ApplicationLayerAutomaticResponseConfiguration.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>An object that represents a resource that is under DDoS
   * protection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/Protection">AWS
   * API Reference</a></p>
   */
  class Protection
  {
  public:
    AWS_SHIELD_API Protection();
    AWS_SHIELD_API Protection(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Protection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) of the protection.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Protection& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Protection& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Protection& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the protection. For example, <code>My CloudFront
     * distributions</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Protection& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Protection& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Protection& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the Amazon Web Services resource that is
     * protected.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline Protection& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline Protection& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline Protection& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier (ID) for the Route 53 health check that's associated
     * with the protection. </p>
     */
    inline const Aws::Vector<Aws::String>& GetHealthCheckIds() const{ return m_healthCheckIds; }
    inline bool HealthCheckIdsHasBeenSet() const { return m_healthCheckIdsHasBeenSet; }
    inline void SetHealthCheckIds(const Aws::Vector<Aws::String>& value) { m_healthCheckIdsHasBeenSet = true; m_healthCheckIds = value; }
    inline void SetHealthCheckIds(Aws::Vector<Aws::String>&& value) { m_healthCheckIdsHasBeenSet = true; m_healthCheckIds = std::move(value); }
    inline Protection& WithHealthCheckIds(const Aws::Vector<Aws::String>& value) { SetHealthCheckIds(value); return *this;}
    inline Protection& WithHealthCheckIds(Aws::Vector<Aws::String>&& value) { SetHealthCheckIds(std::move(value)); return *this;}
    inline Protection& AddHealthCheckIds(const Aws::String& value) { m_healthCheckIdsHasBeenSet = true; m_healthCheckIds.push_back(value); return *this; }
    inline Protection& AddHealthCheckIds(Aws::String&& value) { m_healthCheckIdsHasBeenSet = true; m_healthCheckIds.push_back(std::move(value)); return *this; }
    inline Protection& AddHealthCheckIds(const char* value) { m_healthCheckIdsHasBeenSet = true; m_healthCheckIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the protection.</p>
     */
    inline const Aws::String& GetProtectionArn() const{ return m_protectionArn; }
    inline bool ProtectionArnHasBeenSet() const { return m_protectionArnHasBeenSet; }
    inline void SetProtectionArn(const Aws::String& value) { m_protectionArnHasBeenSet = true; m_protectionArn = value; }
    inline void SetProtectionArn(Aws::String&& value) { m_protectionArnHasBeenSet = true; m_protectionArn = std::move(value); }
    inline void SetProtectionArn(const char* value) { m_protectionArnHasBeenSet = true; m_protectionArn.assign(value); }
    inline Protection& WithProtectionArn(const Aws::String& value) { SetProtectionArn(value); return *this;}
    inline Protection& WithProtectionArn(Aws::String&& value) { SetProtectionArn(std::move(value)); return *this;}
    inline Protection& WithProtectionArn(const char* value) { SetProtectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automatic application layer DDoS mitigation settings for the protection.
     * This configuration determines whether Shield Advanced automatically manages
     * rules in the web ACL in order to respond to application layer events that Shield
     * Advanced determines to be DDoS attacks. </p>
     */
    inline const ApplicationLayerAutomaticResponseConfiguration& GetApplicationLayerAutomaticResponseConfiguration() const{ return m_applicationLayerAutomaticResponseConfiguration; }
    inline bool ApplicationLayerAutomaticResponseConfigurationHasBeenSet() const { return m_applicationLayerAutomaticResponseConfigurationHasBeenSet; }
    inline void SetApplicationLayerAutomaticResponseConfiguration(const ApplicationLayerAutomaticResponseConfiguration& value) { m_applicationLayerAutomaticResponseConfigurationHasBeenSet = true; m_applicationLayerAutomaticResponseConfiguration = value; }
    inline void SetApplicationLayerAutomaticResponseConfiguration(ApplicationLayerAutomaticResponseConfiguration&& value) { m_applicationLayerAutomaticResponseConfigurationHasBeenSet = true; m_applicationLayerAutomaticResponseConfiguration = std::move(value); }
    inline Protection& WithApplicationLayerAutomaticResponseConfiguration(const ApplicationLayerAutomaticResponseConfiguration& value) { SetApplicationLayerAutomaticResponseConfiguration(value); return *this;}
    inline Protection& WithApplicationLayerAutomaticResponseConfiguration(ApplicationLayerAutomaticResponseConfiguration&& value) { SetApplicationLayerAutomaticResponseConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_healthCheckIds;
    bool m_healthCheckIdsHasBeenSet = false;

    Aws::String m_protectionArn;
    bool m_protectionArnHasBeenSet = false;

    ApplicationLayerAutomaticResponseConfiguration m_applicationLayerAutomaticResponseConfiguration;
    bool m_applicationLayerAutomaticResponseConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
