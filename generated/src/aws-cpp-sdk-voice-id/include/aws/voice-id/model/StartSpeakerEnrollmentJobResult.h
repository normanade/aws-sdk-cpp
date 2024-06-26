﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/SpeakerEnrollmentJob.h>
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
namespace VoiceID
{
namespace Model
{
  class StartSpeakerEnrollmentJobResult
  {
  public:
    AWS_VOICEID_API StartSpeakerEnrollmentJobResult();
    AWS_VOICEID_API StartSpeakerEnrollmentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API StartSpeakerEnrollmentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the started speaker enrollment job.</p>
     */
    inline const SpeakerEnrollmentJob& GetJob() const{ return m_job; }
    inline void SetJob(const SpeakerEnrollmentJob& value) { m_job = value; }
    inline void SetJob(SpeakerEnrollmentJob&& value) { m_job = std::move(value); }
    inline StartSpeakerEnrollmentJobResult& WithJob(const SpeakerEnrollmentJob& value) { SetJob(value); return *this;}
    inline StartSpeakerEnrollmentJobResult& WithJob(SpeakerEnrollmentJob&& value) { SetJob(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartSpeakerEnrollmentJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartSpeakerEnrollmentJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartSpeakerEnrollmentJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SpeakerEnrollmentJob m_job;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
