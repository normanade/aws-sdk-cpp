﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/PlaybackKeyPairSummary.h>
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
namespace IVS
{
namespace Model
{
  class ListPlaybackKeyPairsResult
  {
  public:
    AWS_IVS_API ListPlaybackKeyPairsResult();
    AWS_IVS_API ListPlaybackKeyPairsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API ListPlaybackKeyPairsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of key pairs.</p>
     */
    inline const Aws::Vector<PlaybackKeyPairSummary>& GetKeyPairs() const{ return m_keyPairs; }
    inline void SetKeyPairs(const Aws::Vector<PlaybackKeyPairSummary>& value) { m_keyPairs = value; }
    inline void SetKeyPairs(Aws::Vector<PlaybackKeyPairSummary>&& value) { m_keyPairs = std::move(value); }
    inline ListPlaybackKeyPairsResult& WithKeyPairs(const Aws::Vector<PlaybackKeyPairSummary>& value) { SetKeyPairs(value); return *this;}
    inline ListPlaybackKeyPairsResult& WithKeyPairs(Aws::Vector<PlaybackKeyPairSummary>&& value) { SetKeyPairs(std::move(value)); return *this;}
    inline ListPlaybackKeyPairsResult& AddKeyPairs(const PlaybackKeyPairSummary& value) { m_keyPairs.push_back(value); return *this; }
    inline ListPlaybackKeyPairsResult& AddKeyPairs(PlaybackKeyPairSummary&& value) { m_keyPairs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more key pairs than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPlaybackKeyPairsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPlaybackKeyPairsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPlaybackKeyPairsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPlaybackKeyPairsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPlaybackKeyPairsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPlaybackKeyPairsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PlaybackKeyPairSummary> m_keyPairs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
