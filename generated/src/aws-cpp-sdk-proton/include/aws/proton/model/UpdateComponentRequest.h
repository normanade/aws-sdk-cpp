﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/ComponentDeploymentUpdateType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class UpdateComponentRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API UpdateComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateComponent"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The client token for the updated component.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateComponentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateComponentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateComponentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment type. It defines the mode for updating a component, as
     * follows:</p> <dl> <dt/> <dd> <p> <code>NONE</code> </p> <p>In this mode, a
     * deployment <i>doesn't</i> occur. Only the requested metadata parameters are
     * updated. You can only specify <code>description</code> in this mode.</p> </dd>
     * <dt/> <dd> <p> <code>CURRENT_VERSION</code> </p> <p>In this mode, the component
     * is deployed and updated with the new <code>serviceSpec</code>,
     * <code>templateSource</code>, and/or <code>type</code> that you provide. Only
     * requested parameters are updated.</p> </dd> </dl>
     */
    inline const ComponentDeploymentUpdateType& GetDeploymentType() const{ return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(const ComponentDeploymentUpdateType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline void SetDeploymentType(ComponentDeploymentUpdateType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }
    inline UpdateComponentRequest& WithDeploymentType(const ComponentDeploymentUpdateType& value) { SetDeploymentType(value); return *this;}
    inline UpdateComponentRequest& WithDeploymentType(ComponentDeploymentUpdateType&& value) { SetDeploymentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional customer-provided description of the component.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateComponentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateComponentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateComponentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateComponentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateComponentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateComponentRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service instance that you want to attach this component to.
     * Don't specify to keep the component's current service instance attachment.
     * Specify an empty string to detach the component from the service instance it's
     * attached to. Specify non-empty values for both <code>serviceInstanceName</code>
     * and <code>serviceName</code> or for neither of them.</p>
     */
    inline const Aws::String& GetServiceInstanceName() const{ return m_serviceInstanceName; }
    inline bool ServiceInstanceNameHasBeenSet() const { return m_serviceInstanceNameHasBeenSet; }
    inline void SetServiceInstanceName(const Aws::String& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = value; }
    inline void SetServiceInstanceName(Aws::String&& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = std::move(value); }
    inline void SetServiceInstanceName(const char* value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName.assign(value); }
    inline UpdateComponentRequest& WithServiceInstanceName(const Aws::String& value) { SetServiceInstanceName(value); return *this;}
    inline UpdateComponentRequest& WithServiceInstanceName(Aws::String&& value) { SetServiceInstanceName(std::move(value)); return *this;}
    inline UpdateComponentRequest& WithServiceInstanceName(const char* value) { SetServiceInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * with. Don't specify to keep the component's current service instance attachment.
     * Specify an empty string to detach the component from the service instance it's
     * attached to. Specify non-empty values for both <code>serviceInstanceName</code>
     * and <code>serviceName</code> or for neither of them.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline UpdateComponentRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline UpdateComponentRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline UpdateComponentRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service spec that you want the component to use to access service inputs.
     * Set this only when the component is attached to a service instance.</p>
     */
    inline const Aws::String& GetServiceSpec() const{ return m_serviceSpec; }
    inline bool ServiceSpecHasBeenSet() const { return m_serviceSpecHasBeenSet; }
    inline void SetServiceSpec(const Aws::String& value) { m_serviceSpecHasBeenSet = true; m_serviceSpec = value; }
    inline void SetServiceSpec(Aws::String&& value) { m_serviceSpecHasBeenSet = true; m_serviceSpec = std::move(value); }
    inline void SetServiceSpec(const char* value) { m_serviceSpecHasBeenSet = true; m_serviceSpec.assign(value); }
    inline UpdateComponentRequest& WithServiceSpec(const Aws::String& value) { SetServiceSpec(value); return *this;}
    inline UpdateComponentRequest& WithServiceSpec(Aws::String&& value) { SetServiceSpec(std::move(value)); return *this;}
    inline UpdateComponentRequest& WithServiceSpec(const char* value) { SetServiceSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A path to the Infrastructure as Code (IaC) file describing infrastructure
     * that a custom component provisions.</p>  <p>Components support a single
     * IaC file, even if you use Terraform as your template language.</p> 
     */
    inline const Aws::String& GetTemplateFile() const{ return m_templateFile; }
    inline bool TemplateFileHasBeenSet() const { return m_templateFileHasBeenSet; }
    inline void SetTemplateFile(const Aws::String& value) { m_templateFileHasBeenSet = true; m_templateFile = value; }
    inline void SetTemplateFile(Aws::String&& value) { m_templateFileHasBeenSet = true; m_templateFile = std::move(value); }
    inline void SetTemplateFile(const char* value) { m_templateFileHasBeenSet = true; m_templateFile.assign(value); }
    inline UpdateComponentRequest& WithTemplateFile(const Aws::String& value) { SetTemplateFile(value); return *this;}
    inline UpdateComponentRequest& WithTemplateFile(Aws::String&& value) { SetTemplateFile(std::move(value)); return *this;}
    inline UpdateComponentRequest& WithTemplateFile(const char* value) { SetTemplateFile(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ComponentDeploymentUpdateType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_serviceInstanceName;
    bool m_serviceInstanceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_serviceSpec;
    bool m_serviceSpecHasBeenSet = false;

    Aws::String m_templateFile;
    bool m_templateFileHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
