﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/KeyMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/Tag.h>
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
namespace KMS
{
namespace Model
{
  class ReplicateKeyResult
  {
  public:
    AWS_KMS_API ReplicateKeyResult();
    AWS_KMS_API ReplicateKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API ReplicateKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Displays details about the new replica key, including its Amazon Resource
     * Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a>. It also includes the ARN and Amazon Web Services Region
     * of its primary key and other replica keys.</p>
     */
    inline const KeyMetadata& GetReplicaKeyMetadata() const{ return m_replicaKeyMetadata; }
    inline void SetReplicaKeyMetadata(const KeyMetadata& value) { m_replicaKeyMetadata = value; }
    inline void SetReplicaKeyMetadata(KeyMetadata&& value) { m_replicaKeyMetadata = std::move(value); }
    inline ReplicateKeyResult& WithReplicaKeyMetadata(const KeyMetadata& value) { SetReplicaKeyMetadata(value); return *this;}
    inline ReplicateKeyResult& WithReplicaKeyMetadata(KeyMetadata&& value) { SetReplicaKeyMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key policy of the new replica key. The value is a key policy document in
     * JSON format.</p>
     */
    inline const Aws::String& GetReplicaPolicy() const{ return m_replicaPolicy; }
    inline void SetReplicaPolicy(const Aws::String& value) { m_replicaPolicy = value; }
    inline void SetReplicaPolicy(Aws::String&& value) { m_replicaPolicy = std::move(value); }
    inline void SetReplicaPolicy(const char* value) { m_replicaPolicy.assign(value); }
    inline ReplicateKeyResult& WithReplicaPolicy(const Aws::String& value) { SetReplicaPolicy(value); return *this;}
    inline ReplicateKeyResult& WithReplicaPolicy(Aws::String&& value) { SetReplicaPolicy(std::move(value)); return *this;}
    inline ReplicateKeyResult& WithReplicaPolicy(const char* value) { SetReplicaPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags on the new replica key. The value is a list of tag key and tag value
     * pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetReplicaTags() const{ return m_replicaTags; }
    inline void SetReplicaTags(const Aws::Vector<Tag>& value) { m_replicaTags = value; }
    inline void SetReplicaTags(Aws::Vector<Tag>&& value) { m_replicaTags = std::move(value); }
    inline ReplicateKeyResult& WithReplicaTags(const Aws::Vector<Tag>& value) { SetReplicaTags(value); return *this;}
    inline ReplicateKeyResult& WithReplicaTags(Aws::Vector<Tag>&& value) { SetReplicaTags(std::move(value)); return *this;}
    inline ReplicateKeyResult& AddReplicaTags(const Tag& value) { m_replicaTags.push_back(value); return *this; }
    inline ReplicateKeyResult& AddReplicaTags(Tag&& value) { m_replicaTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ReplicateKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ReplicateKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ReplicateKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    KeyMetadata m_replicaKeyMetadata;

    Aws::String m_replicaPolicy;

    Aws::Vector<Tag> m_replicaTags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
