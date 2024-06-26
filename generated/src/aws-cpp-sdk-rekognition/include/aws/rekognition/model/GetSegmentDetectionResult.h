﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/VideoJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Video.h>
#include <aws/rekognition/model/VideoMetadata.h>
#include <aws/rekognition/model/AudioMetadata.h>
#include <aws/rekognition/model/SegmentDetection.h>
#include <aws/rekognition/model/SegmentTypeInfo.h>
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
namespace Rekognition
{
namespace Model
{
  class GetSegmentDetectionResult
  {
  public:
    AWS_REKOGNITION_API GetSegmentDetectionResult();
    AWS_REKOGNITION_API GetSegmentDetectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetSegmentDetectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Current status of the segment detection job.</p>
     */
    inline const VideoJobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline void SetJobStatus(const VideoJobStatus& value) { m_jobStatus = value; }
    inline void SetJobStatus(VideoJobStatus&& value) { m_jobStatus = std::move(value); }
    inline GetSegmentDetectionResult& WithJobStatus(const VideoJobStatus& value) { SetJobStatus(value); return *this;}
    inline GetSegmentDetectionResult& WithJobStatus(VideoJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetSegmentDetectionResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetSegmentDetectionResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetSegmentDetectionResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Currently, Amazon Rekognition Video returns a single object in the
     * <code>VideoMetadata</code> array. The object contains information about the
     * video stream in the input file that Amazon Rekognition Video chose to analyze.
     * The <code>VideoMetadata</code> object includes the video codec, video format and
     * other information. Video metadata is returned in each page of information
     * returned by <code>GetSegmentDetection</code>.</p>
     */
    inline const Aws::Vector<VideoMetadata>& GetVideoMetadata() const{ return m_videoMetadata; }
    inline void SetVideoMetadata(const Aws::Vector<VideoMetadata>& value) { m_videoMetadata = value; }
    inline void SetVideoMetadata(Aws::Vector<VideoMetadata>&& value) { m_videoMetadata = std::move(value); }
    inline GetSegmentDetectionResult& WithVideoMetadata(const Aws::Vector<VideoMetadata>& value) { SetVideoMetadata(value); return *this;}
    inline GetSegmentDetectionResult& WithVideoMetadata(Aws::Vector<VideoMetadata>&& value) { SetVideoMetadata(std::move(value)); return *this;}
    inline GetSegmentDetectionResult& AddVideoMetadata(const VideoMetadata& value) { m_videoMetadata.push_back(value); return *this; }
    inline GetSegmentDetectionResult& AddVideoMetadata(VideoMetadata&& value) { m_videoMetadata.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects. There can be multiple audio streams. Each
     * <code>AudioMetadata</code> object contains metadata for a single audio stream.
     * Audio information in an <code>AudioMetadata</code> objects includes the audio
     * codec, the number of audio channels, the duration of the audio stream, and the
     * sample rate. Audio metadata is returned in each page of information returned by
     * <code>GetSegmentDetection</code>.</p>
     */
    inline const Aws::Vector<AudioMetadata>& GetAudioMetadata() const{ return m_audioMetadata; }
    inline void SetAudioMetadata(const Aws::Vector<AudioMetadata>& value) { m_audioMetadata = value; }
    inline void SetAudioMetadata(Aws::Vector<AudioMetadata>&& value) { m_audioMetadata = std::move(value); }
    inline GetSegmentDetectionResult& WithAudioMetadata(const Aws::Vector<AudioMetadata>& value) { SetAudioMetadata(value); return *this;}
    inline GetSegmentDetectionResult& WithAudioMetadata(Aws::Vector<AudioMetadata>&& value) { SetAudioMetadata(std::move(value)); return *this;}
    inline GetSegmentDetectionResult& AddAudioMetadata(const AudioMetadata& value) { m_audioMetadata.push_back(value); return *this; }
    inline GetSegmentDetectionResult& AddAudioMetadata(AudioMetadata&& value) { m_audioMetadata.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was incomplete (because there are more labels to
     * retrieve), Amazon Rekognition Video returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of text.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetSegmentDetectionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetSegmentDetectionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetSegmentDetectionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of segments detected in a video. The array is sorted by the segment
     * types (TECHNICAL_CUE or SHOT) specified in the <code>SegmentTypes</code> input
     * parameter of <code>StartSegmentDetection</code>. Within each segment type the
     * array is sorted by timestamp values.</p>
     */
    inline const Aws::Vector<SegmentDetection>& GetSegments() const{ return m_segments; }
    inline void SetSegments(const Aws::Vector<SegmentDetection>& value) { m_segments = value; }
    inline void SetSegments(Aws::Vector<SegmentDetection>&& value) { m_segments = std::move(value); }
    inline GetSegmentDetectionResult& WithSegments(const Aws::Vector<SegmentDetection>& value) { SetSegments(value); return *this;}
    inline GetSegmentDetectionResult& WithSegments(Aws::Vector<SegmentDetection>&& value) { SetSegments(std::move(value)); return *this;}
    inline GetSegmentDetectionResult& AddSegments(const SegmentDetection& value) { m_segments.push_back(value); return *this; }
    inline GetSegmentDetectionResult& AddSegments(SegmentDetection&& value) { m_segments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array containing the segment types requested in the call to
     * <code>StartSegmentDetection</code>. </p>
     */
    inline const Aws::Vector<SegmentTypeInfo>& GetSelectedSegmentTypes() const{ return m_selectedSegmentTypes; }
    inline void SetSelectedSegmentTypes(const Aws::Vector<SegmentTypeInfo>& value) { m_selectedSegmentTypes = value; }
    inline void SetSelectedSegmentTypes(Aws::Vector<SegmentTypeInfo>&& value) { m_selectedSegmentTypes = std::move(value); }
    inline GetSegmentDetectionResult& WithSelectedSegmentTypes(const Aws::Vector<SegmentTypeInfo>& value) { SetSelectedSegmentTypes(value); return *this;}
    inline GetSegmentDetectionResult& WithSelectedSegmentTypes(Aws::Vector<SegmentTypeInfo>&& value) { SetSelectedSegmentTypes(std::move(value)); return *this;}
    inline GetSegmentDetectionResult& AddSelectedSegmentTypes(const SegmentTypeInfo& value) { m_selectedSegmentTypes.push_back(value); return *this; }
    inline GetSegmentDetectionResult& AddSelectedSegmentTypes(SegmentTypeInfo&& value) { m_selectedSegmentTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Job identifier for the segment detection operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartSegmentDetection.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline GetSegmentDetectionResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetSegmentDetectionResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetSegmentDetectionResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    
    inline const Video& GetVideo() const{ return m_video; }
    inline void SetVideo(const Video& value) { m_video = value; }
    inline void SetVideo(Video&& value) { m_video = std::move(value); }
    inline GetSegmentDetectionResult& WithVideo(const Video& value) { SetVideo(value); return *this;}
    inline GetSegmentDetectionResult& WithVideo(Video&& value) { SetVideo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A job identifier specified in the call to StartSegmentDetection and returned
     * in the job completion notification sent to your Amazon Simple Notification
     * Service topic.</p>
     */
    inline const Aws::String& GetJobTag() const{ return m_jobTag; }
    inline void SetJobTag(const Aws::String& value) { m_jobTag = value; }
    inline void SetJobTag(Aws::String&& value) { m_jobTag = std::move(value); }
    inline void SetJobTag(const char* value) { m_jobTag.assign(value); }
    inline GetSegmentDetectionResult& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}
    inline GetSegmentDetectionResult& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}
    inline GetSegmentDetectionResult& WithJobTag(const char* value) { SetJobTag(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSegmentDetectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSegmentDetectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSegmentDetectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    VideoJobStatus m_jobStatus;

    Aws::String m_statusMessage;

    Aws::Vector<VideoMetadata> m_videoMetadata;

    Aws::Vector<AudioMetadata> m_audioMetadata;

    Aws::String m_nextToken;

    Aws::Vector<SegmentDetection> m_segments;

    Aws::Vector<SegmentTypeInfo> m_selectedSegmentTypes;

    Aws::String m_jobId;

    Video m_video;

    Aws::String m_jobTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
