﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Maps a caption channel to an ISO 693-2 language code
   * (http://www.loc.gov/standards/iso639-2), with an optional description.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CaptionLanguageMapping">AWS
   * API Reference</a></p>
   */
  class CaptionLanguageMapping
  {
  public:
    AWS_MEDIALIVE_API CaptionLanguageMapping();
    AWS_MEDIALIVE_API CaptionLanguageMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API CaptionLanguageMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The closed caption channel being described by this CaptionLanguageMapping.  Each
     * channel mapping must have a unique channel number (maximum of 4)
     */
    inline int GetCaptionChannel() const{ return m_captionChannel; }
    inline bool CaptionChannelHasBeenSet() const { return m_captionChannelHasBeenSet; }
    inline void SetCaptionChannel(int value) { m_captionChannelHasBeenSet = true; m_captionChannel = value; }
    inline CaptionLanguageMapping& WithCaptionChannel(int value) { SetCaptionChannel(value); return *this;}
    ///@}

    ///@{
    /**
     * Three character ISO 639-2 language code (see
     * http://www.loc.gov/standards/iso639-2)
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }
    inline CaptionLanguageMapping& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}
    inline CaptionLanguageMapping& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}
    inline CaptionLanguageMapping& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * Textual description of language
     */
    inline const Aws::String& GetLanguageDescription() const{ return m_languageDescription; }
    inline bool LanguageDescriptionHasBeenSet() const { return m_languageDescriptionHasBeenSet; }
    inline void SetLanguageDescription(const Aws::String& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = value; }
    inline void SetLanguageDescription(Aws::String&& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = std::move(value); }
    inline void SetLanguageDescription(const char* value) { m_languageDescriptionHasBeenSet = true; m_languageDescription.assign(value); }
    inline CaptionLanguageMapping& WithLanguageDescription(const Aws::String& value) { SetLanguageDescription(value); return *this;}
    inline CaptionLanguageMapping& WithLanguageDescription(Aws::String&& value) { SetLanguageDescription(std::move(value)); return *this;}
    inline CaptionLanguageMapping& WithLanguageDescription(const char* value) { SetLanguageDescription(value); return *this;}
    ///@}
  private:

    int m_captionChannel;
    bool m_captionChannelHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_languageDescription;
    bool m_languageDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
