﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProductViewDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisioningArtifactSummary.h>
#include <aws/servicecatalog/model/Tag.h>
#include <aws/servicecatalog/model/TagOptionDetail.h>
#include <aws/servicecatalog/model/BudgetDetail.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{
  class DescribeProductAsAdminResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeProductAsAdminResult();
    AWS_SERVICECATALOG_API DescribeProductAsAdminResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeProductAsAdminResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the product view.</p>
     */
    inline const ProductViewDetail& GetProductViewDetail() const{ return m_productViewDetail; }
    inline void SetProductViewDetail(const ProductViewDetail& value) { m_productViewDetail = value; }
    inline void SetProductViewDetail(ProductViewDetail&& value) { m_productViewDetail = std::move(value); }
    inline DescribeProductAsAdminResult& WithProductViewDetail(const ProductViewDetail& value) { SetProductViewDetail(value); return *this;}
    inline DescribeProductAsAdminResult& WithProductViewDetail(ProductViewDetail&& value) { SetProductViewDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the provisioning artifacts (also known as versions) for the
     * specified product.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactSummary>& GetProvisioningArtifactSummaries() const{ return m_provisioningArtifactSummaries; }
    inline void SetProvisioningArtifactSummaries(const Aws::Vector<ProvisioningArtifactSummary>& value) { m_provisioningArtifactSummaries = value; }
    inline void SetProvisioningArtifactSummaries(Aws::Vector<ProvisioningArtifactSummary>&& value) { m_provisioningArtifactSummaries = std::move(value); }
    inline DescribeProductAsAdminResult& WithProvisioningArtifactSummaries(const Aws::Vector<ProvisioningArtifactSummary>& value) { SetProvisioningArtifactSummaries(value); return *this;}
    inline DescribeProductAsAdminResult& WithProvisioningArtifactSummaries(Aws::Vector<ProvisioningArtifactSummary>&& value) { SetProvisioningArtifactSummaries(std::move(value)); return *this;}
    inline DescribeProductAsAdminResult& AddProvisioningArtifactSummaries(const ProvisioningArtifactSummary& value) { m_provisioningArtifactSummaries.push_back(value); return *this; }
    inline DescribeProductAsAdminResult& AddProvisioningArtifactSummaries(ProvisioningArtifactSummary&& value) { m_provisioningArtifactSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline DescribeProductAsAdminResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline DescribeProductAsAdminResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeProductAsAdminResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline DescribeProductAsAdminResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the TagOptions associated with the product.</p>
     */
    inline const Aws::Vector<TagOptionDetail>& GetTagOptions() const{ return m_tagOptions; }
    inline void SetTagOptions(const Aws::Vector<TagOptionDetail>& value) { m_tagOptions = value; }
    inline void SetTagOptions(Aws::Vector<TagOptionDetail>&& value) { m_tagOptions = std::move(value); }
    inline DescribeProductAsAdminResult& WithTagOptions(const Aws::Vector<TagOptionDetail>& value) { SetTagOptions(value); return *this;}
    inline DescribeProductAsAdminResult& WithTagOptions(Aws::Vector<TagOptionDetail>&& value) { SetTagOptions(std::move(value)); return *this;}
    inline DescribeProductAsAdminResult& AddTagOptions(const TagOptionDetail& value) { m_tagOptions.push_back(value); return *this; }
    inline DescribeProductAsAdminResult& AddTagOptions(TagOptionDetail&& value) { m_tagOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the associated budgets.</p>
     */
    inline const Aws::Vector<BudgetDetail>& GetBudgets() const{ return m_budgets; }
    inline void SetBudgets(const Aws::Vector<BudgetDetail>& value) { m_budgets = value; }
    inline void SetBudgets(Aws::Vector<BudgetDetail>&& value) { m_budgets = std::move(value); }
    inline DescribeProductAsAdminResult& WithBudgets(const Aws::Vector<BudgetDetail>& value) { SetBudgets(value); return *this;}
    inline DescribeProductAsAdminResult& WithBudgets(Aws::Vector<BudgetDetail>&& value) { SetBudgets(std::move(value)); return *this;}
    inline DescribeProductAsAdminResult& AddBudgets(const BudgetDetail& value) { m_budgets.push_back(value); return *this; }
    inline DescribeProductAsAdminResult& AddBudgets(BudgetDetail&& value) { m_budgets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeProductAsAdminResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeProductAsAdminResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeProductAsAdminResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ProductViewDetail m_productViewDetail;

    Aws::Vector<ProvisioningArtifactSummary> m_provisioningArtifactSummaries;

    Aws::Vector<Tag> m_tags;

    Aws::Vector<TagOptionDetail> m_tagOptions;

    Aws::Vector<BudgetDetail> m_budgets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
