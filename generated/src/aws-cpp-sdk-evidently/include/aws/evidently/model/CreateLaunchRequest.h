﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/ScheduledSplitsLaunchConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/evidently/model/LaunchGroupConfig.h>
#include <aws/evidently/model/MetricMonitorConfig.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class CreateLaunchRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API CreateLaunchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLaunch"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An optional description for the launch.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateLaunchRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateLaunchRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateLaunchRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that contains the feature and variations that are to
     * be used for the launch.</p>
     */
    inline const Aws::Vector<LaunchGroupConfig>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<LaunchGroupConfig>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<LaunchGroupConfig>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline CreateLaunchRequest& WithGroups(const Aws::Vector<LaunchGroupConfig>& value) { SetGroups(value); return *this;}
    inline CreateLaunchRequest& WithGroups(Aws::Vector<LaunchGroupConfig>&& value) { SetGroups(std::move(value)); return *this;}
    inline CreateLaunchRequest& AddGroups(const LaunchGroupConfig& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline CreateLaunchRequest& AddGroups(LaunchGroupConfig&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the metrics that will be used to monitor
     * the launch performance.</p>
     */
    inline const Aws::Vector<MetricMonitorConfig>& GetMetricMonitors() const{ return m_metricMonitors; }
    inline bool MetricMonitorsHasBeenSet() const { return m_metricMonitorsHasBeenSet; }
    inline void SetMetricMonitors(const Aws::Vector<MetricMonitorConfig>& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors = value; }
    inline void SetMetricMonitors(Aws::Vector<MetricMonitorConfig>&& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors = std::move(value); }
    inline CreateLaunchRequest& WithMetricMonitors(const Aws::Vector<MetricMonitorConfig>& value) { SetMetricMonitors(value); return *this;}
    inline CreateLaunchRequest& WithMetricMonitors(Aws::Vector<MetricMonitorConfig>&& value) { SetMetricMonitors(std::move(value)); return *this;}
    inline CreateLaunchRequest& AddMetricMonitors(const MetricMonitorConfig& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors.push_back(value); return *this; }
    inline CreateLaunchRequest& AddMetricMonitors(MetricMonitorConfig&& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name for the new launch.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateLaunchRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateLaunchRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateLaunchRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that you want to create the launch in.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }
    inline CreateLaunchRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}
    inline CreateLaunchRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}
    inline CreateLaunchRequest& WithProject(const char* value) { SetProject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When Evidently assigns a particular user session to a launch, it must use a
     * randomization ID to determine which variation the user session is served. This
     * randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>. If you omit <code>randomizationSalt</code>,
     * Evidently uses the launch name as the <code>randomizationSalt</code>.</p>
     */
    inline const Aws::String& GetRandomizationSalt() const{ return m_randomizationSalt; }
    inline bool RandomizationSaltHasBeenSet() const { return m_randomizationSaltHasBeenSet; }
    inline void SetRandomizationSalt(const Aws::String& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = value; }
    inline void SetRandomizationSalt(Aws::String&& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = std::move(value); }
    inline void SetRandomizationSalt(const char* value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt.assign(value); }
    inline CreateLaunchRequest& WithRandomizationSalt(const Aws::String& value) { SetRandomizationSalt(value); return *this;}
    inline CreateLaunchRequest& WithRandomizationSalt(Aws::String&& value) { SetRandomizationSalt(std::move(value)); return *this;}
    inline CreateLaunchRequest& WithRandomizationSalt(const char* value) { SetRandomizationSalt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch.</p>
     */
    inline const ScheduledSplitsLaunchConfig& GetScheduledSplitsConfig() const{ return m_scheduledSplitsConfig; }
    inline bool ScheduledSplitsConfigHasBeenSet() const { return m_scheduledSplitsConfigHasBeenSet; }
    inline void SetScheduledSplitsConfig(const ScheduledSplitsLaunchConfig& value) { m_scheduledSplitsConfigHasBeenSet = true; m_scheduledSplitsConfig = value; }
    inline void SetScheduledSplitsConfig(ScheduledSplitsLaunchConfig&& value) { m_scheduledSplitsConfigHasBeenSet = true; m_scheduledSplitsConfig = std::move(value); }
    inline CreateLaunchRequest& WithScheduledSplitsConfig(const ScheduledSplitsLaunchConfig& value) { SetScheduledSplitsConfig(value); return *this;}
    inline CreateLaunchRequest& WithScheduledSplitsConfig(ScheduledSplitsLaunchConfig&& value) { SetScheduledSplitsConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigns one or more tags (key-value pairs) to the launch.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <p>You can associate as many as 50 tags with a launch.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateLaunchRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateLaunchRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateLaunchRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateLaunchRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateLaunchRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateLaunchRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateLaunchRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateLaunchRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateLaunchRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<LaunchGroupConfig> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::Vector<MetricMonitorConfig> m_metricMonitors;
    bool m_metricMonitorsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::String m_randomizationSalt;
    bool m_randomizationSaltHasBeenSet = false;

    ScheduledSplitsLaunchConfig m_scheduledSplitsConfig;
    bool m_scheduledSplitsConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
