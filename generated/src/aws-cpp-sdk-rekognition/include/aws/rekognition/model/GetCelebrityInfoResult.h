﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/KnownGender.h>
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
  class GetCelebrityInfoResult
  {
  public:
    AWS_REKOGNITION_API GetCelebrityInfoResult();
    AWS_REKOGNITION_API GetCelebrityInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetCelebrityInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUrls() const{ return m_urls; }
    inline void SetUrls(const Aws::Vector<Aws::String>& value) { m_urls = value; }
    inline void SetUrls(Aws::Vector<Aws::String>&& value) { m_urls = std::move(value); }
    inline GetCelebrityInfoResult& WithUrls(const Aws::Vector<Aws::String>& value) { SetUrls(value); return *this;}
    inline GetCelebrityInfoResult& WithUrls(Aws::Vector<Aws::String>&& value) { SetUrls(std::move(value)); return *this;}
    inline GetCelebrityInfoResult& AddUrls(const Aws::String& value) { m_urls.push_back(value); return *this; }
    inline GetCelebrityInfoResult& AddUrls(Aws::String&& value) { m_urls.push_back(std::move(value)); return *this; }
    inline GetCelebrityInfoResult& AddUrls(const char* value) { m_urls.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the celebrity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetCelebrityInfoResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetCelebrityInfoResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetCelebrityInfoResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves the known gender for the celebrity.</p>
     */
    inline const KnownGender& GetKnownGender() const{ return m_knownGender; }
    inline void SetKnownGender(const KnownGender& value) { m_knownGender = value; }
    inline void SetKnownGender(KnownGender&& value) { m_knownGender = std::move(value); }
    inline GetCelebrityInfoResult& WithKnownGender(const KnownGender& value) { SetKnownGender(value); return *this;}
    inline GetCelebrityInfoResult& WithKnownGender(KnownGender&& value) { SetKnownGender(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCelebrityInfoResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCelebrityInfoResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCelebrityInfoResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_urls;

    Aws::String m_name;

    KnownGender m_knownGender;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
