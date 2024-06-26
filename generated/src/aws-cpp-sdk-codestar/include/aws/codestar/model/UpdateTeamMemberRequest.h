﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/codestar/CodeStarRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStar
{
namespace Model
{

  /**
   */
  class UpdateTeamMemberRequest : public CodeStarRequest
  {
  public:
    AWS_CODESTAR_API UpdateTeamMemberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTeamMember"; }

    AWS_CODESTAR_API Aws::String SerializePayload() const override;

    AWS_CODESTAR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the project.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }
    inline UpdateTeamMemberRequest& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline UpdateTeamMemberRequest& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline UpdateTeamMemberRequest& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user for whom you want to change team
     * membership attributes.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }
    inline UpdateTeamMemberRequest& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}
    inline UpdateTeamMemberRequest& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}
    inline UpdateTeamMemberRequest& WithUserArn(const char* value) { SetUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role assigned to the user in the project. Project roles have different
     * levels of access. For more information, see <a
     * href="http://docs.aws.amazon.com/codestar/latest/userguide/working-with-teams.html">Working
     * with Teams</a> in the <i>AWS CodeStar User Guide</i>.</p>
     */
    inline const Aws::String& GetProjectRole() const{ return m_projectRole; }
    inline bool ProjectRoleHasBeenSet() const { return m_projectRoleHasBeenSet; }
    inline void SetProjectRole(const Aws::String& value) { m_projectRoleHasBeenSet = true; m_projectRole = value; }
    inline void SetProjectRole(Aws::String&& value) { m_projectRoleHasBeenSet = true; m_projectRole = std::move(value); }
    inline void SetProjectRole(const char* value) { m_projectRoleHasBeenSet = true; m_projectRole.assign(value); }
    inline UpdateTeamMemberRequest& WithProjectRole(const Aws::String& value) { SetProjectRole(value); return *this;}
    inline UpdateTeamMemberRequest& WithProjectRole(Aws::String&& value) { SetProjectRole(std::move(value)); return *this;}
    inline UpdateTeamMemberRequest& WithProjectRole(const char* value) { SetProjectRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether a team member is allowed to remotely access project resources using
     * the SSH public key associated with the user's profile. Even if this is set to
     * True, the user must associate a public key with their profile before the user
     * can access resources.</p>
     */
    inline bool GetRemoteAccessAllowed() const{ return m_remoteAccessAllowed; }
    inline bool RemoteAccessAllowedHasBeenSet() const { return m_remoteAccessAllowedHasBeenSet; }
    inline void SetRemoteAccessAllowed(bool value) { m_remoteAccessAllowedHasBeenSet = true; m_remoteAccessAllowed = value; }
    inline UpdateTeamMemberRequest& WithRemoteAccessAllowed(bool value) { SetRemoteAccessAllowed(value); return *this;}
    ///@}
  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;

    Aws::String m_projectRole;
    bool m_projectRoleHasBeenSet = false;

    bool m_remoteAccessAllowed;
    bool m_remoteAccessAllowedHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
