﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains the filter to apply when retrieving metrics with the <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_GetMetricDataV2.html">GetMetricDataV2</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/FilterV2">AWS
   * API Reference</a></p>
   */
  class FilterV2
  {
  public:
    AWS_CONNECT_API FilterV2();
    AWS_CONNECT_API FilterV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API FilterV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key to use for filtering data. For example, <code>QUEUE</code>,
     * <code>ROUTING_PROFILE, AGENT</code>, <code>CHANNEL</code>,
     * <code>AGENT_HIERARCHY_LEVEL_ONE</code>, <code>AGENT_HIERARCHY_LEVEL_TWO</code>,
     * <code>AGENT_HIERARCHY_LEVEL_THREE</code>,
     * <code>AGENT_HIERARCHY_LEVEL_FOUR</code>,
     * <code>AGENT_HIERARCHY_LEVEL_FIVE</code>. There must be at least 1 key and a
     * maximum 5 keys. </p>
     */
    inline const Aws::String& GetFilterKey() const{ return m_filterKey; }
    inline bool FilterKeyHasBeenSet() const { return m_filterKeyHasBeenSet; }
    inline void SetFilterKey(const Aws::String& value) { m_filterKeyHasBeenSet = true; m_filterKey = value; }
    inline void SetFilterKey(Aws::String&& value) { m_filterKeyHasBeenSet = true; m_filterKey = std::move(value); }
    inline void SetFilterKey(const char* value) { m_filterKeyHasBeenSet = true; m_filterKey.assign(value); }
    inline FilterV2& WithFilterKey(const Aws::String& value) { SetFilterKey(value); return *this;}
    inline FilterV2& WithFilterKey(Aws::String&& value) { SetFilterKey(std::move(value)); return *this;}
    inline FilterV2& WithFilterKey(const char* value) { SetFilterKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers to use for filtering data. For example, if you have a filter
     * key of <code>QUEUE</code>, you would add queue IDs or ARNs in
     * <code>FilterValues</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterValues() const{ return m_filterValues; }
    inline bool FilterValuesHasBeenSet() const { return m_filterValuesHasBeenSet; }
    inline void SetFilterValues(const Aws::Vector<Aws::String>& value) { m_filterValuesHasBeenSet = true; m_filterValues = value; }
    inline void SetFilterValues(Aws::Vector<Aws::String>&& value) { m_filterValuesHasBeenSet = true; m_filterValues = std::move(value); }
    inline FilterV2& WithFilterValues(const Aws::Vector<Aws::String>& value) { SetFilterValues(value); return *this;}
    inline FilterV2& WithFilterValues(Aws::Vector<Aws::String>&& value) { SetFilterValues(std::move(value)); return *this;}
    inline FilterV2& AddFilterValues(const Aws::String& value) { m_filterValuesHasBeenSet = true; m_filterValues.push_back(value); return *this; }
    inline FilterV2& AddFilterValues(Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.push_back(std::move(value)); return *this; }
    inline FilterV2& AddFilterValues(const char* value) { m_filterValuesHasBeenSet = true; m_filterValues.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_filterKey;
    bool m_filterKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterValues;
    bool m_filterValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
