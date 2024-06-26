﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/TagFilterType.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about an on-premises instance tag filter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TagFilter">AWS
   * API Reference</a></p>
   */
  class TagFilter
  {
  public:
    AWS_CODEDEPLOY_API TagFilter();
    AWS_CODEDEPLOY_API TagFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API TagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The on-premises instance tag filter key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline TagFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline TagFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline TagFilter& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The on-premises instance tag filter value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline TagFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline TagFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline TagFilter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The on-premises instance tag filter type:</p> <ul> <li> <p>KEY_ONLY: Key
     * only.</p> </li> <li> <p>VALUE_ONLY: Value only.</p> </li> <li> <p>KEY_AND_VALUE:
     * Key and value.</p> </li> </ul>
     */
    inline const TagFilterType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TagFilterType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TagFilterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TagFilter& WithType(const TagFilterType& value) { SetType(value); return *this;}
    inline TagFilter& WithType(TagFilterType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    TagFilterType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
