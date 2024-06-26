﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/VersionInformation.h>
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
namespace Greengrass
{
namespace Model
{
  class ListDeviceDefinitionVersionsResult
  {
  public:
    AWS_GREENGRASS_API ListDeviceDefinitionVersionsResult();
    AWS_GREENGRASS_API ListDeviceDefinitionVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API ListDeviceDefinitionVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDeviceDefinitionVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDeviceDefinitionVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDeviceDefinitionVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * Information about a version.
     */
    inline const Aws::Vector<VersionInformation>& GetVersions() const{ return m_versions; }
    inline void SetVersions(const Aws::Vector<VersionInformation>& value) { m_versions = value; }
    inline void SetVersions(Aws::Vector<VersionInformation>&& value) { m_versions = std::move(value); }
    inline ListDeviceDefinitionVersionsResult& WithVersions(const Aws::Vector<VersionInformation>& value) { SetVersions(value); return *this;}
    inline ListDeviceDefinitionVersionsResult& WithVersions(Aws::Vector<VersionInformation>&& value) { SetVersions(std::move(value)); return *this;}
    inline ListDeviceDefinitionVersionsResult& AddVersions(const VersionInformation& value) { m_versions.push_back(value); return *this; }
    inline ListDeviceDefinitionVersionsResult& AddVersions(VersionInformation&& value) { m_versions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDeviceDefinitionVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDeviceDefinitionVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDeviceDefinitionVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<VersionInformation> m_versions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
