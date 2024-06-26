﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/VoiceIDRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VoiceID
{
namespace Model
{

  /**
   */
  class AssociateFraudsterRequest : public VoiceIDRequest
  {
  public:
    AWS_VOICEID_API AssociateFraudsterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateFraudster"; }

    AWS_VOICEID_API Aws::String SerializePayload() const override;

    AWS_VOICEID_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the domain that contains the fraudster.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline AssociateFraudsterRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline AssociateFraudsterRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline AssociateFraudsterRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the fraudster to be associated with the watchlist.</p>
     */
    inline const Aws::String& GetFraudsterId() const{ return m_fraudsterId; }
    inline bool FraudsterIdHasBeenSet() const { return m_fraudsterIdHasBeenSet; }
    inline void SetFraudsterId(const Aws::String& value) { m_fraudsterIdHasBeenSet = true; m_fraudsterId = value; }
    inline void SetFraudsterId(Aws::String&& value) { m_fraudsterIdHasBeenSet = true; m_fraudsterId = std::move(value); }
    inline void SetFraudsterId(const char* value) { m_fraudsterIdHasBeenSet = true; m_fraudsterId.assign(value); }
    inline AssociateFraudsterRequest& WithFraudsterId(const Aws::String& value) { SetFraudsterId(value); return *this;}
    inline AssociateFraudsterRequest& WithFraudsterId(Aws::String&& value) { SetFraudsterId(std::move(value)); return *this;}
    inline AssociateFraudsterRequest& WithFraudsterId(const char* value) { SetFraudsterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the watchlist you want to associate with the fraudster.</p>
     */
    inline const Aws::String& GetWatchlistId() const{ return m_watchlistId; }
    inline bool WatchlistIdHasBeenSet() const { return m_watchlistIdHasBeenSet; }
    inline void SetWatchlistId(const Aws::String& value) { m_watchlistIdHasBeenSet = true; m_watchlistId = value; }
    inline void SetWatchlistId(Aws::String&& value) { m_watchlistIdHasBeenSet = true; m_watchlistId = std::move(value); }
    inline void SetWatchlistId(const char* value) { m_watchlistIdHasBeenSet = true; m_watchlistId.assign(value); }
    inline AssociateFraudsterRequest& WithWatchlistId(const Aws::String& value) { SetWatchlistId(value); return *this;}
    inline AssociateFraudsterRequest& WithWatchlistId(Aws::String&& value) { SetWatchlistId(std::move(value)); return *this;}
    inline AssociateFraudsterRequest& WithWatchlistId(const char* value) { SetWatchlistId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_fraudsterId;
    bool m_fraudsterIdHasBeenSet = false;

    Aws::String m_watchlistId;
    bool m_watchlistIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
