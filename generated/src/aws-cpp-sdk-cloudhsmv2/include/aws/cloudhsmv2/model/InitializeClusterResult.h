﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/ClusterState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudHSMV2
{
namespace Model
{
  class InitializeClusterResult
  {
  public:
    AWS_CLOUDHSMV2_API InitializeClusterResult();
    AWS_CLOUDHSMV2_API InitializeClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSMV2_API InitializeClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The cluster's state.</p>
     */
    inline const ClusterState& GetState() const{ return m_state; }
    inline void SetState(const ClusterState& value) { m_state = value; }
    inline void SetState(ClusterState&& value) { m_state = std::move(value); }
    inline InitializeClusterResult& WithState(const ClusterState& value) { SetState(value); return *this;}
    inline InitializeClusterResult& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the cluster's state.</p>
     */
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }
    inline void SetStateMessage(const Aws::String& value) { m_stateMessage = value; }
    inline void SetStateMessage(Aws::String&& value) { m_stateMessage = std::move(value); }
    inline void SetStateMessage(const char* value) { m_stateMessage.assign(value); }
    inline InitializeClusterResult& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}
    inline InitializeClusterResult& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}
    inline InitializeClusterResult& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InitializeClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InitializeClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InitializeClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ClusterState m_state;

    Aws::String m_stateMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
