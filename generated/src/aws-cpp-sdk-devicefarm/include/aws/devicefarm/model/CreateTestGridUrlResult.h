﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace DeviceFarm
{
namespace Model
{
  class CreateTestGridUrlResult
  {
  public:
    AWS_DEVICEFARM_API CreateTestGridUrlResult();
    AWS_DEVICEFARM_API CreateTestGridUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API CreateTestGridUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A signed URL, expiring in <a>CreateTestGridUrlRequest$expiresInSeconds</a>
     * seconds, to be passed to a <code>RemoteWebDriver</code>. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline void SetUrl(const Aws::String& value) { m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_url.assign(value); }
    inline CreateTestGridUrlResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline CreateTestGridUrlResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline CreateTestGridUrlResult& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds the URL from <a>CreateTestGridUrlResult$url</a> stays
     * active.</p>
     */
    inline const Aws::Utils::DateTime& GetExpires() const{ return m_expires; }
    inline void SetExpires(const Aws::Utils::DateTime& value) { m_expires = value; }
    inline void SetExpires(Aws::Utils::DateTime&& value) { m_expires = std::move(value); }
    inline CreateTestGridUrlResult& WithExpires(const Aws::Utils::DateTime& value) { SetExpires(value); return *this;}
    inline CreateTestGridUrlResult& WithExpires(Aws::Utils::DateTime&& value) { SetExpires(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateTestGridUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateTestGridUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateTestGridUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_url;

    Aws::Utils::DateTime m_expires;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
