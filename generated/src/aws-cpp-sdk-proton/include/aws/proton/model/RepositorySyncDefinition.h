﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>A repository sync definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/RepositorySyncDefinition">AWS
   * API Reference</a></p>
   */
  class RepositorySyncDefinition
  {
  public:
    AWS_PROTON_API RepositorySyncDefinition();
    AWS_PROTON_API RepositorySyncDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API RepositorySyncDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The repository branch.</p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }
    inline RepositorySyncDefinition& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}
    inline RepositorySyncDefinition& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}
    inline RepositorySyncDefinition& WithBranch(const char* value) { SetBranch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory in the repository.</p>
     */
    inline const Aws::String& GetDirectory() const{ return m_directory; }
    inline bool DirectoryHasBeenSet() const { return m_directoryHasBeenSet; }
    inline void SetDirectory(const Aws::String& value) { m_directoryHasBeenSet = true; m_directory = value; }
    inline void SetDirectory(Aws::String&& value) { m_directoryHasBeenSet = true; m_directory = std::move(value); }
    inline void SetDirectory(const char* value) { m_directoryHasBeenSet = true; m_directory.assign(value); }
    inline RepositorySyncDefinition& WithDirectory(const Aws::String& value) { SetDirectory(value); return *this;}
    inline RepositorySyncDefinition& WithDirectory(Aws::String&& value) { SetDirectory(std::move(value)); return *this;}
    inline RepositorySyncDefinition& WithDirectory(const char* value) { SetDirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that is synced from.</p>
     */
    inline const Aws::String& GetParent() const{ return m_parent; }
    inline bool ParentHasBeenSet() const { return m_parentHasBeenSet; }
    inline void SetParent(const Aws::String& value) { m_parentHasBeenSet = true; m_parent = value; }
    inline void SetParent(Aws::String&& value) { m_parentHasBeenSet = true; m_parent = std::move(value); }
    inline void SetParent(const char* value) { m_parentHasBeenSet = true; m_parent.assign(value); }
    inline RepositorySyncDefinition& WithParent(const Aws::String& value) { SetParent(value); return *this;}
    inline RepositorySyncDefinition& WithParent(Aws::String&& value) { SetParent(std::move(value)); return *this;}
    inline RepositorySyncDefinition& WithParent(const char* value) { SetParent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that is synced to.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline RepositorySyncDefinition& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline RepositorySyncDefinition& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline RepositorySyncDefinition& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}
  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_directory;
    bool m_directoryHasBeenSet = false;

    Aws::String m_parent;
    bool m_parentHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
