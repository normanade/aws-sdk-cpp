﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-instance-connect/EC2InstanceConnect_EXPORTS.h>
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
namespace EC2InstanceConnect
{
namespace Model
{
  class SendSSHPublicKeyResult
  {
  public:
    AWS_EC2INSTANCECONNECT_API SendSSHPublicKeyResult();
    AWS_EC2INSTANCECONNECT_API SendSSHPublicKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EC2INSTANCECONNECT_API SendSSHPublicKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SendSSHPublicKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SendSSHPublicKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SendSSHPublicKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Is true if the request succeeds and an error otherwise.</p>
     */
    inline bool GetSuccess() const{ return m_success; }
    inline void SetSuccess(bool value) { m_success = value; }
    inline SendSSHPublicKeyResult& WithSuccess(bool value) { SetSuccess(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    bool m_success;
  };

} // namespace Model
} // namespace EC2InstanceConnect
} // namespace Aws
