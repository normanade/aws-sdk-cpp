﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/InboundCrossClusterSearchConnection.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>The result of a <code><a>DeleteInboundCrossClusterSearchConnection</a></code>
   * operation. Contains details of deleted inbound connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteInboundCrossClusterSearchConnectionResponse">AWS
   * API Reference</a></p>
   */
  class DeleteInboundCrossClusterSearchConnectionResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DeleteInboundCrossClusterSearchConnectionResult();
    AWS_ELASTICSEARCHSERVICE_API DeleteInboundCrossClusterSearchConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DeleteInboundCrossClusterSearchConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the <code><a>InboundCrossClusterSearchConnection</a></code> of
     * deleted inbound connection. </p>
     */
    inline const InboundCrossClusterSearchConnection& GetCrossClusterSearchConnection() const{ return m_crossClusterSearchConnection; }
    inline void SetCrossClusterSearchConnection(const InboundCrossClusterSearchConnection& value) { m_crossClusterSearchConnection = value; }
    inline void SetCrossClusterSearchConnection(InboundCrossClusterSearchConnection&& value) { m_crossClusterSearchConnection = std::move(value); }
    inline DeleteInboundCrossClusterSearchConnectionResult& WithCrossClusterSearchConnection(const InboundCrossClusterSearchConnection& value) { SetCrossClusterSearchConnection(value); return *this;}
    inline DeleteInboundCrossClusterSearchConnectionResult& WithCrossClusterSearchConnection(InboundCrossClusterSearchConnection&& value) { SetCrossClusterSearchConnection(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteInboundCrossClusterSearchConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteInboundCrossClusterSearchConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteInboundCrossClusterSearchConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    InboundCrossClusterSearchConnection m_crossClusterSearchConnection;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
