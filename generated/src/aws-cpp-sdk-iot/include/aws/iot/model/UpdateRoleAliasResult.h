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
  class UpdateRoleAliasResult
  {
  public:
    AWS_IOT_API UpdateRoleAliasResult();
    AWS_IOT_API UpdateRoleAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateRoleAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The role alias.</p>
     */
    inline const Aws::String& GetRoleAlias() const{ return m_roleAlias; }
    inline void SetRoleAlias(const Aws::String& value) { m_roleAlias = value; }
    inline void SetRoleAlias(Aws::String&& value) { m_roleAlias = std::move(value); }
    inline void SetRoleAlias(const char* value) { m_roleAlias.assign(value); }
    inline UpdateRoleAliasResult& WithRoleAlias(const Aws::String& value) { SetRoleAlias(value); return *this;}
    inline UpdateRoleAliasResult& WithRoleAlias(Aws::String&& value) { SetRoleAlias(std::move(value)); return *this;}
    inline UpdateRoleAliasResult& WithRoleAlias(const char* value) { SetRoleAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role alias ARN.</p>
     */
    inline const Aws::String& GetRoleAliasArn() const{ return m_roleAliasArn; }
    inline void SetRoleAliasArn(const Aws::String& value) { m_roleAliasArn = value; }
    inline void SetRoleAliasArn(Aws::String&& value) { m_roleAliasArn = std::move(value); }
    inline void SetRoleAliasArn(const char* value) { m_roleAliasArn.assign(value); }
    inline UpdateRoleAliasResult& WithRoleAliasArn(const Aws::String& value) { SetRoleAliasArn(value); return *this;}
    inline UpdateRoleAliasResult& WithRoleAliasArn(Aws::String&& value) { SetRoleAliasArn(std::move(value)); return *this;}
    inline UpdateRoleAliasResult& WithRoleAliasArn(const char* value) { SetRoleAliasArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateRoleAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateRoleAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateRoleAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_roleAlias;

    Aws::String m_roleAliasArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
