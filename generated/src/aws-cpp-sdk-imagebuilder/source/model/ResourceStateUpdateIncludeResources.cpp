﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ResourceStateUpdateIncludeResources.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ResourceStateUpdateIncludeResources::ResourceStateUpdateIncludeResources() : 
    m_amis(false),
    m_amisHasBeenSet(false),
    m_snapshots(false),
    m_snapshotsHasBeenSet(false),
    m_containers(false),
    m_containersHasBeenSet(false)
{
}

ResourceStateUpdateIncludeResources::ResourceStateUpdateIncludeResources(JsonView jsonValue)
  : ResourceStateUpdateIncludeResources()
{
  *this = jsonValue;
}

ResourceStateUpdateIncludeResources& ResourceStateUpdateIncludeResources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amis"))
  {
    m_amis = jsonValue.GetBool("amis");

    m_amisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshots"))
  {
    m_snapshots = jsonValue.GetBool("snapshots");

    m_snapshotsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containers"))
  {
    m_containers = jsonValue.GetBool("containers");

    m_containersHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceStateUpdateIncludeResources::Jsonize() const
{
  JsonValue payload;

  if(m_amisHasBeenSet)
  {
   payload.WithBool("amis", m_amis);

  }

  if(m_snapshotsHasBeenSet)
  {
   payload.WithBool("snapshots", m_snapshots);

  }

  if(m_containersHasBeenSet)
  {
   payload.WithBool("containers", m_containers);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
