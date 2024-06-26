﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/RetentionConfiguration.h>
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
namespace ConfigService
{
namespace Model
{
  class DescribeRetentionConfigurationsResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeRetentionConfigurationsResult();
    AWS_CONFIGSERVICE_API DescribeRetentionConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeRetentionConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline const Aws::Vector<RetentionConfiguration>& GetRetentionConfigurations() const{ return m_retentionConfigurations; }
    inline void SetRetentionConfigurations(const Aws::Vector<RetentionConfiguration>& value) { m_retentionConfigurations = value; }
    inline void SetRetentionConfigurations(Aws::Vector<RetentionConfiguration>&& value) { m_retentionConfigurations = std::move(value); }
    inline DescribeRetentionConfigurationsResult& WithRetentionConfigurations(const Aws::Vector<RetentionConfiguration>& value) { SetRetentionConfigurations(value); return *this;}
    inline DescribeRetentionConfigurationsResult& WithRetentionConfigurations(Aws::Vector<RetentionConfiguration>&& value) { SetRetentionConfigurations(std::move(value)); return *this;}
    inline DescribeRetentionConfigurationsResult& AddRetentionConfigurations(const RetentionConfiguration& value) { m_retentionConfigurations.push_back(value); return *this; }
    inline DescribeRetentionConfigurationsResult& AddRetentionConfigurations(RetentionConfiguration&& value) { m_retentionConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeRetentionConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeRetentionConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeRetentionConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRetentionConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRetentionConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRetentionConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RetentionConfiguration> m_retentionConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
