﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/ConnectParticipantRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

  /**
   */
  class SendMessageRequest : public ConnectParticipantRequest
  {
  public:
    AWS_CONNECTPARTICIPANT_API SendMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendMessage"; }

    AWS_CONNECTPARTICIPANT_API Aws::String SerializePayload() const override;

    AWS_CONNECTPARTICIPANT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The type of the content. Supported types are <code>text/plain</code>,
     * <code>text/markdown</code>, <code>application/json</code>, and
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline SendMessageRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline SendMessageRequest& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline SendMessageRequest& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the message. </p> <ul> <li> <p>For <code>text/plain</code> and
     * <code>text/markdown</code>, the Length Constraints are Minimum of 1, Maximum of
     * 1024. </p> </li> <li> <p>For <code>application/json</code>, the Length
     * Constraints are Minimum of 1, Maximum of 12000. </p> </li> <li> <p>For
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>, the
     * Length Constraints are Minimum of 1, Maximum of 12288.</p> </li> </ul>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline SendMessageRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline SendMessageRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline SendMessageRequest& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline SendMessageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline SendMessageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline SendMessageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication token associated with the connection.</p>
     */
    inline const Aws::String& GetConnectionToken() const{ return m_connectionToken; }
    inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }
    inline void SetConnectionToken(const Aws::String& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = value; }
    inline void SetConnectionToken(Aws::String&& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = std::move(value); }
    inline void SetConnectionToken(const char* value) { m_connectionTokenHasBeenSet = true; m_connectionToken.assign(value); }
    inline SendMessageRequest& WithConnectionToken(const Aws::String& value) { SetConnectionToken(value); return *this;}
    inline SendMessageRequest& WithConnectionToken(Aws::String&& value) { SetConnectionToken(std::move(value)); return *this;}
    inline SendMessageRequest& WithConnectionToken(const char* value) { SetConnectionToken(value); return *this;}
    ///@}
  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
