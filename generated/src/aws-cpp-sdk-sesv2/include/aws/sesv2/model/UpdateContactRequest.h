﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/TopicPreference.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   */
  class UpdateContactRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API UpdateContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContact"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the contact list.</p>
     */
    inline const Aws::String& GetContactListName() const{ return m_contactListName; }
    inline bool ContactListNameHasBeenSet() const { return m_contactListNameHasBeenSet; }
    inline void SetContactListName(const Aws::String& value) { m_contactListNameHasBeenSet = true; m_contactListName = value; }
    inline void SetContactListName(Aws::String&& value) { m_contactListNameHasBeenSet = true; m_contactListName = std::move(value); }
    inline void SetContactListName(const char* value) { m_contactListNameHasBeenSet = true; m_contactListName.assign(value); }
    inline UpdateContactRequest& WithContactListName(const Aws::String& value) { SetContactListName(value); return *this;}
    inline UpdateContactRequest& WithContactListName(Aws::String&& value) { SetContactListName(std::move(value)); return *this;}
    inline UpdateContactRequest& WithContactListName(const char* value) { SetContactListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact's email address.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline UpdateContactRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline UpdateContactRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline UpdateContactRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact's preference for being opted-in to or opted-out of a topic.</p>
     */
    inline const Aws::Vector<TopicPreference>& GetTopicPreferences() const{ return m_topicPreferences; }
    inline bool TopicPreferencesHasBeenSet() const { return m_topicPreferencesHasBeenSet; }
    inline void SetTopicPreferences(const Aws::Vector<TopicPreference>& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences = value; }
    inline void SetTopicPreferences(Aws::Vector<TopicPreference>&& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences = std::move(value); }
    inline UpdateContactRequest& WithTopicPreferences(const Aws::Vector<TopicPreference>& value) { SetTopicPreferences(value); return *this;}
    inline UpdateContactRequest& WithTopicPreferences(Aws::Vector<TopicPreference>&& value) { SetTopicPreferences(std::move(value)); return *this;}
    inline UpdateContactRequest& AddTopicPreferences(const TopicPreference& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences.push_back(value); return *this; }
    inline UpdateContactRequest& AddTopicPreferences(TopicPreference&& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline bool GetUnsubscribeAll() const{ return m_unsubscribeAll; }
    inline bool UnsubscribeAllHasBeenSet() const { return m_unsubscribeAllHasBeenSet; }
    inline void SetUnsubscribeAll(bool value) { m_unsubscribeAllHasBeenSet = true; m_unsubscribeAll = value; }
    inline UpdateContactRequest& WithUnsubscribeAll(bool value) { SetUnsubscribeAll(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline const Aws::String& GetAttributesData() const{ return m_attributesData; }
    inline bool AttributesDataHasBeenSet() const { return m_attributesDataHasBeenSet; }
    inline void SetAttributesData(const Aws::String& value) { m_attributesDataHasBeenSet = true; m_attributesData = value; }
    inline void SetAttributesData(Aws::String&& value) { m_attributesDataHasBeenSet = true; m_attributesData = std::move(value); }
    inline void SetAttributesData(const char* value) { m_attributesDataHasBeenSet = true; m_attributesData.assign(value); }
    inline UpdateContactRequest& WithAttributesData(const Aws::String& value) { SetAttributesData(value); return *this;}
    inline UpdateContactRequest& WithAttributesData(Aws::String&& value) { SetAttributesData(std::move(value)); return *this;}
    inline UpdateContactRequest& WithAttributesData(const char* value) { SetAttributesData(value); return *this;}
    ///@}
  private:

    Aws::String m_contactListName;
    bool m_contactListNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::Vector<TopicPreference> m_topicPreferences;
    bool m_topicPreferencesHasBeenSet = false;

    bool m_unsubscribeAll;
    bool m_unsubscribeAllHasBeenSet = false;

    Aws::String m_attributesData;
    bool m_attributesDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
