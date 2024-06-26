﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides the parameters required for exporting a custom
   * vocabulary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CustomVocabularyExportSpecification">AWS
   * API Reference</a></p>
   */
  class CustomVocabularyExportSpecification
  {
  public:
    AWS_LEXMODELSV2_API CustomVocabularyExportSpecification();
    AWS_LEXMODELSV2_API CustomVocabularyExportSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API CustomVocabularyExportSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the bot that contains the custom vocabulary to export.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline CustomVocabularyExportSpecification& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline CustomVocabularyExportSpecification& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline CustomVocabularyExportSpecification& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that contains the custom vocabulary to export.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline CustomVocabularyExportSpecification& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline CustomVocabularyExportSpecification& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline CustomVocabularyExportSpecification& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the bot that contains the custom vocabulary to export.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline CustomVocabularyExportSpecification& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline CustomVocabularyExportSpecification& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline CustomVocabularyExportSpecification& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
