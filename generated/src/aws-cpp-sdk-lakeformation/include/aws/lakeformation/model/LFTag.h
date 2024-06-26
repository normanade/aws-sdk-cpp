﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure that allows an admin to grant user permissions on certain
   * conditions. For example, granting a role access to all columns that do not have
   * the LF-tag 'PII' in tables that have the LF-tag 'Prod'.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/LFTag">AWS
   * API Reference</a></p>
   */
  class LFTag
  {
  public:
    AWS_LAKEFORMATION_API LFTag();
    AWS_LAKEFORMATION_API LFTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API LFTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key-name for the LF-tag.</p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }
    inline LFTag& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}
    inline LFTag& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}
    inline LFTag& WithTagKey(const char* value) { SetTagKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of possible values an attribute can take.</p> <p>The maximum number of
     * values that can be defined for a LF-Tag is 1000. A single API call supports 50
     * values. You can use multiple API calls to add more values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const{ return m_tagValues; }
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }
    inline void SetTagValues(const Aws::Vector<Aws::String>& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::move(value); }
    inline LFTag& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}
    inline LFTag& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}
    inline LFTag& AddTagValues(const Aws::String& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }
    inline LFTag& AddTagValues(Aws::String&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }
    inline LFTag& AddTagValues(const char* value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagValues;
    bool m_tagValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
