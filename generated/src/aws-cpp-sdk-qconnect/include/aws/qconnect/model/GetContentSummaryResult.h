﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ContentSummary.h>
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
namespace QConnect
{
namespace Model
{
  class GetContentSummaryResult
  {
  public:
    AWS_QCONNECT_API GetContentSummaryResult();
    AWS_QCONNECT_API GetContentSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API GetContentSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The content summary.</p>
     */
    inline const ContentSummary& GetContentSummary() const{ return m_contentSummary; }
    inline void SetContentSummary(const ContentSummary& value) { m_contentSummary = value; }
    inline void SetContentSummary(ContentSummary&& value) { m_contentSummary = std::move(value); }
    inline GetContentSummaryResult& WithContentSummary(const ContentSummary& value) { SetContentSummary(value); return *this;}
    inline GetContentSummaryResult& WithContentSummary(ContentSummary&& value) { SetContentSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetContentSummaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetContentSummaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetContentSummaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ContentSummary m_contentSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
