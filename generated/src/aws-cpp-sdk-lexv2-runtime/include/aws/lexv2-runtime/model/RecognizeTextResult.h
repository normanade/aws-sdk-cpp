﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-runtime/model/SessionState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-runtime/model/RecognizedBotMember.h>
#include <aws/lexv2-runtime/model/Message.h>
#include <aws/lexv2-runtime/model/Interpretation.h>
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
namespace LexRuntimeV2
{
namespace Model
{
  class RecognizeTextResult
  {
  public:
    AWS_LEXRUNTIMEV2_API RecognizeTextResult();
    AWS_LEXRUNTIMEV2_API RecognizeTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXRUNTIMEV2_API RecognizeTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of messages last sent to the user. The messages are ordered based on
     * the order that you returned the messages from your Lambda function or the order
     * that the messages are defined in the bot.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messages = value; }
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messages = std::move(value); }
    inline RecognizeTextResult& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}
    inline RecognizeTextResult& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}
    inline RecognizeTextResult& AddMessages(const Message& value) { m_messages.push_back(value); return *this; }
    inline RecognizeTextResult& AddMessages(Message&& value) { m_messages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the current state of the dialog between the user and the bot. </p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action may be.</p>
     */
    inline const SessionState& GetSessionState() const{ return m_sessionState; }
    inline void SetSessionState(const SessionState& value) { m_sessionState = value; }
    inline void SetSessionState(SessionState&& value) { m_sessionState = std::move(value); }
    inline RecognizeTextResult& WithSessionState(const SessionState& value) { SetSessionState(value); return *this;}
    inline RecognizeTextResult& WithSessionState(SessionState&& value) { SetSessionState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates now confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline const Aws::Vector<Interpretation>& GetInterpretations() const{ return m_interpretations; }
    inline void SetInterpretations(const Aws::Vector<Interpretation>& value) { m_interpretations = value; }
    inline void SetInterpretations(Aws::Vector<Interpretation>&& value) { m_interpretations = std::move(value); }
    inline RecognizeTextResult& WithInterpretations(const Aws::Vector<Interpretation>& value) { SetInterpretations(value); return *this;}
    inline RecognizeTextResult& WithInterpretations(Aws::Vector<Interpretation>&& value) { SetInterpretations(std::move(value)); return *this;}
    inline RecognizeTextResult& AddInterpretations(const Interpretation& value) { m_interpretations.push_back(value); return *this; }
    inline RecognizeTextResult& AddInterpretations(Interpretation&& value) { m_interpretations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attributes sent in the request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestAttributes() const{ return m_requestAttributes; }
    inline void SetRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_requestAttributes = value; }
    inline void SetRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_requestAttributes = std::move(value); }
    inline RecognizeTextResult& WithRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestAttributes(value); return *this;}
    inline RecognizeTextResult& WithRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestAttributes(std::move(value)); return *this;}
    inline RecognizeTextResult& AddRequestAttributes(const Aws::String& key, const Aws::String& value) { m_requestAttributes.emplace(key, value); return *this; }
    inline RecognizeTextResult& AddRequestAttributes(Aws::String&& key, const Aws::String& value) { m_requestAttributes.emplace(std::move(key), value); return *this; }
    inline RecognizeTextResult& AddRequestAttributes(const Aws::String& key, Aws::String&& value) { m_requestAttributes.emplace(key, std::move(value)); return *this; }
    inline RecognizeTextResult& AddRequestAttributes(Aws::String&& key, Aws::String&& value) { m_requestAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline RecognizeTextResult& AddRequestAttributes(const char* key, Aws::String&& value) { m_requestAttributes.emplace(key, std::move(value)); return *this; }
    inline RecognizeTextResult& AddRequestAttributes(Aws::String&& key, const char* value) { m_requestAttributes.emplace(std::move(key), value); return *this; }
    inline RecognizeTextResult& AddRequestAttributes(const char* key, const char* value) { m_requestAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the session in use.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline RecognizeTextResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline RecognizeTextResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline RecognizeTextResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot member that recognized the text.</p>
     */
    inline const RecognizedBotMember& GetRecognizedBotMember() const{ return m_recognizedBotMember; }
    inline void SetRecognizedBotMember(const RecognizedBotMember& value) { m_recognizedBotMember = value; }
    inline void SetRecognizedBotMember(RecognizedBotMember&& value) { m_recognizedBotMember = std::move(value); }
    inline RecognizeTextResult& WithRecognizedBotMember(const RecognizedBotMember& value) { SetRecognizedBotMember(value); return *this;}
    inline RecognizeTextResult& WithRecognizedBotMember(RecognizedBotMember&& value) { SetRecognizedBotMember(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RecognizeTextResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RecognizeTextResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RecognizeTextResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Message> m_messages;

    SessionState m_sessionState;

    Aws::Vector<Interpretation> m_interpretations;

    Aws::Map<Aws::String, Aws::String> m_requestAttributes;

    Aws::String m_sessionId;

    RecognizedBotMember m_recognizedBotMember;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
