﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/ChatChannel.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm-incidents/model/Action.h>
#include <aws/ssm-incidents/model/NotificationTargetItem.h>
#include <aws/ssm-incidents/model/Integration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

  /**
   */
  class UpdateResponsePlanRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API UpdateResponsePlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResponsePlan"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The actions that this response plan takes at the beginning of an
     * incident.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline UpdateResponsePlanRequest& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}
    inline UpdateResponsePlanRequest& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}
    inline UpdateResponsePlanRequest& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline UpdateResponsePlanRequest& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the response plan.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdateResponsePlanRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateResponsePlanRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateResponsePlanRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     * <p>Use the empty structure to remove the chat channel from the response
     * plan.</p>
     */
    inline const ChatChannel& GetChatChannel() const{ return m_chatChannel; }
    inline bool ChatChannelHasBeenSet() const { return m_chatChannelHasBeenSet; }
    inline void SetChatChannel(const ChatChannel& value) { m_chatChannelHasBeenSet = true; m_chatChannel = value; }
    inline void SetChatChannel(ChatChannel&& value) { m_chatChannelHasBeenSet = true; m_chatChannel = std::move(value); }
    inline UpdateResponsePlanRequest& WithChatChannel(const ChatChannel& value) { SetChatChannel(value); return *this;}
    inline UpdateResponsePlanRequest& WithChatChannel(ChatChannel&& value) { SetChatChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateResponsePlanRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateResponsePlanRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateResponsePlanRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long format name of the response plan. The display name can't contain
     * spaces.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdateResponsePlanRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateResponsePlanRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateResponsePlanRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEngagements() const{ return m_engagements; }
    inline bool EngagementsHasBeenSet() const { return m_engagementsHasBeenSet; }
    inline void SetEngagements(const Aws::Vector<Aws::String>& value) { m_engagementsHasBeenSet = true; m_engagements = value; }
    inline void SetEngagements(Aws::Vector<Aws::String>&& value) { m_engagementsHasBeenSet = true; m_engagements = std::move(value); }
    inline UpdateResponsePlanRequest& WithEngagements(const Aws::Vector<Aws::String>& value) { SetEngagements(value); return *this;}
    inline UpdateResponsePlanRequest& WithEngagements(Aws::Vector<Aws::String>&& value) { SetEngagements(std::move(value)); return *this;}
    inline UpdateResponsePlanRequest& AddEngagements(const Aws::String& value) { m_engagementsHasBeenSet = true; m_engagements.push_back(value); return *this; }
    inline UpdateResponsePlanRequest& AddEngagements(Aws::String&& value) { m_engagementsHasBeenSet = true; m_engagements.push_back(std::move(value)); return *this; }
    inline UpdateResponsePlanRequest& AddEngagements(const char* value) { m_engagementsHasBeenSet = true; m_engagements.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string Incident Manager uses to prevent duplicate incidents from being
     * created by the same incident in the same account.</p>
     */
    inline const Aws::String& GetIncidentTemplateDedupeString() const{ return m_incidentTemplateDedupeString; }
    inline bool IncidentTemplateDedupeStringHasBeenSet() const { return m_incidentTemplateDedupeStringHasBeenSet; }
    inline void SetIncidentTemplateDedupeString(const Aws::String& value) { m_incidentTemplateDedupeStringHasBeenSet = true; m_incidentTemplateDedupeString = value; }
    inline void SetIncidentTemplateDedupeString(Aws::String&& value) { m_incidentTemplateDedupeStringHasBeenSet = true; m_incidentTemplateDedupeString = std::move(value); }
    inline void SetIncidentTemplateDedupeString(const char* value) { m_incidentTemplateDedupeStringHasBeenSet = true; m_incidentTemplateDedupeString.assign(value); }
    inline UpdateResponsePlanRequest& WithIncidentTemplateDedupeString(const Aws::String& value) { SetIncidentTemplateDedupeString(value); return *this;}
    inline UpdateResponsePlanRequest& WithIncidentTemplateDedupeString(Aws::String&& value) { SetIncidentTemplateDedupeString(std::move(value)); return *this;}
    inline UpdateResponsePlanRequest& WithIncidentTemplateDedupeString(const char* value) { SetIncidentTemplateDedupeString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the impact to the customers. Providing an impact overwrites the
     * impact provided by a response plan.</p> <p class="title"> <b>Supported impact
     * codes</b> </p> <ul> <li> <p> <code>1</code> - Critical</p> </li> <li> <p>
     * <code>2</code> - High</p> </li> <li> <p> <code>3</code> - Medium</p> </li> <li>
     * <p> <code>4</code> - Low</p> </li> <li> <p> <code>5</code> - No Impact</p> </li>
     * </ul>
     */
    inline int GetIncidentTemplateImpact() const{ return m_incidentTemplateImpact; }
    inline bool IncidentTemplateImpactHasBeenSet() const { return m_incidentTemplateImpactHasBeenSet; }
    inline void SetIncidentTemplateImpact(int value) { m_incidentTemplateImpactHasBeenSet = true; m_incidentTemplateImpact = value; }
    inline UpdateResponsePlanRequest& WithIncidentTemplateImpact(int value) { SetIncidentTemplateImpact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS targets that are notified when updates are made to an
     * incident.</p>
     */
    inline const Aws::Vector<NotificationTargetItem>& GetIncidentTemplateNotificationTargets() const{ return m_incidentTemplateNotificationTargets; }
    inline bool IncidentTemplateNotificationTargetsHasBeenSet() const { return m_incidentTemplateNotificationTargetsHasBeenSet; }
    inline void SetIncidentTemplateNotificationTargets(const Aws::Vector<NotificationTargetItem>& value) { m_incidentTemplateNotificationTargetsHasBeenSet = true; m_incidentTemplateNotificationTargets = value; }
    inline void SetIncidentTemplateNotificationTargets(Aws::Vector<NotificationTargetItem>&& value) { m_incidentTemplateNotificationTargetsHasBeenSet = true; m_incidentTemplateNotificationTargets = std::move(value); }
    inline UpdateResponsePlanRequest& WithIncidentTemplateNotificationTargets(const Aws::Vector<NotificationTargetItem>& value) { SetIncidentTemplateNotificationTargets(value); return *this;}
    inline UpdateResponsePlanRequest& WithIncidentTemplateNotificationTargets(Aws::Vector<NotificationTargetItem>&& value) { SetIncidentTemplateNotificationTargets(std::move(value)); return *this;}
    inline UpdateResponsePlanRequest& AddIncidentTemplateNotificationTargets(const NotificationTargetItem& value) { m_incidentTemplateNotificationTargetsHasBeenSet = true; m_incidentTemplateNotificationTargets.push_back(value); return *this; }
    inline UpdateResponsePlanRequest& AddIncidentTemplateNotificationTargets(NotificationTargetItem&& value) { m_incidentTemplateNotificationTargetsHasBeenSet = true; m_incidentTemplateNotificationTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A brief summary of the incident. This typically contains what has happened,
     * what's currently happening, and next steps.</p>
     */
    inline const Aws::String& GetIncidentTemplateSummary() const{ return m_incidentTemplateSummary; }
    inline bool IncidentTemplateSummaryHasBeenSet() const { return m_incidentTemplateSummaryHasBeenSet; }
    inline void SetIncidentTemplateSummary(const Aws::String& value) { m_incidentTemplateSummaryHasBeenSet = true; m_incidentTemplateSummary = value; }
    inline void SetIncidentTemplateSummary(Aws::String&& value) { m_incidentTemplateSummaryHasBeenSet = true; m_incidentTemplateSummary = std::move(value); }
    inline void SetIncidentTemplateSummary(const char* value) { m_incidentTemplateSummaryHasBeenSet = true; m_incidentTemplateSummary.assign(value); }
    inline UpdateResponsePlanRequest& WithIncidentTemplateSummary(const Aws::String& value) { SetIncidentTemplateSummary(value); return *this;}
    inline UpdateResponsePlanRequest& WithIncidentTemplateSummary(Aws::String&& value) { SetIncidentTemplateSummary(std::move(value)); return *this;}
    inline UpdateResponsePlanRequest& WithIncidentTemplateSummary(const char* value) { SetIncidentTemplateSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to assign to the template. When the <code>StartIncident</code> API
     * action is called, Incident Manager assigns the tags specified in the template to
     * the incident. To call this action, you must also have permission to call the
     * <code>TagResource</code> API action for the incident record resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetIncidentTemplateTags() const{ return m_incidentTemplateTags; }
    inline bool IncidentTemplateTagsHasBeenSet() const { return m_incidentTemplateTagsHasBeenSet; }
    inline void SetIncidentTemplateTags(const Aws::Map<Aws::String, Aws::String>& value) { m_incidentTemplateTagsHasBeenSet = true; m_incidentTemplateTags = value; }
    inline void SetIncidentTemplateTags(Aws::Map<Aws::String, Aws::String>&& value) { m_incidentTemplateTagsHasBeenSet = true; m_incidentTemplateTags = std::move(value); }
    inline UpdateResponsePlanRequest& WithIncidentTemplateTags(const Aws::Map<Aws::String, Aws::String>& value) { SetIncidentTemplateTags(value); return *this;}
    inline UpdateResponsePlanRequest& WithIncidentTemplateTags(Aws::Map<Aws::String, Aws::String>&& value) { SetIncidentTemplateTags(std::move(value)); return *this;}
    inline UpdateResponsePlanRequest& AddIncidentTemplateTags(const Aws::String& key, const Aws::String& value) { m_incidentTemplateTagsHasBeenSet = true; m_incidentTemplateTags.emplace(key, value); return *this; }
    inline UpdateResponsePlanRequest& AddIncidentTemplateTags(Aws::String&& key, const Aws::String& value) { m_incidentTemplateTagsHasBeenSet = true; m_incidentTemplateTags.emplace(std::move(key), value); return *this; }
    inline UpdateResponsePlanRequest& AddIncidentTemplateTags(const Aws::String& key, Aws::String&& value) { m_incidentTemplateTagsHasBeenSet = true; m_incidentTemplateTags.emplace(key, std::move(value)); return *this; }
    inline UpdateResponsePlanRequest& AddIncidentTemplateTags(Aws::String&& key, Aws::String&& value) { m_incidentTemplateTagsHasBeenSet = true; m_incidentTemplateTags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateResponsePlanRequest& AddIncidentTemplateTags(const char* key, Aws::String&& value) { m_incidentTemplateTagsHasBeenSet = true; m_incidentTemplateTags.emplace(key, std::move(value)); return *this; }
    inline UpdateResponsePlanRequest& AddIncidentTemplateTags(Aws::String&& key, const char* value) { m_incidentTemplateTagsHasBeenSet = true; m_incidentTemplateTags.emplace(std::move(key), value); return *this; }
    inline UpdateResponsePlanRequest& AddIncidentTemplateTags(const char* key, const char* value) { m_incidentTemplateTagsHasBeenSet = true; m_incidentTemplateTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The short format name of the incident. The title can't contain spaces.</p>
     */
    inline const Aws::String& GetIncidentTemplateTitle() const{ return m_incidentTemplateTitle; }
    inline bool IncidentTemplateTitleHasBeenSet() const { return m_incidentTemplateTitleHasBeenSet; }
    inline void SetIncidentTemplateTitle(const Aws::String& value) { m_incidentTemplateTitleHasBeenSet = true; m_incidentTemplateTitle = value; }
    inline void SetIncidentTemplateTitle(Aws::String&& value) { m_incidentTemplateTitleHasBeenSet = true; m_incidentTemplateTitle = std::move(value); }
    inline void SetIncidentTemplateTitle(const char* value) { m_incidentTemplateTitleHasBeenSet = true; m_incidentTemplateTitle.assign(value); }
    inline UpdateResponsePlanRequest& WithIncidentTemplateTitle(const Aws::String& value) { SetIncidentTemplateTitle(value); return *this;}
    inline UpdateResponsePlanRequest& WithIncidentTemplateTitle(Aws::String&& value) { SetIncidentTemplateTitle(std::move(value)); return *this;}
    inline UpdateResponsePlanRequest& WithIncidentTemplateTitle(const char* value) { SetIncidentTemplateTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about third-party services integrated into the response plan.</p>
     */
    inline const Aws::Vector<Integration>& GetIntegrations() const{ return m_integrations; }
    inline bool IntegrationsHasBeenSet() const { return m_integrationsHasBeenSet; }
    inline void SetIntegrations(const Aws::Vector<Integration>& value) { m_integrationsHasBeenSet = true; m_integrations = value; }
    inline void SetIntegrations(Aws::Vector<Integration>&& value) { m_integrationsHasBeenSet = true; m_integrations = std::move(value); }
    inline UpdateResponsePlanRequest& WithIntegrations(const Aws::Vector<Integration>& value) { SetIntegrations(value); return *this;}
    inline UpdateResponsePlanRequest& WithIntegrations(Aws::Vector<Integration>&& value) { SetIntegrations(std::move(value)); return *this;}
    inline UpdateResponsePlanRequest& AddIntegrations(const Integration& value) { m_integrationsHasBeenSet = true; m_integrations.push_back(value); return *this; }
    inline UpdateResponsePlanRequest& AddIntegrations(Integration&& value) { m_integrationsHasBeenSet = true; m_integrations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ChatChannel m_chatChannel;
    bool m_chatChannelHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_engagements;
    bool m_engagementsHasBeenSet = false;

    Aws::String m_incidentTemplateDedupeString;
    bool m_incidentTemplateDedupeStringHasBeenSet = false;

    int m_incidentTemplateImpact;
    bool m_incidentTemplateImpactHasBeenSet = false;

    Aws::Vector<NotificationTargetItem> m_incidentTemplateNotificationTargets;
    bool m_incidentTemplateNotificationTargetsHasBeenSet = false;

    Aws::String m_incidentTemplateSummary;
    bool m_incidentTemplateSummaryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_incidentTemplateTags;
    bool m_incidentTemplateTagsHasBeenSet = false;

    Aws::String m_incidentTemplateTitle;
    bool m_incidentTemplateTitleHasBeenSet = false;

    Aws::Vector<Integration> m_integrations;
    bool m_integrationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
