﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/PortfolioDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribePortfolioResult
  {
  public:
    AWS_SERVICECATALOG_API DescribePortfolioResult();
    AWS_SERVICECATALOG_API DescribePortfolioResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribePortfolioResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the portfolio.</p>
     */
    inline const PortfolioDetail& GetPortfolioDetail() const{ return m_portfolioDetail; }
    inline void SetPortfolioDetail(const PortfolioDetail& value) { m_portfolioDetail = value; }
    inline void SetPortfolioDetail(PortfolioDetail&& value) { m_portfolioDetail = std::move(value); }
    inline DescribePortfolioResult& WithPortfolioDetail(const PortfolioDetail& value) { SetPortfolioDetail(value); return *this;}
    inline DescribePortfolioResult& WithPortfolioDetail(PortfolioDetail&& value) { SetPortfolioDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the tags associated with the portfolio.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline DescribePortfolioResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline DescribePortfolioResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribePortfolioResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline DescribePortfolioResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the TagOptions associated with the portfolio.</p>
     */
    inline const Aws::Vector<TagOptionDetail>& GetTagOptions() const{ return m_tagOptions; }
    inline void SetTagOptions(const Aws::Vector<TagOptionDetail>& value) { m_tagOptions = value; }
    inline void SetTagOptions(Aws::Vector<TagOptionDetail>&& value) { m_tagOptions = std::move(value); }
    inline DescribePortfolioResult& WithTagOptions(const Aws::Vector<TagOptionDetail>& value) { SetTagOptions(value); return *this;}
    inline DescribePortfolioResult& WithTagOptions(Aws::Vector<TagOptionDetail>&& value) { SetTagOptions(std::move(value)); return *this;}
    inline DescribePortfolioResult& AddTagOptions(const TagOptionDetail& value) { m_tagOptions.push_back(value); return *this; }
    inline DescribePortfolioResult& AddTagOptions(TagOptionDetail&& value) { m_tagOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the associated budgets.</p>
     */
    inline const Aws::Vector<BudgetDetail>& GetBudgets() const{ return m_budgets; }
    inline void SetBudgets(const Aws::Vector<BudgetDetail>& value) { m_budgets = value; }
    inline void SetBudgets(Aws::Vector<BudgetDetail>&& value) { m_budgets = std::move(value); }
    inline DescribePortfolioResult& WithBudgets(const Aws::Vector<BudgetDetail>& value) { SetBudgets(value); return *this;}
    inline DescribePortfolioResult& WithBudgets(Aws::Vector<BudgetDetail>&& value) { SetBudgets(std::move(value)); return *this;}
    inline DescribePortfolioResult& AddBudgets(const BudgetDetail& value) { m_budgets.push_back(value); return *this; }
    inline DescribePortfolioResult& AddBudgets(BudgetDetail&& value) { m_budgets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePortfolioResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePortfolioResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePortfolioResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PortfolioDetail m_portfolioDetail;

    Aws::Vector<Tag> m_tags;

    Aws::Vector<TagOptionDetail> m_tagOptions;

    Aws::Vector<BudgetDetail> m_budgets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
