﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/SlotSummary.h>
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
namespace LexModelsV2
{
namespace Model
{
  class ListSlotsResult
  {
  public:
    AWS_LEXMODELSV2_API ListSlotsResult();
    AWS_LEXMODELSV2_API ListSlotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListSlotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the bot that contains the slots.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline ListSlotsResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline ListSlotsResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline ListSlotsResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that contains the slots.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline ListSlotsResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline ListSlotsResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline ListSlotsResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language and locale of the slots in the list.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }
    inline ListSlotsResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline ListSlotsResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline ListSlotsResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the intent that contains the slots.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }
    inline void SetIntentId(const Aws::String& value) { m_intentId = value; }
    inline void SetIntentId(Aws::String&& value) { m_intentId = std::move(value); }
    inline void SetIntentId(const char* value) { m_intentId.assign(value); }
    inline ListSlotsResult& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}
    inline ListSlotsResult& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}
    inline ListSlotsResult& WithIntentId(const char* value) { SetIntentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information for the slots that meet the filter criteria specified in
     * the request. The length of the list is specified in the <code>maxResults</code>
     * parameter of the request. If there are more slots available, the
     * <code>nextToken</code> field contains a token to get the next page of
     * results.</p>
     */
    inline const Aws::Vector<SlotSummary>& GetSlotSummaries() const{ return m_slotSummaries; }
    inline void SetSlotSummaries(const Aws::Vector<SlotSummary>& value) { m_slotSummaries = value; }
    inline void SetSlotSummaries(Aws::Vector<SlotSummary>&& value) { m_slotSummaries = std::move(value); }
    inline ListSlotsResult& WithSlotSummaries(const Aws::Vector<SlotSummary>& value) { SetSlotSummaries(value); return *this;}
    inline ListSlotsResult& WithSlotSummaries(Aws::Vector<SlotSummary>&& value) { SetSlotSummaries(std::move(value)); return *this;}
    inline ListSlotsResult& AddSlotSummaries(const SlotSummary& value) { m_slotSummaries.push_back(value); return *this; }
    inline ListSlotsResult& AddSlotSummaries(SlotSummary&& value) { m_slotSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListSlots</code> operation. If the <code>nextToken</code> field is
     * present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListSlots</code> operation request to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSlotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSlotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSlotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSlotsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSlotsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSlotsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::String m_intentId;

    Aws::Vector<SlotSummary> m_slotSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
