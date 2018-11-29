﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ram/model/ResourceShare.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RAM
{
namespace Model
{

ResourceShare::ResourceShare() : 
    m_resourceShareArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_owningAccountIdHasBeenSet(false),
    m_allowExternalPrincipals(false),
    m_allowExternalPrincipalsHasBeenSet(false),
    m_status(ResourceShareStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

ResourceShare::ResourceShare(JsonView jsonValue) : 
    m_resourceShareArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_owningAccountIdHasBeenSet(false),
    m_allowExternalPrincipals(false),
    m_allowExternalPrincipalsHasBeenSet(false),
    m_status(ResourceShareStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceShare& ResourceShare::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceShareArn"))
  {
    m_resourceShareArn = jsonValue.GetString("resourceShareArn");

    m_resourceShareArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owningAccountId"))
  {
    m_owningAccountId = jsonValue.GetString("owningAccountId");

    m_owningAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowExternalPrincipals"))
  {
    m_allowExternalPrincipals = jsonValue.GetBool("allowExternalPrincipals");

    m_allowExternalPrincipalsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceShareStatusMapper::GetResourceShareStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceShare::Jsonize() const
{
  JsonValue payload;

  if(m_resourceShareArnHasBeenSet)
  {
   payload.WithString("resourceShareArn", m_resourceShareArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_owningAccountIdHasBeenSet)
  {
   payload.WithString("owningAccountId", m_owningAccountId);

  }

  if(m_allowExternalPrincipalsHasBeenSet)
  {
   payload.WithBool("allowExternalPrincipals", m_allowExternalPrincipals);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ResourceShareStatusMapper::GetNameForResourceShareStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace RAM
} // namespace Aws