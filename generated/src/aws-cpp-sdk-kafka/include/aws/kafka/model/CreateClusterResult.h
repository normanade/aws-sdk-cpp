﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ClusterState.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Kafka
{
namespace Model
{
  class CreateClusterResult
  {
  public:
    AWS_KAFKA_API CreateClusterResult();
    AWS_KAFKA_API CreateClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API CreateClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArn.assign(value); }
    inline CreateClusterResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline CreateClusterResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline CreateClusterResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The name of the MSK cluster.</p>
         
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline void SetClusterName(const Aws::String& value) { m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterName.assign(value); }
    inline CreateClusterResult& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline CreateClusterResult& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline CreateClusterResult& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The state of the cluster. The possible states are ACTIVE,
     * CREATING, DELETING, FAILED, HEALING, MAINTENANCE, REBOOTING_BROKER, and
     * UPDATING.</p>
         
     */
    inline const ClusterState& GetState() const{ return m_state; }
    inline void SetState(const ClusterState& value) { m_state = value; }
    inline void SetState(ClusterState&& value) { m_state = std::move(value); }
    inline CreateClusterResult& WithState(const ClusterState& value) { SetState(value); return *this;}
    inline CreateClusterResult& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;

    Aws::String m_clusterName;

    ClusterState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
