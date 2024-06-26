﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
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
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>Object that allows filtering on product title.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/SaaSProductTitleFilter">AWS
   * API Reference</a></p>
   */
  class SaaSProductTitleFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API SaaSProductTitleFilter();
    AWS_MARKETPLACECATALOG_API SaaSProductTitleFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API SaaSProductTitleFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string array of unique product title values to be filtered on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueList() const{ return m_valueList; }
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
    inline void SetValueList(const Aws::Vector<Aws::String>& value) { m_valueListHasBeenSet = true; m_valueList = value; }
    inline void SetValueList(Aws::Vector<Aws::String>&& value) { m_valueListHasBeenSet = true; m_valueList = std::move(value); }
    inline SaaSProductTitleFilter& WithValueList(const Aws::Vector<Aws::String>& value) { SetValueList(value); return *this;}
    inline SaaSProductTitleFilter& WithValueList(Aws::Vector<Aws::String>&& value) { SetValueList(std::move(value)); return *this;}
    inline SaaSProductTitleFilter& AddValueList(const Aws::String& value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }
    inline SaaSProductTitleFilter& AddValueList(Aws::String&& value) { m_valueListHasBeenSet = true; m_valueList.push_back(std::move(value)); return *this; }
    inline SaaSProductTitleFilter& AddValueList(const char* value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that will be the <code>wildCard</code> input for product tile
     * filter. It matches the provided value as a substring in the actual value.</p>
     */
    inline const Aws::String& GetWildCardValue() const{ return m_wildCardValue; }
    inline bool WildCardValueHasBeenSet() const { return m_wildCardValueHasBeenSet; }
    inline void SetWildCardValue(const Aws::String& value) { m_wildCardValueHasBeenSet = true; m_wildCardValue = value; }
    inline void SetWildCardValue(Aws::String&& value) { m_wildCardValueHasBeenSet = true; m_wildCardValue = std::move(value); }
    inline void SetWildCardValue(const char* value) { m_wildCardValueHasBeenSet = true; m_wildCardValue.assign(value); }
    inline SaaSProductTitleFilter& WithWildCardValue(const Aws::String& value) { SetWildCardValue(value); return *this;}
    inline SaaSProductTitleFilter& WithWildCardValue(Aws::String&& value) { SetWildCardValue(std::move(value)); return *this;}
    inline SaaSProductTitleFilter& WithWildCardValue(const char* value) { SetWildCardValue(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_valueList;
    bool m_valueListHasBeenSet = false;

    Aws::String m_wildCardValue;
    bool m_wildCardValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
