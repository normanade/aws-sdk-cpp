﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/ScaleOutPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

ScaleOutPolicy::ScaleOutPolicy() : 
    m_cpuUtilizationPercentage(0),
    m_cpuUtilizationPercentageHasBeenSet(false)
{
}

ScaleOutPolicy::ScaleOutPolicy(JsonView jsonValue)
  : ScaleOutPolicy()
{
  *this = jsonValue;
}

ScaleOutPolicy& ScaleOutPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cpuUtilizationPercentage"))
  {
    m_cpuUtilizationPercentage = jsonValue.GetInteger("cpuUtilizationPercentage");

    m_cpuUtilizationPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue ScaleOutPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_cpuUtilizationPercentageHasBeenSet)
  {
   payload.WithInteger("cpuUtilizationPercentage", m_cpuUtilizationPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
