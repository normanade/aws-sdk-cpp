﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/SourceServer.h>
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
namespace drs
{
namespace Model
{
  class StartReplicationResult
  {
  public:
    AWS_DRS_API StartReplicationResult();
    AWS_DRS_API StartReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API StartReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Source Server that this action was targeted on.</p>
     */
    inline const SourceServer& GetSourceServer() const{ return m_sourceServer; }
    inline void SetSourceServer(const SourceServer& value) { m_sourceServer = value; }
    inline void SetSourceServer(SourceServer&& value) { m_sourceServer = std::move(value); }
    inline StartReplicationResult& WithSourceServer(const SourceServer& value) { SetSourceServer(value); return *this;}
    inline StartReplicationResult& WithSourceServer(SourceServer&& value) { SetSourceServer(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartReplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartReplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartReplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SourceServer m_sourceServer;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
