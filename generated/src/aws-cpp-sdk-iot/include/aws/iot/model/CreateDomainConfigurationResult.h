﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class CreateDomainConfigurationResult
  {
  public:
    AWS_IOT_API CreateDomainConfigurationResult();
    AWS_IOT_API CreateDomainConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateDomainConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationName() const{ return m_domainConfigurationName; }
    inline void SetDomainConfigurationName(const Aws::String& value) { m_domainConfigurationName = value; }
    inline void SetDomainConfigurationName(Aws::String&& value) { m_domainConfigurationName = std::move(value); }
    inline void SetDomainConfigurationName(const char* value) { m_domainConfigurationName.assign(value); }
    inline CreateDomainConfigurationResult& WithDomainConfigurationName(const Aws::String& value) { SetDomainConfigurationName(value); return *this;}
    inline CreateDomainConfigurationResult& WithDomainConfigurationName(Aws::String&& value) { SetDomainConfigurationName(std::move(value)); return *this;}
    inline CreateDomainConfigurationResult& WithDomainConfigurationName(const char* value) { SetDomainConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationArn() const{ return m_domainConfigurationArn; }
    inline void SetDomainConfigurationArn(const Aws::String& value) { m_domainConfigurationArn = value; }
    inline void SetDomainConfigurationArn(Aws::String&& value) { m_domainConfigurationArn = std::move(value); }
    inline void SetDomainConfigurationArn(const char* value) { m_domainConfigurationArn.assign(value); }
    inline CreateDomainConfigurationResult& WithDomainConfigurationArn(const Aws::String& value) { SetDomainConfigurationArn(value); return *this;}
    inline CreateDomainConfigurationResult& WithDomainConfigurationArn(Aws::String&& value) { SetDomainConfigurationArn(std::move(value)); return *this;}
    inline CreateDomainConfigurationResult& WithDomainConfigurationArn(const char* value) { SetDomainConfigurationArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDomainConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDomainConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDomainConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainConfigurationName;

    Aws::String m_domainConfigurationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
