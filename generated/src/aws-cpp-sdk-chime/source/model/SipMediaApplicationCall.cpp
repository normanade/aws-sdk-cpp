﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/SipMediaApplicationCall.h>
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

SipMediaApplicationCall::SipMediaApplicationCall() : 
    m_transactionIdHasBeenSet(false)
{
}

SipMediaApplicationCall::SipMediaApplicationCall(JsonView jsonValue)
  : SipMediaApplicationCall()
{
  *this = jsonValue;
}

SipMediaApplicationCall& SipMediaApplicationCall::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransactionId"))
  {
    m_transactionId = jsonValue.GetString("TransactionId");

    m_transactionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SipMediaApplicationCall::Jsonize() const
{
  JsonValue payload;

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("TransactionId", m_transactionId);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
