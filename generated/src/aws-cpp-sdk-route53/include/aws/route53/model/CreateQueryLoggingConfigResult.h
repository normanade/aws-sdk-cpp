﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/QueryLoggingConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  class CreateQueryLoggingConfigResult
  {
  public:
    AWS_ROUTE53_API CreateQueryLoggingConfigResult();
    AWS_ROUTE53_API CreateQueryLoggingConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API CreateQueryLoggingConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains the ID for a query logging configuration, the ID
     * of the hosted zone that you want to log queries for, and the ARN for the log
     * group that you want Amazon Route 53 to send query logs to.</p>
     */
    inline const QueryLoggingConfig& GetQueryLoggingConfig() const{ return m_queryLoggingConfig; }
    inline void SetQueryLoggingConfig(const QueryLoggingConfig& value) { m_queryLoggingConfig = value; }
    inline void SetQueryLoggingConfig(QueryLoggingConfig&& value) { m_queryLoggingConfig = std::move(value); }
    inline CreateQueryLoggingConfigResult& WithQueryLoggingConfig(const QueryLoggingConfig& value) { SetQueryLoggingConfig(value); return *this;}
    inline CreateQueryLoggingConfigResult& WithQueryLoggingConfig(QueryLoggingConfig&& value) { SetQueryLoggingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique URL representing the new query logging configuration.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline CreateQueryLoggingConfigResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline CreateQueryLoggingConfigResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline CreateQueryLoggingConfigResult& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateQueryLoggingConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateQueryLoggingConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateQueryLoggingConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    QueryLoggingConfig m_queryLoggingConfig;

    Aws::String m_location;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
