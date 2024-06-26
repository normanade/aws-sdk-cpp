﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of an <code>UpdateApplication</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateApplicationInput">AWS
   * API Reference</a></p>
   */
  class UpdateApplicationRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The current name of the application you want to change.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline UpdateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline UpdateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name to give the application.</p>
     */
    inline const Aws::String& GetNewApplicationName() const{ return m_newApplicationName; }
    inline bool NewApplicationNameHasBeenSet() const { return m_newApplicationNameHasBeenSet; }
    inline void SetNewApplicationName(const Aws::String& value) { m_newApplicationNameHasBeenSet = true; m_newApplicationName = value; }
    inline void SetNewApplicationName(Aws::String&& value) { m_newApplicationNameHasBeenSet = true; m_newApplicationName = std::move(value); }
    inline void SetNewApplicationName(const char* value) { m_newApplicationNameHasBeenSet = true; m_newApplicationName.assign(value); }
    inline UpdateApplicationRequest& WithNewApplicationName(const Aws::String& value) { SetNewApplicationName(value); return *this;}
    inline UpdateApplicationRequest& WithNewApplicationName(Aws::String&& value) { SetNewApplicationName(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithNewApplicationName(const char* value) { SetNewApplicationName(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_newApplicationName;
    bool m_newApplicationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
