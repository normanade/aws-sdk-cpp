﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kafka/model/KafkaCluster.h>
#include <aws/kafka/model/ReplicationInfo.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   * <p>Creates a replicator using the specified configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateReplicatorRequest">AWS
   * API Reference</a></p>
   */
  class CreateReplicatorRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API CreateReplicatorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicator"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A summary description of the replicator.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateReplicatorRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateReplicatorRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateReplicatorRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kafka Clusters to use in setting up sources / targets for replication.</p>
     */
    inline const Aws::Vector<KafkaCluster>& GetKafkaClusters() const{ return m_kafkaClusters; }
    inline bool KafkaClustersHasBeenSet() const { return m_kafkaClustersHasBeenSet; }
    inline void SetKafkaClusters(const Aws::Vector<KafkaCluster>& value) { m_kafkaClustersHasBeenSet = true; m_kafkaClusters = value; }
    inline void SetKafkaClusters(Aws::Vector<KafkaCluster>&& value) { m_kafkaClustersHasBeenSet = true; m_kafkaClusters = std::move(value); }
    inline CreateReplicatorRequest& WithKafkaClusters(const Aws::Vector<KafkaCluster>& value) { SetKafkaClusters(value); return *this;}
    inline CreateReplicatorRequest& WithKafkaClusters(Aws::Vector<KafkaCluster>&& value) { SetKafkaClusters(std::move(value)); return *this;}
    inline CreateReplicatorRequest& AddKafkaClusters(const KafkaCluster& value) { m_kafkaClustersHasBeenSet = true; m_kafkaClusters.push_back(value); return *this; }
    inline CreateReplicatorRequest& AddKafkaClusters(KafkaCluster&& value) { m_kafkaClustersHasBeenSet = true; m_kafkaClusters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of replication configurations, where each configuration targets a
     * given source cluster to target cluster replication flow.</p>
     */
    inline const Aws::Vector<ReplicationInfo>& GetReplicationInfoList() const{ return m_replicationInfoList; }
    inline bool ReplicationInfoListHasBeenSet() const { return m_replicationInfoListHasBeenSet; }
    inline void SetReplicationInfoList(const Aws::Vector<ReplicationInfo>& value) { m_replicationInfoListHasBeenSet = true; m_replicationInfoList = value; }
    inline void SetReplicationInfoList(Aws::Vector<ReplicationInfo>&& value) { m_replicationInfoListHasBeenSet = true; m_replicationInfoList = std::move(value); }
    inline CreateReplicatorRequest& WithReplicationInfoList(const Aws::Vector<ReplicationInfo>& value) { SetReplicationInfoList(value); return *this;}
    inline CreateReplicatorRequest& WithReplicationInfoList(Aws::Vector<ReplicationInfo>&& value) { SetReplicationInfoList(std::move(value)); return *this;}
    inline CreateReplicatorRequest& AddReplicationInfoList(const ReplicationInfo& value) { m_replicationInfoListHasBeenSet = true; m_replicationInfoList.push_back(value); return *this; }
    inline CreateReplicatorRequest& AddReplicationInfoList(ReplicationInfo&& value) { m_replicationInfoListHasBeenSet = true; m_replicationInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the replicator. Alpha-numeric characters with '-' are
     * allowed.</p>
     */
    inline const Aws::String& GetReplicatorName() const{ return m_replicatorName; }
    inline bool ReplicatorNameHasBeenSet() const { return m_replicatorNameHasBeenSet; }
    inline void SetReplicatorName(const Aws::String& value) { m_replicatorNameHasBeenSet = true; m_replicatorName = value; }
    inline void SetReplicatorName(Aws::String&& value) { m_replicatorNameHasBeenSet = true; m_replicatorName = std::move(value); }
    inline void SetReplicatorName(const char* value) { m_replicatorNameHasBeenSet = true; m_replicatorName.assign(value); }
    inline CreateReplicatorRequest& WithReplicatorName(const Aws::String& value) { SetReplicatorName(value); return *this;}
    inline CreateReplicatorRequest& WithReplicatorName(Aws::String&& value) { SetReplicatorName(std::move(value)); return *this;}
    inline CreateReplicatorRequest& WithReplicatorName(const char* value) { SetReplicatorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role used by the replicator to access resources in the
     * customer's account (e.g source and target clusters)</p>
     */
    inline const Aws::String& GetServiceExecutionRoleArn() const{ return m_serviceExecutionRoleArn; }
    inline bool ServiceExecutionRoleArnHasBeenSet() const { return m_serviceExecutionRoleArnHasBeenSet; }
    inline void SetServiceExecutionRoleArn(const Aws::String& value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn = value; }
    inline void SetServiceExecutionRoleArn(Aws::String&& value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn = std::move(value); }
    inline void SetServiceExecutionRoleArn(const char* value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn.assign(value); }
    inline CreateReplicatorRequest& WithServiceExecutionRoleArn(const Aws::String& value) { SetServiceExecutionRoleArn(value); return *this;}
    inline CreateReplicatorRequest& WithServiceExecutionRoleArn(Aws::String&& value) { SetServiceExecutionRoleArn(std::move(value)); return *this;}
    inline CreateReplicatorRequest& WithServiceExecutionRoleArn(const char* value) { SetServiceExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of tags to attach to created Replicator.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateReplicatorRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateReplicatorRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateReplicatorRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateReplicatorRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateReplicatorRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateReplicatorRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateReplicatorRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateReplicatorRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateReplicatorRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<KafkaCluster> m_kafkaClusters;
    bool m_kafkaClustersHasBeenSet = false;

    Aws::Vector<ReplicationInfo> m_replicationInfoList;
    bool m_replicationInfoListHasBeenSet = false;

    Aws::String m_replicatorName;
    bool m_replicatorNameHasBeenSet = false;

    Aws::String m_serviceExecutionRoleArn;
    bool m_serviceExecutionRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
