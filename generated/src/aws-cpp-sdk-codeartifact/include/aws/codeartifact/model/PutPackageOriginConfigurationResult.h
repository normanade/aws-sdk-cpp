﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageOriginConfiguration.h>
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
namespace CodeArtifact
{
namespace Model
{
  class PutPackageOriginConfigurationResult
  {
  public:
    AWS_CODEARTIFACT_API PutPackageOriginConfigurationResult();
    AWS_CODEARTIFACT_API PutPackageOriginConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API PutPackageOriginConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginConfiguration.html">PackageOriginConfiguration</a>
     * object that describes the origin configuration set for the package. It contains
     * a <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that describes how new versions of the package can be introduced to the
     * repository.</p>
     */
    inline const PackageOriginConfiguration& GetOriginConfiguration() const{ return m_originConfiguration; }
    inline void SetOriginConfiguration(const PackageOriginConfiguration& value) { m_originConfiguration = value; }
    inline void SetOriginConfiguration(PackageOriginConfiguration&& value) { m_originConfiguration = std::move(value); }
    inline PutPackageOriginConfigurationResult& WithOriginConfiguration(const PackageOriginConfiguration& value) { SetOriginConfiguration(value); return *this;}
    inline PutPackageOriginConfigurationResult& WithOriginConfiguration(PackageOriginConfiguration&& value) { SetOriginConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutPackageOriginConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutPackageOriginConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutPackageOriginConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PackageOriginConfiguration m_originConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
