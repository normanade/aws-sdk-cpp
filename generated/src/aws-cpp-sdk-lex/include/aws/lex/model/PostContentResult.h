﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex/model/MessageFormatType.h>
#include <aws/lex/model/DialogState.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace LexRuntimeService
{
namespace Model
{
  class PostContentResult
  {
  public:
    AWS_LEXRUNTIMESERVICE_API PostContentResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_LEXRUNTIMESERVICE_API PostContentResult(PostContentResult&&);
    AWS_LEXRUNTIMESERVICE_API PostContentResult& operator=(PostContentResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    PostContentResult(const PostContentResult&) = delete;
    PostContentResult& operator=(const PostContentResult&) = delete;


    AWS_LEXRUNTIMESERVICE_API PostContentResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_LEXRUNTIMESERVICE_API PostContentResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>Content type as specified in the <code>Accept</code> HTTP header in the
     * request.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentType.assign(value); }
    inline PostContentResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline PostContentResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline PostContentResult& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current user intent that Amazon Lex is aware of.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }
    inline void SetIntentName(const Aws::String& value) { m_intentName = value; }
    inline void SetIntentName(Aws::String&& value) { m_intentName = std::move(value); }
    inline void SetIntentName(const char* value) { m_intentName.assign(value); }
    inline PostContentResult& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}
    inline PostContentResult& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}
    inline PostContentResult& WithIntentName(const char* value) { SetIntentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a score that indicates how confident Amazon Lex is that the returned
     * intent is the one that matches the user's intent. The score is between 0.0 and
     * 1.0.</p> <p>The score is a relative score, not an absolute score. The score may
     * change based on improvements to Amazon Lex. </p>
     */
    inline const Aws::String& GetNluIntentConfidence() const{ return m_nluIntentConfidence; }
    inline void SetNluIntentConfidence(const Aws::String& value) { m_nluIntentConfidence = value; }
    inline void SetNluIntentConfidence(Aws::String&& value) { m_nluIntentConfidence = std::move(value); }
    inline void SetNluIntentConfidence(const char* value) { m_nluIntentConfidence.assign(value); }
    inline PostContentResult& WithNluIntentConfidence(const Aws::String& value) { SetNluIntentConfidence(value); return *this;}
    inline PostContentResult& WithNluIntentConfidence(Aws::String&& value) { SetNluIntentConfidence(std::move(value)); return *this;}
    inline PostContentResult& WithNluIntentConfidence(const char* value) { SetNluIntentConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One to four alternative intents that may be applicable to the user's
     * intent.</p> <p>Each alternative includes a score that indicates how confident
     * Amazon Lex is that the intent matches the user's intent. The intents are sorted
     * by the confidence score.</p>
     */
    inline const Aws::String& GetAlternativeIntents() const{ return m_alternativeIntents; }
    inline void SetAlternativeIntents(const Aws::String& value) { m_alternativeIntents = value; }
    inline void SetAlternativeIntents(Aws::String&& value) { m_alternativeIntents = std::move(value); }
    inline void SetAlternativeIntents(const char* value) { m_alternativeIntents.assign(value); }
    inline PostContentResult& WithAlternativeIntents(const Aws::String& value) { SetAlternativeIntents(value); return *this;}
    inline PostContentResult& WithAlternativeIntents(Aws::String&& value) { SetAlternativeIntents(std::move(value)); return *this;}
    inline PostContentResult& WithAlternativeIntents(const char* value) { SetAlternativeIntents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map of zero or more intent slots (name/value pairs) Amazon Lex detected from
     * the user input during the conversation. The field is base-64 encoded.</p>
     * <p>Amazon Lex creates a resolution list containing likely values for a slot. The
     * value that it returns is determined by the <code>valueSelectionStrategy</code>
     * selected when the slot type was created or updated. If
     * <code>valueSelectionStrategy</code> is set to <code>ORIGINAL_VALUE</code>, the
     * value provided by the user is returned, if the user value is similar to the slot
     * values. If <code>valueSelectionStrategy</code> is set to
     * <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the resolution
     * list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline const Aws::String& GetSlots() const{ return m_slots; }
    inline void SetSlots(const Aws::String& value) { m_slots = value; }
    inline void SetSlots(Aws::String&& value) { m_slots = std::move(value); }
    inline void SetSlots(const char* value) { m_slots.assign(value); }
    inline PostContentResult& WithSlots(const Aws::String& value) { SetSlots(value); return *this;}
    inline PostContentResult& WithSlots(Aws::String&& value) { SetSlots(std::move(value)); return *this;}
    inline PostContentResult& WithSlots(const char* value) { SetSlots(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Map of key/value pairs representing the session-specific context
     * information. </p>
     */
    inline const Aws::String& GetSessionAttributes() const{ return m_sessionAttributes; }
    inline void SetSessionAttributes(const Aws::String& value) { m_sessionAttributes = value; }
    inline void SetSessionAttributes(Aws::String&& value) { m_sessionAttributes = std::move(value); }
    inline void SetSessionAttributes(const char* value) { m_sessionAttributes.assign(value); }
    inline PostContentResult& WithSessionAttributes(const Aws::String& value) { SetSessionAttributes(value); return *this;}
    inline PostContentResult& WithSessionAttributes(Aws::String&& value) { SetSessionAttributes(std::move(value)); return *this;}
    inline PostContentResult& WithSessionAttributes(const char* value) { SetSessionAttributes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sentiment expressed in an utterance.</p> <p>When the bot is configured to
     * send utterances to Amazon Comprehend for sentiment analysis, this field contains
     * the result of the analysis.</p>
     */
    inline const Aws::String& GetSentimentResponse() const{ return m_sentimentResponse; }
    inline void SetSentimentResponse(const Aws::String& value) { m_sentimentResponse = value; }
    inline void SetSentimentResponse(Aws::String&& value) { m_sentimentResponse = std::move(value); }
    inline void SetSentimentResponse(const char* value) { m_sentimentResponse.assign(value); }
    inline PostContentResult& WithSentimentResponse(const Aws::String& value) { SetSentimentResponse(value); return *this;}
    inline PostContentResult& WithSentimentResponse(Aws::String&& value) { SetSentimentResponse(std::move(value)); return *this;}
    inline PostContentResult& WithSentimentResponse(const char* value) { SetSentimentResponse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message to convey to the user. The message can come from the bot's
     * configuration or from a Lambda function.</p> <p>If the intent is not configured
     * with a Lambda function, or if the Lambda function returned <code>Delegate</code>
     * as the <code>dialogAction.type</code> in its response, Amazon Lex decides on the
     * next course of action and selects an appropriate message from the bot's
     * configuration based on the current interaction context. For example, if Amazon
     * Lex isn't able to understand user input, it uses a clarification prompt
     * message.</p> <p>When you create an intent you can assign messages to groups.
     * When messages are assigned to groups Amazon Lex returns one message from each
     * group in the response. The message field is an escaped JSON string containing
     * the messages. For more information about the structure of the JSON string
     * returned, see <a>msg-prompts-formats</a>.</p> <p>If the Lambda function returns
     * a message, Amazon Lex passes it to the client in its response.</p> <p>The
     * <code>encodedMessage</code> field is base-64 encoded. You must decode the field
     * before you can use the value.</p>
     */
    inline const Aws::String& GetEncodedMessage() const{ return m_encodedMessage; }
    inline void SetEncodedMessage(const Aws::String& value) { m_encodedMessage = value; }
    inline void SetEncodedMessage(Aws::String&& value) { m_encodedMessage = std::move(value); }
    inline void SetEncodedMessage(const char* value) { m_encodedMessage.assign(value); }
    inline PostContentResult& WithEncodedMessage(const Aws::String& value) { SetEncodedMessage(value); return *this;}
    inline PostContentResult& WithEncodedMessage(Aws::String&& value) { SetEncodedMessage(std::move(value)); return *this;}
    inline PostContentResult& WithEncodedMessage(const char* value) { SetEncodedMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the response message. One of the following values:</p> <ul>
     * <li> <p> <code>PlainText</code> - The message contains plain UTF-8 text.</p>
     * </li> <li> <p> <code>CustomPayload</code> - The message is a custom format for
     * the client.</p> </li> <li> <p> <code>SSML</code> - The message contains text
     * formatted for voice output.</p> </li> <li> <p> <code>Composite</code> - The
     * message contains an escaped JSON object containing one or more messages from the
     * groups that messages were assigned to when the intent was created.</p> </li>
     * </ul>
     */
    inline const MessageFormatType& GetMessageFormat() const{ return m_messageFormat; }
    inline void SetMessageFormat(const MessageFormatType& value) { m_messageFormat = value; }
    inline void SetMessageFormat(MessageFormatType&& value) { m_messageFormat = std::move(value); }
    inline PostContentResult& WithMessageFormat(const MessageFormatType& value) { SetMessageFormat(value); return *this;}
    inline PostContentResult& WithMessageFormat(MessageFormatType&& value) { SetMessageFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the current state of the user interaction. Amazon Lex returns one
     * of the following values as <code>dialogState</code>. The client can optionally
     * use this information to customize the user interface. </p> <ul> <li> <p>
     * <code>ElicitIntent</code> - Amazon Lex wants to elicit the user's intent.
     * Consider the following examples: </p> <p> For example, a user might utter an
     * intent ("I want to order a pizza"). If Amazon Lex cannot infer the user intent
     * from this utterance, it will return this dialog state. </p> </li> <li> <p>
     * <code>ConfirmIntent</code> - Amazon Lex is expecting a "yes" or "no" response.
     * </p> <p>For example, Amazon Lex wants user confirmation before fulfilling an
     * intent. Instead of a simple "yes" or "no" response, a user might respond with
     * additional information. For example, "yes, but make it a thick crust pizza" or
     * "no, I want to order a drink." Amazon Lex can process such additional
     * information (in these examples, update the crust type slot or change the intent
     * from OrderPizza to OrderDrink). </p> </li> <li> <p> <code>ElicitSlot</code> -
     * Amazon Lex is expecting the value of a slot for the current intent. </p> <p> For
     * example, suppose that in the response Amazon Lex sends this message: "What size
     * pizza would you like?". A user might reply with the slot value (e.g., "medium").
     * The user might also provide additional information in the response (e.g.,
     * "medium thick crust pizza"). Amazon Lex can process such additional information
     * appropriately. </p> </li> <li> <p> <code>Fulfilled</code> - Conveys that the
     * Lambda function has successfully fulfilled the intent. </p> </li> <li> <p>
     * <code>ReadyForFulfillment</code> - Conveys that the client has to fulfill the
     * request. </p> </li> <li> <p> <code>Failed</code> - Conveys that the conversation
     * with the user failed. </p> <p> This can happen for various reasons, including
     * that the user does not provide an appropriate response to prompts from the
     * service (you can configure how many times Amazon Lex can prompt a user for
     * specific information), or if the Lambda function fails to fulfill the intent.
     * </p> </li> </ul>
     */
    inline const DialogState& GetDialogState() const{ return m_dialogState; }
    inline void SetDialogState(const DialogState& value) { m_dialogState = value; }
    inline void SetDialogState(DialogState&& value) { m_dialogState = std::move(value); }
    inline PostContentResult& WithDialogState(const DialogState& value) { SetDialogState(value); return *this;}
    inline PostContentResult& WithDialogState(DialogState&& value) { SetDialogState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the <code>dialogState</code> value is <code>ElicitSlot</code>, returns
     * the name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline const Aws::String& GetSlotToElicit() const{ return m_slotToElicit; }
    inline void SetSlotToElicit(const Aws::String& value) { m_slotToElicit = value; }
    inline void SetSlotToElicit(Aws::String&& value) { m_slotToElicit = std::move(value); }
    inline void SetSlotToElicit(const char* value) { m_slotToElicit.assign(value); }
    inline PostContentResult& WithSlotToElicit(const Aws::String& value) { SetSlotToElicit(value); return *this;}
    inline PostContentResult& WithSlotToElicit(Aws::String&& value) { SetSlotToElicit(std::move(value)); return *this;}
    inline PostContentResult& WithSlotToElicit(const char* value) { SetSlotToElicit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text used to process the request.</p> <p>If the input was an audio
     * stream, the <code>encodedInputTranscript</code> field contains the text
     * extracted from the audio stream. This is the text that is actually processed to
     * recognize intents and slot values. You can use this information to determine if
     * Amazon Lex is correctly processing the audio that you send.</p> <p>The
     * <code>encodedInputTranscript</code> field is base-64 encoded. You must decode
     * the field before you can use the value.</p>
     */
    inline const Aws::String& GetEncodedInputTranscript() const{ return m_encodedInputTranscript; }
    inline void SetEncodedInputTranscript(const Aws::String& value) { m_encodedInputTranscript = value; }
    inline void SetEncodedInputTranscript(Aws::String&& value) { m_encodedInputTranscript = std::move(value); }
    inline void SetEncodedInputTranscript(const char* value) { m_encodedInputTranscript.assign(value); }
    inline PostContentResult& WithEncodedInputTranscript(const Aws::String& value) { SetEncodedInputTranscript(value); return *this;}
    inline PostContentResult& WithEncodedInputTranscript(Aws::String&& value) { SetEncodedInputTranscript(std::move(value)); return *this;}
    inline PostContentResult& WithEncodedInputTranscript(const char* value) { SetEncodedInputTranscript(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt (or statement) to convey to the user. This is based on the bot
     * configuration and context. For example, if Amazon Lex did not understand the
     * user intent, it sends the <code>clarificationPrompt</code> configured for the
     * bot. If the intent requires confirmation before taking the fulfillment action,
     * it sends the <code>confirmationPrompt</code>. Another example: Suppose that the
     * Lambda function successfully fulfilled the intent, and sent a message to convey
     * to the user. Then Amazon Lex sends that message in the response. </p>
     */
    inline Aws::IOStream& GetAudioStream() const { return m_audioStream.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_audioStream = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The version of the bot that responded to the conversation. You can use this
     * information to help determine if one version of a bot is performing better than
     * another version.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline PostContentResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline PostContentResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline PostContentResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline PostContentResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline PostContentResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline PostContentResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of active contexts for the session. A context can be set when an
     * intent is fulfilled or by calling the <code>PostContent</code>,
     * <code>PostText</code>, or <code>PutSession</code> operation.</p> <p>You can use
     * a context to control the intents that can follow up an intent, or to modify the
     * operation of your application.</p>
     */
    inline const Aws::String& GetActiveContexts() const{ return m_activeContexts; }
    inline void SetActiveContexts(const Aws::String& value) { m_activeContexts = value; }
    inline void SetActiveContexts(Aws::String&& value) { m_activeContexts = std::move(value); }
    inline void SetActiveContexts(const char* value) { m_activeContexts.assign(value); }
    inline PostContentResult& WithActiveContexts(const Aws::String& value) { SetActiveContexts(value); return *this;}
    inline PostContentResult& WithActiveContexts(Aws::String&& value) { SetActiveContexts(std::move(value)); return *this;}
    inline PostContentResult& WithActiveContexts(const char* value) { SetActiveContexts(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PostContentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PostContentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PostContentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contentType;

    Aws::String m_intentName;

    Aws::String m_nluIntentConfidence;

    Aws::String m_alternativeIntents;

    Aws::String m_slots;

    Aws::String m_sessionAttributes;

    Aws::String m_sentimentResponse;

    Aws::String m_encodedMessage;

    MessageFormatType m_messageFormat;

    DialogState m_dialogState;

    Aws::String m_slotToElicit;

    Aws::String m_encodedInputTranscript;

    Aws::Utils::Stream::ResponseStream m_audioStream;

    Aws::String m_botVersion;

    Aws::String m_sessionId;

    Aws::String m_activeContexts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
