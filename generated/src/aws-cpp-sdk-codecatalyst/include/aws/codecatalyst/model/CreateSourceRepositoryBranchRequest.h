﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/CodeCatalystRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

  /**
   */
  class CreateSourceRepositoryBranchRequest : public CodeCatalystRequest
  {
  public:
    AWS_CODECATALYST_API CreateSourceRepositoryBranchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSourceRepositoryBranch"; }

    AWS_CODECATALYST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }
    inline CreateSourceRepositoryBranchRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline CreateSourceRepositoryBranchRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline CreateSourceRepositoryBranchRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline CreateSourceRepositoryBranchRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline CreateSourceRepositoryBranchRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline CreateSourceRepositoryBranchRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository where you want to create a branch.</p>
     */
    inline const Aws::String& GetSourceRepositoryName() const{ return m_sourceRepositoryName; }
    inline bool SourceRepositoryNameHasBeenSet() const { return m_sourceRepositoryNameHasBeenSet; }
    inline void SetSourceRepositoryName(const Aws::String& value) { m_sourceRepositoryNameHasBeenSet = true; m_sourceRepositoryName = value; }
    inline void SetSourceRepositoryName(Aws::String&& value) { m_sourceRepositoryNameHasBeenSet = true; m_sourceRepositoryName = std::move(value); }
    inline void SetSourceRepositoryName(const char* value) { m_sourceRepositoryNameHasBeenSet = true; m_sourceRepositoryName.assign(value); }
    inline CreateSourceRepositoryBranchRequest& WithSourceRepositoryName(const Aws::String& value) { SetSourceRepositoryName(value); return *this;}
    inline CreateSourceRepositoryBranchRequest& WithSourceRepositoryName(Aws::String&& value) { SetSourceRepositoryName(std::move(value)); return *this;}
    inline CreateSourceRepositoryBranchRequest& WithSourceRepositoryName(const char* value) { SetSourceRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the branch you're creating.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateSourceRepositoryBranchRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateSourceRepositoryBranchRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateSourceRepositoryBranchRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID in an existing branch from which you want to create the new
     * branch.</p>
     */
    inline const Aws::String& GetHeadCommitId() const{ return m_headCommitId; }
    inline bool HeadCommitIdHasBeenSet() const { return m_headCommitIdHasBeenSet; }
    inline void SetHeadCommitId(const Aws::String& value) { m_headCommitIdHasBeenSet = true; m_headCommitId = value; }
    inline void SetHeadCommitId(Aws::String&& value) { m_headCommitIdHasBeenSet = true; m_headCommitId = std::move(value); }
    inline void SetHeadCommitId(const char* value) { m_headCommitIdHasBeenSet = true; m_headCommitId.assign(value); }
    inline CreateSourceRepositoryBranchRequest& WithHeadCommitId(const Aws::String& value) { SetHeadCommitId(value); return *this;}
    inline CreateSourceRepositoryBranchRequest& WithHeadCommitId(Aws::String&& value) { SetHeadCommitId(std::move(value)); return *this;}
    inline CreateSourceRepositoryBranchRequest& WithHeadCommitId(const char* value) { SetHeadCommitId(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_sourceRepositoryName;
    bool m_sourceRepositoryNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_headCommitId;
    bool m_headCommitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
