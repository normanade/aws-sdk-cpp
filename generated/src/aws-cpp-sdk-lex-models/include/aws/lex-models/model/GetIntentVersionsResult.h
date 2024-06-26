﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/IntentMetadata.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class GetIntentVersionsResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetIntentVersionsResult();
    AWS_LEXMODELBUILDINGSERVICE_API GetIntentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetIntentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>IntentMetadata</code> objects, one for each numbered
     * version of the intent plus one for the <code>$LATEST</code> version.</p>
     */
    inline const Aws::Vector<IntentMetadata>& GetIntents() const{ return m_intents; }
    inline void SetIntents(const Aws::Vector<IntentMetadata>& value) { m_intents = value; }
    inline void SetIntents(Aws::Vector<IntentMetadata>&& value) { m_intents = std::move(value); }
    inline GetIntentVersionsResult& WithIntents(const Aws::Vector<IntentMetadata>& value) { SetIntents(value); return *this;}
    inline GetIntentVersionsResult& WithIntents(Aws::Vector<IntentMetadata>&& value) { SetIntents(std::move(value)); return *this;}
    inline GetIntentVersionsResult& AddIntents(const IntentMetadata& value) { m_intents.push_back(value); return *this; }
    inline GetIntentVersionsResult& AddIntents(IntentMetadata&& value) { m_intents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token for fetching the next page of intent versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetIntentVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetIntentVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetIntentVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIntentVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIntentVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIntentVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IntentMetadata> m_intents;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
