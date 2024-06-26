﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{
  class CreateCollectionResult
  {
  public:
    AWS_REKOGNITION_API CreateCollectionResult();
    AWS_REKOGNITION_API CreateCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API CreateCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>HTTP status code indicating the result of the operation.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }
    inline void SetStatusCode(int value) { m_statusCode = value; }
    inline CreateCollectionResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the collection. You can use this to manage
     * permissions on your resources. </p>
     */
    inline const Aws::String& GetCollectionArn() const{ return m_collectionArn; }
    inline void SetCollectionArn(const Aws::String& value) { m_collectionArn = value; }
    inline void SetCollectionArn(Aws::String&& value) { m_collectionArn = std::move(value); }
    inline void SetCollectionArn(const char* value) { m_collectionArn.assign(value); }
    inline CreateCollectionResult& WithCollectionArn(const Aws::String& value) { SetCollectionArn(value); return *this;}
    inline CreateCollectionResult& WithCollectionArn(Aws::String&& value) { SetCollectionArn(std::move(value)); return *this;}
    inline CreateCollectionResult& WithCollectionArn(const char* value) { SetCollectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version number of the face detection model associated with the collection you
     * are creating.</p>
     */
    inline const Aws::String& GetFaceModelVersion() const{ return m_faceModelVersion; }
    inline void SetFaceModelVersion(const Aws::String& value) { m_faceModelVersion = value; }
    inline void SetFaceModelVersion(Aws::String&& value) { m_faceModelVersion = std::move(value); }
    inline void SetFaceModelVersion(const char* value) { m_faceModelVersion.assign(value); }
    inline CreateCollectionResult& WithFaceModelVersion(const Aws::String& value) { SetFaceModelVersion(value); return *this;}
    inline CreateCollectionResult& WithFaceModelVersion(Aws::String&& value) { SetFaceModelVersion(std::move(value)); return *this;}
    inline CreateCollectionResult& WithFaceModelVersion(const char* value) { SetFaceModelVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCollectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCollectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCollectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_statusCode;

    Aws::String m_collectionArn;

    Aws::String m_faceModelVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
