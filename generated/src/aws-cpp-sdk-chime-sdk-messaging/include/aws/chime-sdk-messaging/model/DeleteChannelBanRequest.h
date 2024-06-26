﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class DeleteChannelBanRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API DeleteChannelBanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteChannelBan"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the channel from which the <code>AppInstanceUser</code> was
     * banned.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline DeleteChannelBanRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline DeleteChannelBanRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline DeleteChannelBanRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceUser</code> that you want to reinstate.</p>
     */
    inline const Aws::String& GetMemberArn() const{ return m_memberArn; }
    inline bool MemberArnHasBeenSet() const { return m_memberArnHasBeenSet; }
    inline void SetMemberArn(const Aws::String& value) { m_memberArnHasBeenSet = true; m_memberArn = value; }
    inline void SetMemberArn(Aws::String&& value) { m_memberArnHasBeenSet = true; m_memberArn = std::move(value); }
    inline void SetMemberArn(const char* value) { m_memberArnHasBeenSet = true; m_memberArn.assign(value); }
    inline DeleteChannelBanRequest& WithMemberArn(const Aws::String& value) { SetMemberArn(value); return *this;}
    inline DeleteChannelBanRequest& WithMemberArn(Aws::String&& value) { SetMemberArn(std::move(value)); return *this;}
    inline DeleteChannelBanRequest& WithMemberArn(const char* value) { SetMemberArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceUser</code> or <code>AppInstanceBot</code>
     * that makes the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const{ return m_chimeBearer; }
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }
    inline void SetChimeBearer(const Aws::String& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = value; }
    inline void SetChimeBearer(Aws::String&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::move(value); }
    inline void SetChimeBearer(const char* value) { m_chimeBearerHasBeenSet = true; m_chimeBearer.assign(value); }
    inline DeleteChannelBanRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}
    inline DeleteChannelBanRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}
    inline DeleteChannelBanRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_memberArn;
    bool m_memberArnHasBeenSet = false;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
