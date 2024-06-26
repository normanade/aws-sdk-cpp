﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Action.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the default settings and content for a push notification that's
   * sent directly to an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DefaultPushNotificationMessage">AWS
   * API Reference</a></p>
   */
  class DefaultPushNotificationMessage
  {
  public:
    AWS_PINPOINT_API DefaultPushNotificationMessage();
    AWS_PINPOINT_API DefaultPushNotificationMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API DefaultPushNotificationMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default action to occur if a recipient taps the push notification. Valid
     * values are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the
     * foreground app if it was sent to the background. This is the default
     * action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a designated
     * user interface in the app. This setting uses the deep-linking features of the
     * iOS and Android platforms.</p></li> <li><p>URL - The default mobile browser on
     * the recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline const Action& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline DefaultPushNotificationMessage& WithAction(const Action& value) { SetAction(value); return *this;}
    inline DefaultPushNotificationMessage& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default body of the notification message.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline DefaultPushNotificationMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline DefaultPushNotificationMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline DefaultPushNotificationMessage& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON data payload to use for the default push notification, if the
     * notification is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const Aws::Map<Aws::String, Aws::String>& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(Aws::Map<Aws::String, Aws::String>&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline DefaultPushNotificationMessage& WithData(const Aws::Map<Aws::String, Aws::String>& value) { SetData(value); return *this;}
    inline DefaultPushNotificationMessage& WithData(Aws::Map<Aws::String, Aws::String>&& value) { SetData(std::move(value)); return *this;}
    inline DefaultPushNotificationMessage& AddData(const Aws::String& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }
    inline DefaultPushNotificationMessage& AddData(Aws::String&& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }
    inline DefaultPushNotificationMessage& AddData(const Aws::String& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }
    inline DefaultPushNotificationMessage& AddData(Aws::String&& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), std::move(value)); return *this; }
    inline DefaultPushNotificationMessage& AddData(const char* key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }
    inline DefaultPushNotificationMessage& AddData(Aws::String&& key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }
    inline DefaultPushNotificationMessage& AddData(const char* key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the default notification is a silent push notification,
     * which is a push notification that doesn't display on a recipient's device.
     * Silent push notifications can be used for cases such as updating an app's
     * configuration or delivering messages to an in-app notification center.</p>
     */
    inline bool GetSilentPush() const{ return m_silentPush; }
    inline bool SilentPushHasBeenSet() const { return m_silentPushHasBeenSet; }
    inline void SetSilentPush(bool value) { m_silentPushHasBeenSet = true; m_silentPush = value; }
    inline DefaultPushNotificationMessage& WithSilentPush(bool value) { SetSilentPush(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }
    inline DefaultPushNotificationMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}
    inline DefaultPushNotificationMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}
    inline DefaultPushNotificationMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }
    inline DefaultPushNotificationMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }
    inline DefaultPushNotificationMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }
    inline DefaultPushNotificationMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }
    inline DefaultPushNotificationMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }
    inline DefaultPushNotificationMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default title to display above the notification message on a recipient's
     * device.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline DefaultPushNotificationMessage& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline DefaultPushNotificationMessage& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline DefaultPushNotificationMessage& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default URL to open in a recipient's default mobile browser, if a
     * recipient taps the push notification and the value of the Action property is
     * URL.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline DefaultPushNotificationMessage& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline DefaultPushNotificationMessage& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline DefaultPushNotificationMessage& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}
  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_data;
    bool m_dataHasBeenSet = false;

    bool m_silentPush;
    bool m_silentPushHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
