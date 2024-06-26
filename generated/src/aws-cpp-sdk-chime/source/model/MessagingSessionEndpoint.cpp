﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/MessagingSessionEndpoint.h>
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

MessagingSessionEndpoint::MessagingSessionEndpoint() : 
    m_urlHasBeenSet(false)
{
}

MessagingSessionEndpoint::MessagingSessionEndpoint(JsonView jsonValue)
  : MessagingSessionEndpoint()
{
  *this = jsonValue;
}

MessagingSessionEndpoint& MessagingSessionEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue MessagingSessionEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
