﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{
  class GetActivityTaskResult
  {
  public:
    AWS_SFN_API GetActivityTaskResult();
    AWS_SFN_API GetActivityTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API GetActivityTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token that identifies the scheduled task. This token must be copied and
     * included in subsequent calls to <a>SendTaskHeartbeat</a>, <a>SendTaskSuccess</a>
     * or <a>SendTaskFailure</a> in order to report the progress or completion of the
     * task.</p>
     */
    inline const Aws::String& GetTaskToken() const{ return m_taskToken; }
    inline void SetTaskToken(const Aws::String& value) { m_taskToken = value; }
    inline void SetTaskToken(Aws::String&& value) { m_taskToken = std::move(value); }
    inline void SetTaskToken(const char* value) { m_taskToken.assign(value); }
    inline GetActivityTaskResult& WithTaskToken(const Aws::String& value) { SetTaskToken(value); return *this;}
    inline GetActivityTaskResult& WithTaskToken(Aws::String&& value) { SetTaskToken(std::move(value)); return *this;}
    inline GetActivityTaskResult& WithTaskToken(const char* value) { SetTaskToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string that contains the JSON input data for the task. Length constraints
     * apply to the payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline void SetInput(const Aws::String& value) { m_input = value; }
    inline void SetInput(Aws::String&& value) { m_input = std::move(value); }
    inline void SetInput(const char* value) { m_input.assign(value); }
    inline GetActivityTaskResult& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline GetActivityTaskResult& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline GetActivityTaskResult& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetActivityTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetActivityTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetActivityTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_taskToken;

    Aws::String m_input;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
