﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CostExplorer
{
namespace Model
{
  class DeleteCostCategoryDefinitionResult
  {
  public:
    AWS_COSTEXPLORER_API DeleteCostCategoryDefinitionResult();
    AWS_COSTEXPLORER_API DeleteCostCategoryDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API DeleteCostCategoryDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline const Aws::String& GetCostCategoryArn() const{ return m_costCategoryArn; }
    inline void SetCostCategoryArn(const Aws::String& value) { m_costCategoryArn = value; }
    inline void SetCostCategoryArn(Aws::String&& value) { m_costCategoryArn = std::move(value); }
    inline void SetCostCategoryArn(const char* value) { m_costCategoryArn.assign(value); }
    inline DeleteCostCategoryDefinitionResult& WithCostCategoryArn(const Aws::String& value) { SetCostCategoryArn(value); return *this;}
    inline DeleteCostCategoryDefinitionResult& WithCostCategoryArn(Aws::String&& value) { SetCostCategoryArn(std::move(value)); return *this;}
    inline DeleteCostCategoryDefinitionResult& WithCostCategoryArn(const char* value) { SetCostCategoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective end date of the Cost Category as a result of deleting it. No
     * costs after this date is categorized by the deleted Cost Category. </p>
     */
    inline const Aws::String& GetEffectiveEnd() const{ return m_effectiveEnd; }
    inline void SetEffectiveEnd(const Aws::String& value) { m_effectiveEnd = value; }
    inline void SetEffectiveEnd(Aws::String&& value) { m_effectiveEnd = std::move(value); }
    inline void SetEffectiveEnd(const char* value) { m_effectiveEnd.assign(value); }
    inline DeleteCostCategoryDefinitionResult& WithEffectiveEnd(const Aws::String& value) { SetEffectiveEnd(value); return *this;}
    inline DeleteCostCategoryDefinitionResult& WithEffectiveEnd(Aws::String&& value) { SetEffectiveEnd(std::move(value)); return *this;}
    inline DeleteCostCategoryDefinitionResult& WithEffectiveEnd(const char* value) { SetEffectiveEnd(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteCostCategoryDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteCostCategoryDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteCostCategoryDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_costCategoryArn;

    Aws::String m_effectiveEnd;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
