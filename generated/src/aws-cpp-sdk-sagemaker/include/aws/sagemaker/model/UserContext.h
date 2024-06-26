﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/IamIdentity.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Information about the user who created or modified an experiment, trial,
   * trial component, lineage group, project, or model card.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UserContext">AWS
   * API Reference</a></p>
   */
  class UserContext
  {
  public:
    AWS_SAGEMAKER_API UserContext();
    AWS_SAGEMAKER_API UserContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UserContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user's profile.</p>
     */
    inline const Aws::String& GetUserProfileArn() const{ return m_userProfileArn; }
    inline bool UserProfileArnHasBeenSet() const { return m_userProfileArnHasBeenSet; }
    inline void SetUserProfileArn(const Aws::String& value) { m_userProfileArnHasBeenSet = true; m_userProfileArn = value; }
    inline void SetUserProfileArn(Aws::String&& value) { m_userProfileArnHasBeenSet = true; m_userProfileArn = std::move(value); }
    inline void SetUserProfileArn(const char* value) { m_userProfileArnHasBeenSet = true; m_userProfileArn.assign(value); }
    inline UserContext& WithUserProfileArn(const Aws::String& value) { SetUserProfileArn(value); return *this;}
    inline UserContext& WithUserProfileArn(Aws::String&& value) { SetUserProfileArn(std::move(value)); return *this;}
    inline UserContext& WithUserProfileArn(const char* value) { SetUserProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user's profile.</p>
     */
    inline const Aws::String& GetUserProfileName() const{ return m_userProfileName; }
    inline bool UserProfileNameHasBeenSet() const { return m_userProfileNameHasBeenSet; }
    inline void SetUserProfileName(const Aws::String& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = value; }
    inline void SetUserProfileName(Aws::String&& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = std::move(value); }
    inline void SetUserProfileName(const char* value) { m_userProfileNameHasBeenSet = true; m_userProfileName.assign(value); }
    inline UserContext& WithUserProfileName(const Aws::String& value) { SetUserProfileName(value); return *this;}
    inline UserContext& WithUserProfileName(Aws::String&& value) { SetUserProfileName(std::move(value)); return *this;}
    inline UserContext& WithUserProfileName(const char* value) { SetUserProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain associated with the user.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline UserContext& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline UserContext& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline UserContext& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Identity details associated with the user. These details are
     * associated with model package groups, model packages, and project entities
     * only.</p>
     */
    inline const IamIdentity& GetIamIdentity() const{ return m_iamIdentity; }
    inline bool IamIdentityHasBeenSet() const { return m_iamIdentityHasBeenSet; }
    inline void SetIamIdentity(const IamIdentity& value) { m_iamIdentityHasBeenSet = true; m_iamIdentity = value; }
    inline void SetIamIdentity(IamIdentity&& value) { m_iamIdentityHasBeenSet = true; m_iamIdentity = std::move(value); }
    inline UserContext& WithIamIdentity(const IamIdentity& value) { SetIamIdentity(value); return *this;}
    inline UserContext& WithIamIdentity(IamIdentity&& value) { SetIamIdentity(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_userProfileArn;
    bool m_userProfileArnHasBeenSet = false;

    Aws::String m_userProfileName;
    bool m_userProfileNameHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    IamIdentity m_iamIdentity;
    bool m_iamIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
