﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ComplianceType.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByResourceRequest">AWS
   * API Reference</a></p>
   */
  class GetComplianceDetailsByResourceRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API GetComplianceDetailsByResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComplianceDetailsByResource"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The type of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline GetComplianceDetailsByResourceRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline GetComplianceDetailsByResourceRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline GetComplianceDetailsByResourceRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline GetComplianceDetailsByResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline GetComplianceDetailsByResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline GetComplianceDetailsByResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results by compliance.</p> <p> <code>INSUFFICIENT_DATA</code> is
     * a valid <code>ComplianceType</code> that is returned when an Config rule cannot
     * be evaluated. However, <code>INSUFFICIENT_DATA</code> cannot be used as a
     * <code>ComplianceType</code> for filtering results.</p>
     */
    inline const Aws::Vector<ComplianceType>& GetComplianceTypes() const{ return m_complianceTypes; }
    inline bool ComplianceTypesHasBeenSet() const { return m_complianceTypesHasBeenSet; }
    inline void SetComplianceTypes(const Aws::Vector<ComplianceType>& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes = value; }
    inline void SetComplianceTypes(Aws::Vector<ComplianceType>&& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes = std::move(value); }
    inline GetComplianceDetailsByResourceRequest& WithComplianceTypes(const Aws::Vector<ComplianceType>& value) { SetComplianceTypes(value); return *this;}
    inline GetComplianceDetailsByResourceRequest& WithComplianceTypes(Aws::Vector<ComplianceType>&& value) { SetComplianceTypes(std::move(value)); return *this;}
    inline GetComplianceDetailsByResourceRequest& AddComplianceTypes(const ComplianceType& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes.push_back(value); return *this; }
    inline GetComplianceDetailsByResourceRequest& AddComplianceTypes(ComplianceType&& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetComplianceDetailsByResourceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetComplianceDetailsByResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetComplianceDetailsByResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of Amazon Web Services resource execution for which you want to
     * retrieve evaluation results. </p>  <p>You need to only provide either a
     * <code>ResourceEvaluationID</code> or a <code>ResourceID </code>and
     * <code>ResourceType</code>.</p> 
     */
    inline const Aws::String& GetResourceEvaluationId() const{ return m_resourceEvaluationId; }
    inline bool ResourceEvaluationIdHasBeenSet() const { return m_resourceEvaluationIdHasBeenSet; }
    inline void SetResourceEvaluationId(const Aws::String& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = value; }
    inline void SetResourceEvaluationId(Aws::String&& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = std::move(value); }
    inline void SetResourceEvaluationId(const char* value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId.assign(value); }
    inline GetComplianceDetailsByResourceRequest& WithResourceEvaluationId(const Aws::String& value) { SetResourceEvaluationId(value); return *this;}
    inline GetComplianceDetailsByResourceRequest& WithResourceEvaluationId(Aws::String&& value) { SetResourceEvaluationId(std::move(value)); return *this;}
    inline GetComplianceDetailsByResourceRequest& WithResourceEvaluationId(const char* value) { SetResourceEvaluationId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<ComplianceType> m_complianceTypes;
    bool m_complianceTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_resourceEvaluationId;
    bool m_resourceEvaluationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
