﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafkaconnect/model/WorkerConfigurationSummary.h>
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
namespace KafkaConnect
{
namespace Model
{
  class ListWorkerConfigurationsResult
  {
  public:
    AWS_KAFKACONNECT_API ListWorkerConfigurationsResult();
    AWS_KAFKACONNECT_API ListWorkerConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API ListWorkerConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWorkerConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkerConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkerConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of worker configuration descriptions.</p>
     */
    inline const Aws::Vector<WorkerConfigurationSummary>& GetWorkerConfigurations() const{ return m_workerConfigurations; }
    inline void SetWorkerConfigurations(const Aws::Vector<WorkerConfigurationSummary>& value) { m_workerConfigurations = value; }
    inline void SetWorkerConfigurations(Aws::Vector<WorkerConfigurationSummary>&& value) { m_workerConfigurations = std::move(value); }
    inline ListWorkerConfigurationsResult& WithWorkerConfigurations(const Aws::Vector<WorkerConfigurationSummary>& value) { SetWorkerConfigurations(value); return *this;}
    inline ListWorkerConfigurationsResult& WithWorkerConfigurations(Aws::Vector<WorkerConfigurationSummary>&& value) { SetWorkerConfigurations(std::move(value)); return *this;}
    inline ListWorkerConfigurationsResult& AddWorkerConfigurations(const WorkerConfigurationSummary& value) { m_workerConfigurations.push_back(value); return *this; }
    inline ListWorkerConfigurationsResult& AddWorkerConfigurations(WorkerConfigurationSummary&& value) { m_workerConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWorkerConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWorkerConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWorkerConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<WorkerConfigurationSummary> m_workerConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
