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
   * Settings for the action to insert a user-defined ID3 tag in each HLS
   * segment<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsId3SegmentTaggingScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class HlsId3SegmentTaggingScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API HlsId3SegmentTaggingScheduleActionSettings();
    AWS_MEDIALIVE_API HlsId3SegmentTaggingScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API HlsId3SegmentTaggingScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * ID3 tag to insert into each segment. Supports special keyword identifiers to
     * substitute in segment-related values.\nSupported keyword identifiers:
     * https://docs.aws.amazon.com/medialive/latest/ug/variable-data-identifiers.html
     */
    inline const Aws::String& GetTag() const{ return m_tag; }
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }
    inline void SetTag(const Aws::String& value) { m_tagHasBeenSet = true; m_tag = value; }
    inline void SetTag(Aws::String&& value) { m_tagHasBeenSet = true; m_tag = std::move(value); }
    inline void SetTag(const char* value) { m_tagHasBeenSet = true; m_tag.assign(value); }
    inline HlsId3SegmentTaggingScheduleActionSettings& WithTag(const Aws::String& value) { SetTag(value); return *this;}
    inline HlsId3SegmentTaggingScheduleActionSettings& WithTag(Aws::String&& value) { SetTag(std::move(value)); return *this;}
    inline HlsId3SegmentTaggingScheduleActionSettings& WithTag(const char* value) { SetTag(value); return *this;}
    ///@}

    ///@{
    /**
     * Base64 string formatted according to the ID3 specification:
     * http://id3.org/id3v2.4.0-structure
     */
    inline const Aws::String& GetId3() const{ return m_id3; }
    inline bool Id3HasBeenSet() const { return m_id3HasBeenSet; }
    inline void SetId3(const Aws::String& value) { m_id3HasBeenSet = true; m_id3 = value; }
    inline void SetId3(Aws::String&& value) { m_id3HasBeenSet = true; m_id3 = std::move(value); }
    inline void SetId3(const char* value) { m_id3HasBeenSet = true; m_id3.assign(value); }
    inline HlsId3SegmentTaggingScheduleActionSettings& WithId3(const Aws::String& value) { SetId3(value); return *this;}
    inline HlsId3SegmentTaggingScheduleActionSettings& WithId3(Aws::String&& value) { SetId3(std::move(value)); return *this;}
    inline HlsId3SegmentTaggingScheduleActionSettings& WithId3(const char* value) { SetId3(value); return *this;}
    ///@}
  private:

    Aws::String m_tag;
    bool m_tagHasBeenSet = false;

    Aws::String m_id3;
    bool m_id3HasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
