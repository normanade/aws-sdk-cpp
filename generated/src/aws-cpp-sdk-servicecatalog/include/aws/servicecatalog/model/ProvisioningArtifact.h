﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/servicecatalog/model/ProvisioningArtifactGuidance.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a provisioning artifact. A provisioning artifact is also
   * known as a product version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifact">AWS
   * API Reference</a></p>
   */
  class ProvisioningArtifact
  {
  public:
    AWS_SERVICECATALOG_API ProvisioningArtifact();
    AWS_SERVICECATALOG_API ProvisioningArtifact(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisioningArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ProvisioningArtifact& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ProvisioningArtifact& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ProvisioningArtifact& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ProvisioningArtifact& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ProvisioningArtifact& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ProvisioningArtifact& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the provisioning artifact.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ProvisioningArtifact& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ProvisioningArtifact& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ProvisioningArtifact& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline ProvisioningArtifact& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline ProvisioningArtifact& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p>
     */
    inline const ProvisioningArtifactGuidance& GetGuidance() const{ return m_guidance; }
    inline bool GuidanceHasBeenSet() const { return m_guidanceHasBeenSet; }
    inline void SetGuidance(const ProvisioningArtifactGuidance& value) { m_guidanceHasBeenSet = true; m_guidance = value; }
    inline void SetGuidance(ProvisioningArtifactGuidance&& value) { m_guidanceHasBeenSet = true; m_guidance = std::move(value); }
    inline ProvisioningArtifact& WithGuidance(const ProvisioningArtifactGuidance& value) { SetGuidance(value); return *this;}
    inline ProvisioningArtifact& WithGuidance(ProvisioningArtifactGuidance&& value) { SetGuidance(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    ProvisioningArtifactGuidance m_guidance;
    bool m_guidanceHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
