﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotdeviceadvisor/model/SuiteDefinitionConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoTDeviceAdvisor
{
namespace Model
{
  class GetSuiteDefinitionResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API GetSuiteDefinitionResult();
    AWS_IOTDEVICEADVISOR_API GetSuiteDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API GetSuiteDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Suite definition ID of the suite definition.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionId = value; }
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionId = std::move(value); }
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionId.assign(value); }
    inline GetSuiteDefinitionResult& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}
    inline GetSuiteDefinitionResult& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}
    inline GetSuiteDefinitionResult& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the suite definition.</p>
     */
    inline const Aws::String& GetSuiteDefinitionArn() const{ return m_suiteDefinitionArn; }
    inline void SetSuiteDefinitionArn(const Aws::String& value) { m_suiteDefinitionArn = value; }
    inline void SetSuiteDefinitionArn(Aws::String&& value) { m_suiteDefinitionArn = std::move(value); }
    inline void SetSuiteDefinitionArn(const char* value) { m_suiteDefinitionArn.assign(value); }
    inline GetSuiteDefinitionResult& WithSuiteDefinitionArn(const Aws::String& value) { SetSuiteDefinitionArn(value); return *this;}
    inline GetSuiteDefinitionResult& WithSuiteDefinitionArn(Aws::String&& value) { SetSuiteDefinitionArn(std::move(value)); return *this;}
    inline GetSuiteDefinitionResult& WithSuiteDefinitionArn(const char* value) { SetSuiteDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite definition version of the suite definition.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const{ return m_suiteDefinitionVersion; }
    inline void SetSuiteDefinitionVersion(const Aws::String& value) { m_suiteDefinitionVersion = value; }
    inline void SetSuiteDefinitionVersion(Aws::String&& value) { m_suiteDefinitionVersion = std::move(value); }
    inline void SetSuiteDefinitionVersion(const char* value) { m_suiteDefinitionVersion.assign(value); }
    inline GetSuiteDefinitionResult& WithSuiteDefinitionVersion(const Aws::String& value) { SetSuiteDefinitionVersion(value); return *this;}
    inline GetSuiteDefinitionResult& WithSuiteDefinitionVersion(Aws::String&& value) { SetSuiteDefinitionVersion(std::move(value)); return *this;}
    inline GetSuiteDefinitionResult& WithSuiteDefinitionVersion(const char* value) { SetSuiteDefinitionVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Latest suite definition version of the suite definition.</p>
     */
    inline const Aws::String& GetLatestVersion() const{ return m_latestVersion; }
    inline void SetLatestVersion(const Aws::String& value) { m_latestVersion = value; }
    inline void SetLatestVersion(Aws::String&& value) { m_latestVersion = std::move(value); }
    inline void SetLatestVersion(const char* value) { m_latestVersion.assign(value); }
    inline GetSuiteDefinitionResult& WithLatestVersion(const Aws::String& value) { SetLatestVersion(value); return *this;}
    inline GetSuiteDefinitionResult& WithLatestVersion(Aws::String&& value) { SetLatestVersion(std::move(value)); return *this;}
    inline GetSuiteDefinitionResult& WithLatestVersion(const char* value) { SetLatestVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite configuration of the suite definition.</p>
     */
    inline const SuiteDefinitionConfiguration& GetSuiteDefinitionConfiguration() const{ return m_suiteDefinitionConfiguration; }
    inline void SetSuiteDefinitionConfiguration(const SuiteDefinitionConfiguration& value) { m_suiteDefinitionConfiguration = value; }
    inline void SetSuiteDefinitionConfiguration(SuiteDefinitionConfiguration&& value) { m_suiteDefinitionConfiguration = std::move(value); }
    inline GetSuiteDefinitionResult& WithSuiteDefinitionConfiguration(const SuiteDefinitionConfiguration& value) { SetSuiteDefinitionConfiguration(value); return *this;}
    inline GetSuiteDefinitionResult& WithSuiteDefinitionConfiguration(SuiteDefinitionConfiguration&& value) { SetSuiteDefinitionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date (in Unix epoch time) when the suite definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetSuiteDefinitionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetSuiteDefinitionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date (in Unix epoch time) when the suite definition was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAt = value; }
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAt = std::move(value); }
    inline GetSuiteDefinitionResult& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}
    inline GetSuiteDefinitionResult& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags attached to the suite definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetSuiteDefinitionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetSuiteDefinitionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetSuiteDefinitionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetSuiteDefinitionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetSuiteDefinitionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetSuiteDefinitionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetSuiteDefinitionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetSuiteDefinitionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetSuiteDefinitionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSuiteDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSuiteDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSuiteDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_suiteDefinitionId;

    Aws::String m_suiteDefinitionArn;

    Aws::String m_suiteDefinitionVersion;

    Aws::String m_latestVersion;

    SuiteDefinitionConfiguration m_suiteDefinitionConfiguration;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastModifiedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
