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
  class CreateCostCategoryDefinitionResult
  {
  public:
    AWS_COSTEXPLORER_API CreateCostCategoryDefinitionResult();
    AWS_COSTEXPLORER_API CreateCostCategoryDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API CreateCostCategoryDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for your newly created Cost Category. </p>
     */
    inline const Aws::String& GetCostCategoryArn() const{ return m_costCategoryArn; }
    inline void SetCostCategoryArn(const Aws::String& value) { m_costCategoryArn = value; }
    inline void SetCostCategoryArn(Aws::String&& value) { m_costCategoryArn = std::move(value); }
    inline void SetCostCategoryArn(const char* value) { m_costCategoryArn.assign(value); }
    inline CreateCostCategoryDefinitionResult& WithCostCategoryArn(const Aws::String& value) { SetCostCategoryArn(value); return *this;}
    inline CreateCostCategoryDefinitionResult& WithCostCategoryArn(Aws::String&& value) { SetCostCategoryArn(std::move(value)); return *this;}
    inline CreateCostCategoryDefinitionResult& WithCostCategoryArn(const char* value) { SetCostCategoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Cost Category's effective start date. It can only be a billing start date
     * (first day of the month).</p>
     */
    inline const Aws::String& GetEffectiveStart() const{ return m_effectiveStart; }
    inline void SetEffectiveStart(const Aws::String& value) { m_effectiveStart = value; }
    inline void SetEffectiveStart(Aws::String&& value) { m_effectiveStart = std::move(value); }
    inline void SetEffectiveStart(const char* value) { m_effectiveStart.assign(value); }
    inline CreateCostCategoryDefinitionResult& WithEffectiveStart(const Aws::String& value) { SetEffectiveStart(value); return *this;}
    inline CreateCostCategoryDefinitionResult& WithEffectiveStart(Aws::String&& value) { SetEffectiveStart(std::move(value)); return *this;}
    inline CreateCostCategoryDefinitionResult& WithEffectiveStart(const char* value) { SetEffectiveStart(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCostCategoryDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCostCategoryDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCostCategoryDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_costCategoryArn;

    Aws::String m_effectiveStart;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
