﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>CreateInstance</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateInstanceResult">AWS
   * API Reference</a></p>
   */
  class CreateInstanceResult
  {
  public:
    AWS_OPSWORKS_API CreateInstanceResult();
    AWS_OPSWORKS_API CreateInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API CreateInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }
    inline CreateInstanceResult& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline CreateInstanceResult& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline CreateInstanceResult& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
