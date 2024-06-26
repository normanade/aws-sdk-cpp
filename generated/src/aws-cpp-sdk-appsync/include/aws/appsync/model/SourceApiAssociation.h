﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/SourceApiAssociationConfig.h>
#include <aws/appsync/model/SourceApiAssociationStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes the configuration of a source API. A source API is a GraphQL API
   * that is linked to a merged API. There can be multiple source APIs attached to
   * each merged API. When linked to a merged API, the source API's schema, data
   * sources, and resolvers will be combined with other linked source API data to
   * form a new, singular API. </p> <p>Source APIs can originate from your account or
   * from other accounts via Amazon Web Services Resource Access Manager. For more
   * information about sharing resources from other accounts, see <a
   * href="https://docs.aws.amazon.com/ram/latest/userguide/what-is.html">What is
   * Amazon Web Services Resource Access Manager?</a> in the <i>Amazon Web Services
   * Resource Access Manager</i> guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/SourceApiAssociation">AWS
   * API Reference</a></p>
   */
  class SourceApiAssociation
  {
  public:
    AWS_APPSYNC_API SourceApiAssociation();
    AWS_APPSYNC_API SourceApiAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API SourceApiAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID generated by the AppSync service for the source API association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline SourceApiAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline SourceApiAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline SourceApiAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source API association.</p>
     */
    inline const Aws::String& GetAssociationArn() const{ return m_associationArn; }
    inline bool AssociationArnHasBeenSet() const { return m_associationArnHasBeenSet; }
    inline void SetAssociationArn(const Aws::String& value) { m_associationArnHasBeenSet = true; m_associationArn = value; }
    inline void SetAssociationArn(Aws::String&& value) { m_associationArnHasBeenSet = true; m_associationArn = std::move(value); }
    inline void SetAssociationArn(const char* value) { m_associationArnHasBeenSet = true; m_associationArn.assign(value); }
    inline SourceApiAssociation& WithAssociationArn(const Aws::String& value) { SetAssociationArn(value); return *this;}
    inline SourceApiAssociation& WithAssociationArn(Aws::String&& value) { SetAssociationArn(std::move(value)); return *this;}
    inline SourceApiAssociation& WithAssociationArn(const char* value) { SetAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AppSync source API.</p>
     */
    inline const Aws::String& GetSourceApiId() const{ return m_sourceApiId; }
    inline bool SourceApiIdHasBeenSet() const { return m_sourceApiIdHasBeenSet; }
    inline void SetSourceApiId(const Aws::String& value) { m_sourceApiIdHasBeenSet = true; m_sourceApiId = value; }
    inline void SetSourceApiId(Aws::String&& value) { m_sourceApiIdHasBeenSet = true; m_sourceApiId = std::move(value); }
    inline void SetSourceApiId(const char* value) { m_sourceApiIdHasBeenSet = true; m_sourceApiId.assign(value); }
    inline SourceApiAssociation& WithSourceApiId(const Aws::String& value) { SetSourceApiId(value); return *this;}
    inline SourceApiAssociation& WithSourceApiId(Aws::String&& value) { SetSourceApiId(std::move(value)); return *this;}
    inline SourceApiAssociation& WithSourceApiId(const char* value) { SetSourceApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AppSync source API.</p>
     */
    inline const Aws::String& GetSourceApiArn() const{ return m_sourceApiArn; }
    inline bool SourceApiArnHasBeenSet() const { return m_sourceApiArnHasBeenSet; }
    inline void SetSourceApiArn(const Aws::String& value) { m_sourceApiArnHasBeenSet = true; m_sourceApiArn = value; }
    inline void SetSourceApiArn(Aws::String&& value) { m_sourceApiArnHasBeenSet = true; m_sourceApiArn = std::move(value); }
    inline void SetSourceApiArn(const char* value) { m_sourceApiArnHasBeenSet = true; m_sourceApiArn.assign(value); }
    inline SourceApiAssociation& WithSourceApiArn(const Aws::String& value) { SetSourceApiArn(value); return *this;}
    inline SourceApiAssociation& WithSourceApiArn(Aws::String&& value) { SetSourceApiArn(std::move(value)); return *this;}
    inline SourceApiAssociation& WithSourceApiArn(const char* value) { SetSourceApiArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AppSync Merged API.</p>
     */
    inline const Aws::String& GetMergedApiArn() const{ return m_mergedApiArn; }
    inline bool MergedApiArnHasBeenSet() const { return m_mergedApiArnHasBeenSet; }
    inline void SetMergedApiArn(const Aws::String& value) { m_mergedApiArnHasBeenSet = true; m_mergedApiArn = value; }
    inline void SetMergedApiArn(Aws::String&& value) { m_mergedApiArnHasBeenSet = true; m_mergedApiArn = std::move(value); }
    inline void SetMergedApiArn(const char* value) { m_mergedApiArnHasBeenSet = true; m_mergedApiArn.assign(value); }
    inline SourceApiAssociation& WithMergedApiArn(const Aws::String& value) { SetMergedApiArn(value); return *this;}
    inline SourceApiAssociation& WithMergedApiArn(Aws::String&& value) { SetMergedApiArn(std::move(value)); return *this;}
    inline SourceApiAssociation& WithMergedApiArn(const char* value) { SetMergedApiArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AppSync Merged API.</p>
     */
    inline const Aws::String& GetMergedApiId() const{ return m_mergedApiId; }
    inline bool MergedApiIdHasBeenSet() const { return m_mergedApiIdHasBeenSet; }
    inline void SetMergedApiId(const Aws::String& value) { m_mergedApiIdHasBeenSet = true; m_mergedApiId = value; }
    inline void SetMergedApiId(Aws::String&& value) { m_mergedApiIdHasBeenSet = true; m_mergedApiId = std::move(value); }
    inline void SetMergedApiId(const char* value) { m_mergedApiIdHasBeenSet = true; m_mergedApiId.assign(value); }
    inline SourceApiAssociation& WithMergedApiId(const Aws::String& value) { SetMergedApiId(value); return *this;}
    inline SourceApiAssociation& WithMergedApiId(Aws::String&& value) { SetMergedApiId(std::move(value)); return *this;}
    inline SourceApiAssociation& WithMergedApiId(const char* value) { SetMergedApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description field.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SourceApiAssociation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SourceApiAssociation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SourceApiAssociation& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SourceApiAssociationConfig</code> object data.</p>
     */
    inline const SourceApiAssociationConfig& GetSourceApiAssociationConfig() const{ return m_sourceApiAssociationConfig; }
    inline bool SourceApiAssociationConfigHasBeenSet() const { return m_sourceApiAssociationConfigHasBeenSet; }
    inline void SetSourceApiAssociationConfig(const SourceApiAssociationConfig& value) { m_sourceApiAssociationConfigHasBeenSet = true; m_sourceApiAssociationConfig = value; }
    inline void SetSourceApiAssociationConfig(SourceApiAssociationConfig&& value) { m_sourceApiAssociationConfigHasBeenSet = true; m_sourceApiAssociationConfig = std::move(value); }
    inline SourceApiAssociation& WithSourceApiAssociationConfig(const SourceApiAssociationConfig& value) { SetSourceApiAssociationConfig(value); return *this;}
    inline SourceApiAssociation& WithSourceApiAssociationConfig(SourceApiAssociationConfig&& value) { SetSourceApiAssociationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the source API association.</p>
     */
    inline const SourceApiAssociationStatus& GetSourceApiAssociationStatus() const{ return m_sourceApiAssociationStatus; }
    inline bool SourceApiAssociationStatusHasBeenSet() const { return m_sourceApiAssociationStatusHasBeenSet; }
    inline void SetSourceApiAssociationStatus(const SourceApiAssociationStatus& value) { m_sourceApiAssociationStatusHasBeenSet = true; m_sourceApiAssociationStatus = value; }
    inline void SetSourceApiAssociationStatus(SourceApiAssociationStatus&& value) { m_sourceApiAssociationStatusHasBeenSet = true; m_sourceApiAssociationStatus = std::move(value); }
    inline SourceApiAssociation& WithSourceApiAssociationStatus(const SourceApiAssociationStatus& value) { SetSourceApiAssociationStatus(value); return *this;}
    inline SourceApiAssociation& WithSourceApiAssociationStatus(SourceApiAssociationStatus&& value) { SetSourceApiAssociationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed message related to the current state of the source API
     * association.</p>
     */
    inline const Aws::String& GetSourceApiAssociationStatusDetail() const{ return m_sourceApiAssociationStatusDetail; }
    inline bool SourceApiAssociationStatusDetailHasBeenSet() const { return m_sourceApiAssociationStatusDetailHasBeenSet; }
    inline void SetSourceApiAssociationStatusDetail(const Aws::String& value) { m_sourceApiAssociationStatusDetailHasBeenSet = true; m_sourceApiAssociationStatusDetail = value; }
    inline void SetSourceApiAssociationStatusDetail(Aws::String&& value) { m_sourceApiAssociationStatusDetailHasBeenSet = true; m_sourceApiAssociationStatusDetail = std::move(value); }
    inline void SetSourceApiAssociationStatusDetail(const char* value) { m_sourceApiAssociationStatusDetailHasBeenSet = true; m_sourceApiAssociationStatusDetail.assign(value); }
    inline SourceApiAssociation& WithSourceApiAssociationStatusDetail(const Aws::String& value) { SetSourceApiAssociationStatusDetail(value); return *this;}
    inline SourceApiAssociation& WithSourceApiAssociationStatusDetail(Aws::String&& value) { SetSourceApiAssociationStatusDetail(std::move(value)); return *this;}
    inline SourceApiAssociation& WithSourceApiAssociationStatusDetail(const char* value) { SetSourceApiAssociationStatusDetail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datetime value of the last successful merge of the source API
     * association. The result will be in UTC format and your local time zone.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulMergeDate() const{ return m_lastSuccessfulMergeDate; }
    inline bool LastSuccessfulMergeDateHasBeenSet() const { return m_lastSuccessfulMergeDateHasBeenSet; }
    inline void SetLastSuccessfulMergeDate(const Aws::Utils::DateTime& value) { m_lastSuccessfulMergeDateHasBeenSet = true; m_lastSuccessfulMergeDate = value; }
    inline void SetLastSuccessfulMergeDate(Aws::Utils::DateTime&& value) { m_lastSuccessfulMergeDateHasBeenSet = true; m_lastSuccessfulMergeDate = std::move(value); }
    inline SourceApiAssociation& WithLastSuccessfulMergeDate(const Aws::Utils::DateTime& value) { SetLastSuccessfulMergeDate(value); return *this;}
    inline SourceApiAssociation& WithLastSuccessfulMergeDate(Aws::Utils::DateTime&& value) { SetLastSuccessfulMergeDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_associationArn;
    bool m_associationArnHasBeenSet = false;

    Aws::String m_sourceApiId;
    bool m_sourceApiIdHasBeenSet = false;

    Aws::String m_sourceApiArn;
    bool m_sourceApiArnHasBeenSet = false;

    Aws::String m_mergedApiArn;
    bool m_mergedApiArnHasBeenSet = false;

    Aws::String m_mergedApiId;
    bool m_mergedApiIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SourceApiAssociationConfig m_sourceApiAssociationConfig;
    bool m_sourceApiAssociationConfigHasBeenSet = false;

    SourceApiAssociationStatus m_sourceApiAssociationStatus;
    bool m_sourceApiAssociationStatusHasBeenSet = false;

    Aws::String m_sourceApiAssociationStatusDetail;
    bool m_sourceApiAssociationStatusDetailHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulMergeDate;
    bool m_lastSuccessfulMergeDateHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
