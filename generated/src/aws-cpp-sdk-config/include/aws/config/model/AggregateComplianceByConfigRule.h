﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/Compliance.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Indicates whether an Config rule is compliant based on account ID, region,
   * compliance, and rule name.</p> <p>A rule is compliant if all of the resources
   * that the rule evaluated comply with it. It is noncompliant if any of these
   * resources do not comply.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregateComplianceByConfigRule">AWS
   * API Reference</a></p>
   */
  class AggregateComplianceByConfigRule
  {
  public:
    AWS_CONFIGSERVICE_API AggregateComplianceByConfigRule();
    AWS_CONFIGSERVICE_API AggregateComplianceByConfigRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregateComplianceByConfigRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }
    inline AggregateComplianceByConfigRule& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}
    inline AggregateComplianceByConfigRule& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}
    inline AggregateComplianceByConfigRule& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an Amazon Web Services resource or Config rule is compliant
     * and provides the number of contributors that affect the compliance.</p>
     */
    inline const Compliance& GetCompliance() const{ return m_compliance; }
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }
    inline void SetCompliance(const Compliance& value) { m_complianceHasBeenSet = true; m_compliance = value; }
    inline void SetCompliance(Compliance&& value) { m_complianceHasBeenSet = true; m_compliance = std::move(value); }
    inline AggregateComplianceByConfigRule& WithCompliance(const Compliance& value) { SetCompliance(value); return *this;}
    inline AggregateComplianceByConfigRule& WithCompliance(Compliance&& value) { SetCompliance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline AggregateComplianceByConfigRule& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline AggregateComplianceByConfigRule& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline AggregateComplianceByConfigRule& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source region from where the data is aggregated.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }
    inline AggregateComplianceByConfigRule& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}
    inline AggregateComplianceByConfigRule& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}
    inline AggregateComplianceByConfigRule& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    Compliance m_compliance;
    bool m_complianceHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
