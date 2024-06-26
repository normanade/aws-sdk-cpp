﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudcontrol/model/ResourceDescription.h>
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
namespace CloudControlApi
{
namespace Model
{
  class GetResourceResult
  {
  public:
    AWS_CLOUDCONTROLAPI_API GetResourceResult();
    AWS_CLOUDCONTROLAPI_API GetResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDCONTROLAPI_API GetResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the resource type.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline void SetTypeName(const Aws::String& value) { m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeName.assign(value); }
    inline GetResourceResult& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline GetResourceResult& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline GetResourceResult& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    
    inline const ResourceDescription& GetResourceDescription() const{ return m_resourceDescription; }
    inline void SetResourceDescription(const ResourceDescription& value) { m_resourceDescription = value; }
    inline void SetResourceDescription(ResourceDescription&& value) { m_resourceDescription = std::move(value); }
    inline GetResourceResult& WithResourceDescription(const ResourceDescription& value) { SetResourceDescription(value); return *this;}
    inline GetResourceResult& WithResourceDescription(ResourceDescription&& value) { SetResourceDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_typeName;

    ResourceDescription m_resourceDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
