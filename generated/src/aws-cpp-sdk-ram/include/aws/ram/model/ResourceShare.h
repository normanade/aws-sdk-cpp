﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceShareStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ram/model/ResourceShareFeatureSet.h>
#include <aws/ram/model/Tag.h>
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
namespace RAM
{
namespace Model
{

  /**
   * <p>Describes a resource share in RAM.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ResourceShare">AWS
   * API Reference</a></p>
   */
  class ResourceShare
  {
  public:
    AWS_RAM_API ResourceShare();
    AWS_RAM_API ResourceShare(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API ResourceShare& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }
    inline ResourceShare& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}
    inline ResourceShare& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}
    inline ResourceShare& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource share.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ResourceShare& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ResourceShare& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ResourceShare& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the resource share.</p>
     */
    inline const Aws::String& GetOwningAccountId() const{ return m_owningAccountId; }
    inline bool OwningAccountIdHasBeenSet() const { return m_owningAccountIdHasBeenSet; }
    inline void SetOwningAccountId(const Aws::String& value) { m_owningAccountIdHasBeenSet = true; m_owningAccountId = value; }
    inline void SetOwningAccountId(Aws::String&& value) { m_owningAccountIdHasBeenSet = true; m_owningAccountId = std::move(value); }
    inline void SetOwningAccountId(const char* value) { m_owningAccountIdHasBeenSet = true; m_owningAccountId.assign(value); }
    inline ResourceShare& WithOwningAccountId(const Aws::String& value) { SetOwningAccountId(value); return *this;}
    inline ResourceShare& WithOwningAccountId(Aws::String&& value) { SetOwningAccountId(std::move(value)); return *this;}
    inline ResourceShare& WithOwningAccountId(const char* value) { SetOwningAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether principals outside your organization in Organizations can
     * be associated with a resource share.</p> <ul> <li> <p> <code>True</code> – the
     * resource share can be shared with any Amazon Web Services account.</p> </li>
     * <li> <p> <code>False</code> – the resource share can be shared with only
     * accounts in the same organization as the account that owns the resource
     * share.</p> </li> </ul>
     */
    inline bool GetAllowExternalPrincipals() const{ return m_allowExternalPrincipals; }
    inline bool AllowExternalPrincipalsHasBeenSet() const { return m_allowExternalPrincipalsHasBeenSet; }
    inline void SetAllowExternalPrincipals(bool value) { m_allowExternalPrincipalsHasBeenSet = true; m_allowExternalPrincipals = value; }
    inline ResourceShare& WithAllowExternalPrincipals(bool value) { SetAllowExternalPrincipals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the resource share.</p>
     */
    inline const ResourceShareStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResourceShareStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResourceShareStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ResourceShare& WithStatus(const ResourceShareStatus& value) { SetStatus(value); return *this;}
    inline ResourceShare& WithStatus(ResourceShareStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the status of the resource share.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ResourceShare& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ResourceShare& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ResourceShare& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag key and value pairs attached to the resource share.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ResourceShare& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ResourceShare& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ResourceShare& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ResourceShare& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the resource share was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ResourceShare& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ResourceShare& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the resource share was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline ResourceShare& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline ResourceShare& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates what features are available for this resource share. This parameter
     * can have one of the following values:</p> <ul> <li> <p> <b>STANDARD</b> – A
     * resource share that supports all functionality. These resource shares are
     * visible to all principals you share the resource share with. You can modify
     * these resource shares in RAM using the console or APIs. This resource share
     * might have been created by RAM, or it might have been <b>CREATED_FROM_POLICY</b>
     * and then promoted.</p> </li> <li> <p> <b>CREATED_FROM_POLICY</b> – The customer
     * manually shared a resource by attaching a resource-based policy. That policy did
     * not match any existing managed permissions, so RAM created this customer managed
     * permission automatically on the customer's behalf based on the attached policy
     * document. This type of resource share is visible only to the Amazon Web Services
     * account that created it. You can't modify it in RAM unless you promote it. For
     * more information, see <a>PromoteResourceShareCreatedFromPolicy</a>.</p> </li>
     * <li> <p> <b>PROMOTING_TO_STANDARD</b> – This resource share was originally
     * <code>CREATED_FROM_POLICY</code>, but the customer ran the
     * <a>PromoteResourceShareCreatedFromPolicy</a> and that operation is still in
     * progress. This value changes to <code>STANDARD</code> when complete.</p> </li>
     * </ul>
     */
    inline const ResourceShareFeatureSet& GetFeatureSet() const{ return m_featureSet; }
    inline bool FeatureSetHasBeenSet() const { return m_featureSetHasBeenSet; }
    inline void SetFeatureSet(const ResourceShareFeatureSet& value) { m_featureSetHasBeenSet = true; m_featureSet = value; }
    inline void SetFeatureSet(ResourceShareFeatureSet&& value) { m_featureSetHasBeenSet = true; m_featureSet = std::move(value); }
    inline ResourceShare& WithFeatureSet(const ResourceShareFeatureSet& value) { SetFeatureSet(value); return *this;}
    inline ResourceShare& WithFeatureSet(ResourceShareFeatureSet&& value) { SetFeatureSet(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owningAccountId;
    bool m_owningAccountIdHasBeenSet = false;

    bool m_allowExternalPrincipals;
    bool m_allowExternalPrincipalsHasBeenSet = false;

    ResourceShareStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    ResourceShareFeatureSet m_featureSet;
    bool m_featureSetHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
