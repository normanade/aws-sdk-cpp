﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/Scte35Descriptor.h>
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
   * Settings for a SCTE-35 time_signal.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35TimeSignalScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class Scte35TimeSignalScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API Scte35TimeSignalScheduleActionSettings();
    AWS_MEDIALIVE_API Scte35TimeSignalScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Scte35TimeSignalScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The list of SCTE-35 descriptors accompanying the SCTE-35 time_signal.
     */
    inline const Aws::Vector<Scte35Descriptor>& GetScte35Descriptors() const{ return m_scte35Descriptors; }
    inline bool Scte35DescriptorsHasBeenSet() const { return m_scte35DescriptorsHasBeenSet; }
    inline void SetScte35Descriptors(const Aws::Vector<Scte35Descriptor>& value) { m_scte35DescriptorsHasBeenSet = true; m_scte35Descriptors = value; }
    inline void SetScte35Descriptors(Aws::Vector<Scte35Descriptor>&& value) { m_scte35DescriptorsHasBeenSet = true; m_scte35Descriptors = std::move(value); }
    inline Scte35TimeSignalScheduleActionSettings& WithScte35Descriptors(const Aws::Vector<Scte35Descriptor>& value) { SetScte35Descriptors(value); return *this;}
    inline Scte35TimeSignalScheduleActionSettings& WithScte35Descriptors(Aws::Vector<Scte35Descriptor>&& value) { SetScte35Descriptors(std::move(value)); return *this;}
    inline Scte35TimeSignalScheduleActionSettings& AddScte35Descriptors(const Scte35Descriptor& value) { m_scte35DescriptorsHasBeenSet = true; m_scte35Descriptors.push_back(value); return *this; }
    inline Scte35TimeSignalScheduleActionSettings& AddScte35Descriptors(Scte35Descriptor&& value) { m_scte35DescriptorsHasBeenSet = true; m_scte35Descriptors.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Scte35Descriptor> m_scte35Descriptors;
    bool m_scte35DescriptorsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
