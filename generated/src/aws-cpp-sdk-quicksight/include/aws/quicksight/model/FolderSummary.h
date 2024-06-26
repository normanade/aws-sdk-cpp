﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FolderType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/SharingModel.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A summary of information about an existing Amazon QuickSight folder.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FolderSummary">AWS
   * API Reference</a></p>
   */
  class FolderSummary
  {
  public:
    AWS_QUICKSIGHT_API FolderSummary();
    AWS_QUICKSIGHT_API FolderSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FolderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline FolderSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline FolderSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline FolderSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const{ return m_folderId; }
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }
    inline void SetFolderId(const Aws::String& value) { m_folderIdHasBeenSet = true; m_folderId = value; }
    inline void SetFolderId(Aws::String&& value) { m_folderIdHasBeenSet = true; m_folderId = std::move(value); }
    inline void SetFolderId(const char* value) { m_folderIdHasBeenSet = true; m_folderId.assign(value); }
    inline FolderSummary& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}
    inline FolderSummary& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}
    inline FolderSummary& WithFolderId(const char* value) { SetFolderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the folder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FolderSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FolderSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FolderSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of folder.</p>
     */
    inline const FolderType& GetFolderType() const{ return m_folderType; }
    inline bool FolderTypeHasBeenSet() const { return m_folderTypeHasBeenSet; }
    inline void SetFolderType(const FolderType& value) { m_folderTypeHasBeenSet = true; m_folderType = value; }
    inline void SetFolderType(FolderType&& value) { m_folderTypeHasBeenSet = true; m_folderType = std::move(value); }
    inline FolderSummary& WithFolderType(const FolderType& value) { SetFolderType(value); return *this;}
    inline FolderSummary& WithFolderType(FolderType&& value) { SetFolderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the folder was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline FolderSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline FolderSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the folder was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline FolderSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline FolderSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sharing scope of the folder.</p>
     */
    inline const SharingModel& GetSharingModel() const{ return m_sharingModel; }
    inline bool SharingModelHasBeenSet() const { return m_sharingModelHasBeenSet; }
    inline void SetSharingModel(const SharingModel& value) { m_sharingModelHasBeenSet = true; m_sharingModel = value; }
    inline void SetSharingModel(SharingModel&& value) { m_sharingModelHasBeenSet = true; m_sharingModel = std::move(value); }
    inline FolderSummary& WithSharingModel(const SharingModel& value) { SetSharingModel(value); return *this;}
    inline FolderSummary& WithSharingModel(SharingModel&& value) { SetSharingModel(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FolderType m_folderType;
    bool m_folderTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    SharingModel m_sharingModel;
    bool m_sharingModelHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
