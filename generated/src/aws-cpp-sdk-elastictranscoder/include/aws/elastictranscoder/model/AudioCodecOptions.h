﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>Options associated with your audio codec.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/AudioCodecOptions">AWS
   * API Reference</a></p>
   */
  class AudioCodecOptions
  {
  public:
    AWS_ELASTICTRANSCODER_API AudioCodecOptions();
    AWS_ELASTICTRANSCODER_API AudioCodecOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API AudioCodecOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>You can only choose an audio profile when you specify AAC for the value of
     * Audio:Codec.</p> <p>Specify the AAC profile for the output file. Elastic
     * Transcoder supports the following profiles:</p> <ul> <li> <p> <code>auto</code>:
     * If you specify <code>auto</code>, Elastic Transcoder selects the profile based
     * on the bit rate selected for the output file.</p> </li> <li> <p>
     * <code>AAC-LC</code>: The most common AAC profile. Use for bit rates larger than
     * 64 kbps.</p> </li> <li> <p> <code>HE-AAC</code>: Not supported on some older
     * players and devices. Use for bit rates between 40 and 80 kbps.</p> </li> <li>
     * <p> <code>HE-AACv2</code>: Not supported on some players and devices. Use for
     * bit rates less than 48 kbps.</p> </li> </ul> <p>All outputs in a
     * <code>Smooth</code> playlist must have the same value for
     * <code>Profile</code>.</p>  <p>If you created any presets before AAC
     * profiles were added, Elastic Transcoder automatically updated your presets to
     * use AAC-LC. You can change the value as required.</p> 
     */
    inline const Aws::String& GetProfile() const{ return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    inline void SetProfile(const Aws::String& value) { m_profileHasBeenSet = true; m_profile = value; }
    inline void SetProfile(Aws::String&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }
    inline void SetProfile(const char* value) { m_profileHasBeenSet = true; m_profile.assign(value); }
    inline AudioCodecOptions& WithProfile(const Aws::String& value) { SetProfile(value); return *this;}
    inline AudioCodecOptions& WithProfile(Aws::String&& value) { SetProfile(std::move(value)); return *this;}
    inline AudioCodecOptions& WithProfile(const char* value) { SetProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can only choose an audio bit depth when you specify <code>flac</code> or
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>The bit depth of a sample
     * is how many bits of information are included in the audio samples. The higher
     * the bit depth, the better the audio, but the larger the file.</p> <p>Valid
     * values are <code>16</code> and <code>24</code>.</p> <p>The most common bit depth
     * is <code>24</code>.</p>
     */
    inline const Aws::String& GetBitDepth() const{ return m_bitDepth; }
    inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }
    inline void SetBitDepth(const Aws::String& value) { m_bitDepthHasBeenSet = true; m_bitDepth = value; }
    inline void SetBitDepth(Aws::String&& value) { m_bitDepthHasBeenSet = true; m_bitDepth = std::move(value); }
    inline void SetBitDepth(const char* value) { m_bitDepthHasBeenSet = true; m_bitDepth.assign(value); }
    inline AudioCodecOptions& WithBitDepth(const Aws::String& value) { SetBitDepth(value); return *this;}
    inline AudioCodecOptions& WithBitDepth(Aws::String&& value) { SetBitDepth(std::move(value)); return *this;}
    inline AudioCodecOptions& WithBitDepth(const char* value) { SetBitDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can only choose an audio bit order when you specify <code>pcm</code> for
     * the value of Audio:Codec.</p> <p>The order the bits of a PCM sample are stored
     * in.</p> <p>The supported value is <code>LittleEndian</code>.</p>
     */
    inline const Aws::String& GetBitOrder() const{ return m_bitOrder; }
    inline bool BitOrderHasBeenSet() const { return m_bitOrderHasBeenSet; }
    inline void SetBitOrder(const Aws::String& value) { m_bitOrderHasBeenSet = true; m_bitOrder = value; }
    inline void SetBitOrder(Aws::String&& value) { m_bitOrderHasBeenSet = true; m_bitOrder = std::move(value); }
    inline void SetBitOrder(const char* value) { m_bitOrderHasBeenSet = true; m_bitOrder.assign(value); }
    inline AudioCodecOptions& WithBitOrder(const Aws::String& value) { SetBitOrder(value); return *this;}
    inline AudioCodecOptions& WithBitOrder(Aws::String&& value) { SetBitOrder(std::move(value)); return *this;}
    inline AudioCodecOptions& WithBitOrder(const char* value) { SetBitOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can only choose whether an audio sample is signed when you specify
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>Whether audio samples are
     * represented with negative and positive numbers (signed) or only positive numbers
     * (unsigned).</p> <p>The supported value is <code>Signed</code>.</p>
     */
    inline const Aws::String& GetSigned() const{ return m_signed; }
    inline bool SignedHasBeenSet() const { return m_signedHasBeenSet; }
    inline void SetSigned(const Aws::String& value) { m_signedHasBeenSet = true; m_signed = value; }
    inline void SetSigned(Aws::String&& value) { m_signedHasBeenSet = true; m_signed = std::move(value); }
    inline void SetSigned(const char* value) { m_signedHasBeenSet = true; m_signed.assign(value); }
    inline AudioCodecOptions& WithSigned(const Aws::String& value) { SetSigned(value); return *this;}
    inline AudioCodecOptions& WithSigned(Aws::String&& value) { SetSigned(std::move(value)); return *this;}
    inline AudioCodecOptions& WithSigned(const char* value) { SetSigned(value); return *this;}
    ///@}
  private:

    Aws::String m_profile;
    bool m_profileHasBeenSet = false;

    Aws::String m_bitDepth;
    bool m_bitDepthHasBeenSet = false;

    Aws::String m_bitOrder;
    bool m_bitOrderHasBeenSet = false;

    Aws::String m_signed;
    bool m_signedHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
