﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RateBasedStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/Statement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

RateBasedStatement::RateBasedStatement() : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_evaluationWindowSec(0),
    m_evaluationWindowSecHasBeenSet(false),
    m_aggregateKeyType(RateBasedStatementAggregateKeyType::NOT_SET),
    m_aggregateKeyTypeHasBeenSet(false),
    m_scopeDownStatementHasBeenSet(false),
    m_forwardedIPConfigHasBeenSet(false),
    m_customKeysHasBeenSet(false)
{
}

RateBasedStatement::RateBasedStatement(JsonView jsonValue)
  : RateBasedStatement()
{
  *this = jsonValue;
}

const Statement& RateBasedStatement::GetScopeDownStatement() const{ return *m_scopeDownStatement; }
bool RateBasedStatement::ScopeDownStatementHasBeenSet() const { return m_scopeDownStatementHasBeenSet; }
void RateBasedStatement::SetScopeDownStatement(const Statement& value) { m_scopeDownStatementHasBeenSet = true; m_scopeDownStatement = Aws::MakeShared<Statement>("RateBasedStatement", value); }
void RateBasedStatement::SetScopeDownStatement(Statement&& value) { m_scopeDownStatementHasBeenSet = true; m_scopeDownStatement = Aws::MakeShared<Statement>("RateBasedStatement", std::move(value)); }
RateBasedStatement& RateBasedStatement::WithScopeDownStatement(const Statement& value) { SetScopeDownStatement(value); return *this;}
RateBasedStatement& RateBasedStatement::WithScopeDownStatement(Statement&& value) { SetScopeDownStatement(std::move(value)); return *this;}

RateBasedStatement& RateBasedStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Limit"))
  {
    m_limit = jsonValue.GetInt64("Limit");

    m_limitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationWindowSec"))
  {
    m_evaluationWindowSec = jsonValue.GetInt64("EvaluationWindowSec");

    m_evaluationWindowSecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AggregateKeyType"))
  {
    m_aggregateKeyType = RateBasedStatementAggregateKeyTypeMapper::GetRateBasedStatementAggregateKeyTypeForName(jsonValue.GetString("AggregateKeyType"));

    m_aggregateKeyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScopeDownStatement"))
  {
    m_scopeDownStatement = Aws::MakeShared<Statement>("RateBasedStatement", jsonValue.GetObject("ScopeDownStatement"));

    m_scopeDownStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForwardedIPConfig"))
  {
    m_forwardedIPConfig = jsonValue.GetObject("ForwardedIPConfig");

    m_forwardedIPConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomKeys"))
  {
    Aws::Utils::Array<JsonView> customKeysJsonList = jsonValue.GetArray("CustomKeys");
    for(unsigned customKeysIndex = 0; customKeysIndex < customKeysJsonList.GetLength(); ++customKeysIndex)
    {
      m_customKeys.push_back(customKeysJsonList[customKeysIndex].AsObject());
    }
    m_customKeysHasBeenSet = true;
  }

  return *this;
}

JsonValue RateBasedStatement::Jsonize() const
{
  JsonValue payload;

  if(m_limitHasBeenSet)
  {
   payload.WithInt64("Limit", m_limit);

  }

  if(m_evaluationWindowSecHasBeenSet)
  {
   payload.WithInt64("EvaluationWindowSec", m_evaluationWindowSec);

  }

  if(m_aggregateKeyTypeHasBeenSet)
  {
   payload.WithString("AggregateKeyType", RateBasedStatementAggregateKeyTypeMapper::GetNameForRateBasedStatementAggregateKeyType(m_aggregateKeyType));
  }

  if(m_scopeDownStatementHasBeenSet)
  {
   payload.WithObject("ScopeDownStatement", m_scopeDownStatement->Jsonize());

  }

  if(m_forwardedIPConfigHasBeenSet)
  {
   payload.WithObject("ForwardedIPConfig", m_forwardedIPConfig.Jsonize());

  }

  if(m_customKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customKeysJsonList(m_customKeys.size());
   for(unsigned customKeysIndex = 0; customKeysIndex < customKeysJsonList.GetLength(); ++customKeysIndex)
   {
     customKeysJsonList[customKeysIndex].AsObject(m_customKeys[customKeysIndex].Jsonize());
   }
   payload.WithArray("CustomKeys", std::move(customKeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
