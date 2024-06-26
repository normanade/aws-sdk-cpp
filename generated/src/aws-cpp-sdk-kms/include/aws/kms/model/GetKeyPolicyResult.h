﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
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
namespace KMS
{
namespace Model
{
  class GetKeyPolicyResult
  {
  public:
    AWS_KMS_API GetKeyPolicyResult();
    AWS_KMS_API GetKeyPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GetKeyPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A key policy document in JSON format.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policy.assign(value); }
    inline GetKeyPolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline GetKeyPolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline GetKeyPolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key policy. The only valid value is <code>default</code>.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline void SetPolicyName(const Aws::String& value) { m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyName.assign(value); }
    inline GetKeyPolicyResult& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline GetKeyPolicyResult& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline GetKeyPolicyResult& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetKeyPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetKeyPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetKeyPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_policy;

    Aws::String m_policyName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
