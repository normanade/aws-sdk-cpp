﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/ResourceShare.h>
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
namespace RAM
{
namespace Model
{
  class CreateResourceShareResult
  {
  public:
    AWS_RAM_API CreateResourceShareResult();
    AWS_RAM_API CreateResourceShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API CreateResourceShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object with information about the new resource share.</p>
     */
    inline const ResourceShare& GetResourceShare() const{ return m_resourceShare; }
    inline void SetResourceShare(const ResourceShare& value) { m_resourceShare = value; }
    inline void SetResourceShare(ResourceShare&& value) { m_resourceShare = std::move(value); }
    inline CreateResourceShareResult& WithResourceShare(const ResourceShare& value) { SetResourceShare(value); return *this;}
    inline CreateResourceShareResult& WithResourceShare(ResourceShare&& value) { SetResourceShare(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }
    inline CreateResourceShareResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateResourceShareResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateResourceShareResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateResourceShareResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateResourceShareResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateResourceShareResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ResourceShare m_resourceShare;

    Aws::String m_clientToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
