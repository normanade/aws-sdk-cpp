﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/Directory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

Directory::Directory() : 
    m_nameHasBeenSet(false),
    m_directoryArnHasBeenSet(false),
    m_state(DirectoryState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false)
{
}

Directory::Directory(JsonView jsonValue)
  : Directory()
{
  *this = jsonValue;
}

Directory& Directory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryArn"))
  {
    m_directoryArn = jsonValue.GetString("DirectoryArn");

    m_directoryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = DirectoryStateMapper::GetDirectoryStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("CreationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Directory::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_directoryArnHasBeenSet)
  {
   payload.WithString("DirectoryArn", m_directoryArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", DirectoryStateMapper::GetNameForDirectoryState(m_state));
  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("CreationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
