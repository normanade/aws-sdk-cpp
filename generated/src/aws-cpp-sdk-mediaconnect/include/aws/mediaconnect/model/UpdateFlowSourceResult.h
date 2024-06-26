﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Source.h>
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
namespace MediaConnect
{
namespace Model
{
  class UpdateFlowSourceResult
  {
  public:
    AWS_MEDIACONNECT_API UpdateFlowSourceResult();
    AWS_MEDIACONNECT_API UpdateFlowSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API UpdateFlowSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the flow that you want to update.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }
    inline UpdateFlowSourceResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline UpdateFlowSourceResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline UpdateFlowSourceResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The settings for the source of the flow.
     */
    inline const Source& GetSource() const{ return m_source; }
    inline void SetSource(const Source& value) { m_source = value; }
    inline void SetSource(Source&& value) { m_source = std::move(value); }
    inline UpdateFlowSourceResult& WithSource(const Source& value) { SetSource(value); return *this;}
    inline UpdateFlowSourceResult& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateFlowSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateFlowSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateFlowSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;

    Source m_source;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
