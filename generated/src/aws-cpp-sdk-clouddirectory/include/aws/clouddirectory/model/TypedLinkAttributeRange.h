﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/TypedAttributeValueRange.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Identifies the range of attributes that are used by a specified
   * filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TypedLinkAttributeRange">AWS
   * API Reference</a></p>
   */
  class TypedLinkAttributeRange
  {
  public:
    AWS_CLOUDDIRECTORY_API TypedLinkAttributeRange();
    AWS_CLOUDDIRECTORY_API TypedLinkAttributeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API TypedLinkAttributeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }
    inline TypedLinkAttributeRange& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}
    inline TypedLinkAttributeRange& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}
    inline TypedLinkAttributeRange& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of attribute values that are being selected.</p>
     */
    inline const TypedAttributeValueRange& GetRange() const{ return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    inline void SetRange(const TypedAttributeValueRange& value) { m_rangeHasBeenSet = true; m_range = value; }
    inline void SetRange(TypedAttributeValueRange&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }
    inline TypedLinkAttributeRange& WithRange(const TypedAttributeValueRange& value) { SetRange(value); return *this;}
    inline TypedLinkAttributeRange& WithRange(TypedAttributeValueRange&& value) { SetRange(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    TypedAttributeValueRange m_range;
    bool m_rangeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
