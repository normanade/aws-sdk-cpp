﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/BurninDestinationSettings.h>
#include <aws/mediaconvert/model/CaptionDestinationType.h>
#include <aws/mediaconvert/model/DvbSubDestinationSettings.h>
#include <aws/mediaconvert/model/EmbeddedDestinationSettings.h>
#include <aws/mediaconvert/model/ImscDestinationSettings.h>
#include <aws/mediaconvert/model/SccDestinationSettings.h>
#include <aws/mediaconvert/model/SrtDestinationSettings.h>
#include <aws/mediaconvert/model/TeletextDestinationSettings.h>
#include <aws/mediaconvert/model/TtmlDestinationSettings.h>
#include <aws/mediaconvert/model/WebvttDestinationSettings.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings related to one captions tab on the MediaConvert console. Usually, one
   * captions tab corresponds to one output captions track. Depending on your output
   * captions format, one tab might correspond to a set of output captions tracks.
   * For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/including-captions.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionDestinationSettings">AWS
   * API Reference</a></p>
   */
  class CaptionDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API CaptionDestinationSettings();
    AWS_MEDIACONVERT_API CaptionDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CaptionDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Burn-in is a captions delivery method, rather than a captions format. Burn-in
     * writes the captions directly on your video frames, replacing pixels of video
     * content with the captions. Set up burn-in captions in the same output as your
     * video. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/burn-in-output-captions.html.
     */
    inline const BurninDestinationSettings& GetBurninDestinationSettings() const{ return m_burninDestinationSettings; }
    inline bool BurninDestinationSettingsHasBeenSet() const { return m_burninDestinationSettingsHasBeenSet; }
    inline void SetBurninDestinationSettings(const BurninDestinationSettings& value) { m_burninDestinationSettingsHasBeenSet = true; m_burninDestinationSettings = value; }
    inline void SetBurninDestinationSettings(BurninDestinationSettings&& value) { m_burninDestinationSettingsHasBeenSet = true; m_burninDestinationSettings = std::move(value); }
    inline CaptionDestinationSettings& WithBurninDestinationSettings(const BurninDestinationSettings& value) { SetBurninDestinationSettings(value); return *this;}
    inline CaptionDestinationSettings& WithBurninDestinationSettings(BurninDestinationSettings&& value) { SetBurninDestinationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the format for this set of captions on this output. The default format
     * is embedded without SCTE-20. Note that your choice of video output container
     * constrains your choice of output captions format. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/captions-support-tables.html.
     * If you are using SCTE-20 and you want to create an output that complies with the
     * SCTE-43 spec, choose SCTE-20 plus embedded. To create a non-compliant output
     * where the embedded captions come first, choose Embedded plus SCTE-20.
     */
    inline const CaptionDestinationType& GetDestinationType() const{ return m_destinationType; }
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }
    inline void SetDestinationType(const CaptionDestinationType& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }
    inline void SetDestinationType(CaptionDestinationType&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }
    inline CaptionDestinationSettings& WithDestinationType(const CaptionDestinationType& value) { SetDestinationType(value); return *this;}
    inline CaptionDestinationSettings& WithDestinationType(CaptionDestinationType&& value) { SetDestinationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to DVB-Sub captions. Set up DVB-Sub captions in the same output
     * as your video. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/dvb-sub-output-captions.html.
     */
    inline const DvbSubDestinationSettings& GetDvbSubDestinationSettings() const{ return m_dvbSubDestinationSettings; }
    inline bool DvbSubDestinationSettingsHasBeenSet() const { return m_dvbSubDestinationSettingsHasBeenSet; }
    inline void SetDvbSubDestinationSettings(const DvbSubDestinationSettings& value) { m_dvbSubDestinationSettingsHasBeenSet = true; m_dvbSubDestinationSettings = value; }
    inline void SetDvbSubDestinationSettings(DvbSubDestinationSettings&& value) { m_dvbSubDestinationSettingsHasBeenSet = true; m_dvbSubDestinationSettings = std::move(value); }
    inline CaptionDestinationSettings& WithDvbSubDestinationSettings(const DvbSubDestinationSettings& value) { SetDvbSubDestinationSettings(value); return *this;}
    inline CaptionDestinationSettings& WithDvbSubDestinationSettings(DvbSubDestinationSettings&& value) { SetDvbSubDestinationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to CEA/EIA-608 and CEA/EIA-708 (also called embedded or
     * ancillary) captions. Set up embedded captions in the same output as your video.
     * For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/embedded-output-captions.html.
     */
    inline const EmbeddedDestinationSettings& GetEmbeddedDestinationSettings() const{ return m_embeddedDestinationSettings; }
    inline bool EmbeddedDestinationSettingsHasBeenSet() const { return m_embeddedDestinationSettingsHasBeenSet; }
    inline void SetEmbeddedDestinationSettings(const EmbeddedDestinationSettings& value) { m_embeddedDestinationSettingsHasBeenSet = true; m_embeddedDestinationSettings = value; }
    inline void SetEmbeddedDestinationSettings(EmbeddedDestinationSettings&& value) { m_embeddedDestinationSettingsHasBeenSet = true; m_embeddedDestinationSettings = std::move(value); }
    inline CaptionDestinationSettings& WithEmbeddedDestinationSettings(const EmbeddedDestinationSettings& value) { SetEmbeddedDestinationSettings(value); return *this;}
    inline CaptionDestinationSettings& WithEmbeddedDestinationSettings(EmbeddedDestinationSettings&& value) { SetEmbeddedDestinationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to IMSC captions. IMSC is a sidecar format that holds captions
     * in a file that is separate from the video container. Set up sidecar captions in
     * the same output group, but different output from your video. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/ttml-and-webvtt-output-captions.html.
     */
    inline const ImscDestinationSettings& GetImscDestinationSettings() const{ return m_imscDestinationSettings; }
    inline bool ImscDestinationSettingsHasBeenSet() const { return m_imscDestinationSettingsHasBeenSet; }
    inline void SetImscDestinationSettings(const ImscDestinationSettings& value) { m_imscDestinationSettingsHasBeenSet = true; m_imscDestinationSettings = value; }
    inline void SetImscDestinationSettings(ImscDestinationSettings&& value) { m_imscDestinationSettingsHasBeenSet = true; m_imscDestinationSettings = std::move(value); }
    inline CaptionDestinationSettings& WithImscDestinationSettings(const ImscDestinationSettings& value) { SetImscDestinationSettings(value); return *this;}
    inline CaptionDestinationSettings& WithImscDestinationSettings(ImscDestinationSettings&& value) { SetImscDestinationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to SCC captions. SCC is a sidecar format that holds captions in
     * a file that is separate from the video container. Set up sidecar captions in the
     * same output group, but different output from your video. For more information,
     * see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/scc-srt-output-captions.html.
     */
    inline const SccDestinationSettings& GetSccDestinationSettings() const{ return m_sccDestinationSettings; }
    inline bool SccDestinationSettingsHasBeenSet() const { return m_sccDestinationSettingsHasBeenSet; }
    inline void SetSccDestinationSettings(const SccDestinationSettings& value) { m_sccDestinationSettingsHasBeenSet = true; m_sccDestinationSettings = value; }
    inline void SetSccDestinationSettings(SccDestinationSettings&& value) { m_sccDestinationSettingsHasBeenSet = true; m_sccDestinationSettings = std::move(value); }
    inline CaptionDestinationSettings& WithSccDestinationSettings(const SccDestinationSettings& value) { SetSccDestinationSettings(value); return *this;}
    inline CaptionDestinationSettings& WithSccDestinationSettings(SccDestinationSettings&& value) { SetSccDestinationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to SRT captions. SRT is a sidecar format that holds captions in
     * a file that is separate from the video container. Set up sidecar captions in the
     * same output group, but different output from your video.
     */
    inline const SrtDestinationSettings& GetSrtDestinationSettings() const{ return m_srtDestinationSettings; }
    inline bool SrtDestinationSettingsHasBeenSet() const { return m_srtDestinationSettingsHasBeenSet; }
    inline void SetSrtDestinationSettings(const SrtDestinationSettings& value) { m_srtDestinationSettingsHasBeenSet = true; m_srtDestinationSettings = value; }
    inline void SetSrtDestinationSettings(SrtDestinationSettings&& value) { m_srtDestinationSettingsHasBeenSet = true; m_srtDestinationSettings = std::move(value); }
    inline CaptionDestinationSettings& WithSrtDestinationSettings(const SrtDestinationSettings& value) { SetSrtDestinationSettings(value); return *this;}
    inline CaptionDestinationSettings& WithSrtDestinationSettings(SrtDestinationSettings&& value) { SetSrtDestinationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to teletext captions. Set up teletext captions in the same
     * output as your video. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/teletext-output-captions.html.
     */
    inline const TeletextDestinationSettings& GetTeletextDestinationSettings() const{ return m_teletextDestinationSettings; }
    inline bool TeletextDestinationSettingsHasBeenSet() const { return m_teletextDestinationSettingsHasBeenSet; }
    inline void SetTeletextDestinationSettings(const TeletextDestinationSettings& value) { m_teletextDestinationSettingsHasBeenSet = true; m_teletextDestinationSettings = value; }
    inline void SetTeletextDestinationSettings(TeletextDestinationSettings&& value) { m_teletextDestinationSettingsHasBeenSet = true; m_teletextDestinationSettings = std::move(value); }
    inline CaptionDestinationSettings& WithTeletextDestinationSettings(const TeletextDestinationSettings& value) { SetTeletextDestinationSettings(value); return *this;}
    inline CaptionDestinationSettings& WithTeletextDestinationSettings(TeletextDestinationSettings&& value) { SetTeletextDestinationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to TTML captions. TTML is a sidecar format that holds captions
     * in a file that is separate from the video container. Set up sidecar captions in
     * the same output group, but different output from your video. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/ttml-and-webvtt-output-captions.html.
     */
    inline const TtmlDestinationSettings& GetTtmlDestinationSettings() const{ return m_ttmlDestinationSettings; }
    inline bool TtmlDestinationSettingsHasBeenSet() const { return m_ttmlDestinationSettingsHasBeenSet; }
    inline void SetTtmlDestinationSettings(const TtmlDestinationSettings& value) { m_ttmlDestinationSettingsHasBeenSet = true; m_ttmlDestinationSettings = value; }
    inline void SetTtmlDestinationSettings(TtmlDestinationSettings&& value) { m_ttmlDestinationSettingsHasBeenSet = true; m_ttmlDestinationSettings = std::move(value); }
    inline CaptionDestinationSettings& WithTtmlDestinationSettings(const TtmlDestinationSettings& value) { SetTtmlDestinationSettings(value); return *this;}
    inline CaptionDestinationSettings& WithTtmlDestinationSettings(TtmlDestinationSettings&& value) { SetTtmlDestinationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to WebVTT captions. WebVTT is a sidecar format that holds
     * captions in a file that is separate from the video container. Set up sidecar
     * captions in the same output group, but different output from your video. For
     * more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/ttml-and-webvtt-output-captions.html.
     */
    inline const WebvttDestinationSettings& GetWebvttDestinationSettings() const{ return m_webvttDestinationSettings; }
    inline bool WebvttDestinationSettingsHasBeenSet() const { return m_webvttDestinationSettingsHasBeenSet; }
    inline void SetWebvttDestinationSettings(const WebvttDestinationSettings& value) { m_webvttDestinationSettingsHasBeenSet = true; m_webvttDestinationSettings = value; }
    inline void SetWebvttDestinationSettings(WebvttDestinationSettings&& value) { m_webvttDestinationSettingsHasBeenSet = true; m_webvttDestinationSettings = std::move(value); }
    inline CaptionDestinationSettings& WithWebvttDestinationSettings(const WebvttDestinationSettings& value) { SetWebvttDestinationSettings(value); return *this;}
    inline CaptionDestinationSettings& WithWebvttDestinationSettings(WebvttDestinationSettings&& value) { SetWebvttDestinationSettings(std::move(value)); return *this;}
    ///@}
  private:

    BurninDestinationSettings m_burninDestinationSettings;
    bool m_burninDestinationSettingsHasBeenSet = false;

    CaptionDestinationType m_destinationType;
    bool m_destinationTypeHasBeenSet = false;

    DvbSubDestinationSettings m_dvbSubDestinationSettings;
    bool m_dvbSubDestinationSettingsHasBeenSet = false;

    EmbeddedDestinationSettings m_embeddedDestinationSettings;
    bool m_embeddedDestinationSettingsHasBeenSet = false;

    ImscDestinationSettings m_imscDestinationSettings;
    bool m_imscDestinationSettingsHasBeenSet = false;

    SccDestinationSettings m_sccDestinationSettings;
    bool m_sccDestinationSettingsHasBeenSet = false;

    SrtDestinationSettings m_srtDestinationSettings;
    bool m_srtDestinationSettingsHasBeenSet = false;

    TeletextDestinationSettings m_teletextDestinationSettings;
    bool m_teletextDestinationSettingsHasBeenSet = false;

    TtmlDestinationSettings m_ttmlDestinationSettings;
    bool m_ttmlDestinationSettingsHasBeenSet = false;

    WebvttDestinationSettings m_webvttDestinationSettings;
    bool m_webvttDestinationSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
