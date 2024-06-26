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
  class UpdateScheduledAuditResult
  {
  public:
    AWS_IOT_API UpdateScheduledAuditResult();
    AWS_IOT_API UpdateScheduledAuditResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateScheduledAuditResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline const Aws::String& GetScheduledAuditArn() const{ return m_scheduledAuditArn; }
    inline void SetScheduledAuditArn(const Aws::String& value) { m_scheduledAuditArn = value; }
    inline void SetScheduledAuditArn(Aws::String&& value) { m_scheduledAuditArn = std::move(value); }
    inline void SetScheduledAuditArn(const char* value) { m_scheduledAuditArn.assign(value); }
    inline UpdateScheduledAuditResult& WithScheduledAuditArn(const Aws::String& value) { SetScheduledAuditArn(value); return *this;}
    inline UpdateScheduledAuditResult& WithScheduledAuditArn(Aws::String&& value) { SetScheduledAuditArn(std::move(value)); return *this;}
    inline UpdateScheduledAuditResult& WithScheduledAuditArn(const char* value) { SetScheduledAuditArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateScheduledAuditResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateScheduledAuditResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateScheduledAuditResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_scheduledAuditArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
