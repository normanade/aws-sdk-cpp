﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Encryption.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The file format of the output captions. If you leave this value blank,
   * Elastic Transcoder returns an error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CaptionFormat">AWS
   * API Reference</a></p>
   */
  class CaptionFormat
  {
  public:
    AWS_ELASTICTRANSCODER_API CaptionFormat();
    AWS_ELASTICTRANSCODER_API CaptionFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API CaptionFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format you specify determines whether Elastic Transcoder generates an
     * embedded or sidecar caption for this output.</p> <ul> <li> <p> <b>Valid Embedded
     * Caption Formats:</b> </p> <ul> <li> <p> <b>for FLAC</b>: None</p> </li> <li> <p>
     * <b>For MP3</b>: None</p> </li> <li> <p> <b>For MP4</b>: mov-text</p> </li> <li>
     * <p> <b>For MPEG-TS</b>: None</p> </li> <li> <p> <b>For ogg</b>: None</p> </li>
     * <li> <p> <b>For webm</b>: None</p> </li> </ul> </li> <li> <p> <b>Valid Sidecar
     * Caption Formats:</b> Elastic Transcoder supports dfxp (first div element only),
     * scc, srt, and webvtt. If you want ttml or smpte-tt compatible captions, specify
     * dfxp as your output format.</p> <ul> <li> <p> <b>For FMP4</b>: dfxp</p> </li>
     * <li> <p> <b>Non-FMP4 outputs</b>: All sidecar types</p> </li> </ul> <p>
     * <code>fmp4</code> captions have an extension of <code>.ismt</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }
    inline CaptionFormat& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline CaptionFormat& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline CaptionFormat& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for caption filenames, in the form
     * <i>description</i>-<code>{language}</code>, where:</p> <ul> <li> <p>
     * <i>description</i> is a description of the video.</p> </li> <li> <p>
     * <code>{language}</code> is a literal value that Elastic Transcoder replaces with
     * the two- or three-letter code for the language of the caption in the output file
     * names.</p> </li> </ul> <p>If you don't include <code>{language}</code> in the
     * file name pattern, Elastic Transcoder automatically appends
     * "<code>{language}</code>" to the value that you specify for the description. In
     * addition, Elastic Transcoder automatically appends the count to the end of the
     * segment files.</p> <p>For example, suppose you're transcoding into srt format.
     * When you enter "Sydney-{language}-sunrise", and the language of the captions is
     * English (en), the name of the first caption file is be
     * Sydney-en-sunrise00000.srt.</p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }
    inline CaptionFormat& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}
    inline CaptionFormat& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}
    inline CaptionFormat& WithPattern(const char* value) { SetPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your caption formats.</p>
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }
    inline CaptionFormat& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}
    inline CaptionFormat& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
