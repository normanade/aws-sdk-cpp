﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TranscriptSourceSetting.h>
#include <aws/lexv2-models/model/EncryptionSetting.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class StartBotRecommendationRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API StartBotRecommendationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBotRecommendation"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the bot containing the bot recommendation.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline StartBotRecommendationRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline StartBotRecommendationRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline StartBotRecommendationRequest& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline StartBotRecommendationRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline StartBotRecommendationRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline StartBotRecommendationRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale of the bot recommendation to start.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline StartBotRecommendationRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline StartBotRecommendationRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline StartBotRecommendationRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object representing the Amazon S3 bucket containing the transcript, as
     * well as the associated metadata.</p>
     */
    inline const TranscriptSourceSetting& GetTranscriptSourceSetting() const{ return m_transcriptSourceSetting; }
    inline bool TranscriptSourceSettingHasBeenSet() const { return m_transcriptSourceSettingHasBeenSet; }
    inline void SetTranscriptSourceSetting(const TranscriptSourceSetting& value) { m_transcriptSourceSettingHasBeenSet = true; m_transcriptSourceSetting = value; }
    inline void SetTranscriptSourceSetting(TranscriptSourceSetting&& value) { m_transcriptSourceSettingHasBeenSet = true; m_transcriptSourceSetting = std::move(value); }
    inline StartBotRecommendationRequest& WithTranscriptSourceSetting(const TranscriptSourceSetting& value) { SetTranscriptSourceSetting(value); return *this;}
    inline StartBotRecommendationRequest& WithTranscriptSourceSetting(TranscriptSourceSetting&& value) { SetTranscriptSourceSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object representing the passwords that will be used to encrypt the data
     * related to the bot recommendation results, as well as the KMS key ARN used to
     * encrypt the associated metadata.</p>
     */
    inline const EncryptionSetting& GetEncryptionSetting() const{ return m_encryptionSetting; }
    inline bool EncryptionSettingHasBeenSet() const { return m_encryptionSettingHasBeenSet; }
    inline void SetEncryptionSetting(const EncryptionSetting& value) { m_encryptionSettingHasBeenSet = true; m_encryptionSetting = value; }
    inline void SetEncryptionSetting(EncryptionSetting&& value) { m_encryptionSettingHasBeenSet = true; m_encryptionSetting = std::move(value); }
    inline StartBotRecommendationRequest& WithEncryptionSetting(const EncryptionSetting& value) { SetEncryptionSetting(value); return *this;}
    inline StartBotRecommendationRequest& WithEncryptionSetting(EncryptionSetting&& value) { SetEncryptionSetting(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    TranscriptSourceSetting m_transcriptSourceSetting;
    bool m_transcriptSourceSettingHasBeenSet = false;

    EncryptionSetting m_encryptionSetting;
    bool m_encryptionSettingHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
