﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A list of IP addresses and address ranges, in CIDR notation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupVariablesIpSetsDetails">AWS
   * API Reference</a></p>
   */
  class RuleGroupVariablesIpSetsDetails
  {
  public:
    AWS_SECURITYHUB_API RuleGroupVariablesIpSetsDetails();
    AWS_SECURITYHUB_API RuleGroupVariablesIpSetsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupVariablesIpSetsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of IP addresses and ranges.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const Aws::Vector<Aws::String>& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(Aws::Vector<Aws::String>&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline RuleGroupVariablesIpSetsDetails& WithDefinition(const Aws::Vector<Aws::String>& value) { SetDefinition(value); return *this;}
    inline RuleGroupVariablesIpSetsDetails& WithDefinition(Aws::Vector<Aws::String>&& value) { SetDefinition(std::move(value)); return *this;}
    inline RuleGroupVariablesIpSetsDetails& AddDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition.push_back(value); return *this; }
    inline RuleGroupVariablesIpSetsDetails& AddDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition.push_back(std::move(value)); return *this; }
    inline RuleGroupVariablesIpSetsDetails& AddDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_definition;
    bool m_definitionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
