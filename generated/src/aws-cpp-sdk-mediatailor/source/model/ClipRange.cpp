﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ClipRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

ClipRange::ClipRange() : 
    m_endOffsetMillis(0),
    m_endOffsetMillisHasBeenSet(false),
    m_startOffsetMillis(0),
    m_startOffsetMillisHasBeenSet(false)
{
}

ClipRange::ClipRange(JsonView jsonValue)
  : ClipRange()
{
  *this = jsonValue;
}

ClipRange& ClipRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndOffsetMillis"))
  {
    m_endOffsetMillis = jsonValue.GetInt64("EndOffsetMillis");

    m_endOffsetMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartOffsetMillis"))
  {
    m_startOffsetMillis = jsonValue.GetInt64("StartOffsetMillis");

    m_startOffsetMillisHasBeenSet = true;
  }

  return *this;
}

JsonValue ClipRange::Jsonize() const
{
  JsonValue payload;

  if(m_endOffsetMillisHasBeenSet)
  {
   payload.WithInt64("EndOffsetMillis", m_endOffsetMillis);

  }

  if(m_startOffsetMillisHasBeenSet)
  {
   payload.WithInt64("StartOffsetMillis", m_startOffsetMillis);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
