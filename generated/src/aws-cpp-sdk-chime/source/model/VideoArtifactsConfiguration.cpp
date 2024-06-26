﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/VideoArtifactsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

VideoArtifactsConfiguration::VideoArtifactsConfiguration() : 
    m_state(ArtifactsState::NOT_SET),
    m_stateHasBeenSet(false),
    m_muxType(VideoMuxType::NOT_SET),
    m_muxTypeHasBeenSet(false)
{
}

VideoArtifactsConfiguration::VideoArtifactsConfiguration(JsonView jsonValue)
  : VideoArtifactsConfiguration()
{
  *this = jsonValue;
}

VideoArtifactsConfiguration& VideoArtifactsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = ArtifactsStateMapper::GetArtifactsStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MuxType"))
  {
    m_muxType = VideoMuxTypeMapper::GetVideoMuxTypeForName(jsonValue.GetString("MuxType"));

    m_muxTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoArtifactsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ArtifactsStateMapper::GetNameForArtifactsState(m_state));
  }

  if(m_muxTypeHasBeenSet)
  {
   payload.WithString("MuxType", VideoMuxTypeMapper::GetNameForVideoMuxType(m_muxType));
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
