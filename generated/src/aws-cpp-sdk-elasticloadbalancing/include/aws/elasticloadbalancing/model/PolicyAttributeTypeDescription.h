﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about a policy attribute type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/PolicyAttributeTypeDescription">AWS
   * API Reference</a></p>
   */
  class PolicyAttributeTypeDescription
  {
  public:
    AWS_ELASTICLOADBALANCING_API PolicyAttributeTypeDescription();
    AWS_ELASTICLOADBALANCING_API PolicyAttributeTypeDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API PolicyAttributeTypeDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }
    inline PolicyAttributeTypeDescription& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}
    inline PolicyAttributeTypeDescription& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}
    inline PolicyAttributeTypeDescription& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the attribute. For example, <code>Boolean</code> or
     * <code>Integer</code>.</p>
     */
    inline const Aws::String& GetAttributeType() const{ return m_attributeType; }
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }
    inline void SetAttributeType(const Aws::String& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }
    inline void SetAttributeType(Aws::String&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }
    inline void SetAttributeType(const char* value) { m_attributeTypeHasBeenSet = true; m_attributeType.assign(value); }
    inline PolicyAttributeTypeDescription& WithAttributeType(const Aws::String& value) { SetAttributeType(value); return *this;}
    inline PolicyAttributeTypeDescription& WithAttributeType(Aws::String&& value) { SetAttributeType(std::move(value)); return *this;}
    inline PolicyAttributeTypeDescription& WithAttributeType(const char* value) { SetAttributeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the attribute.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PolicyAttributeTypeDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PolicyAttributeTypeDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PolicyAttributeTypeDescription& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value of the attribute, if applicable.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline PolicyAttributeTypeDescription& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline PolicyAttributeTypeDescription& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline PolicyAttributeTypeDescription& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cardinality of the attribute.</p> <p>Valid values:</p> <ul> <li>
     * <p>ONE(1) : Single value required</p> </li> <li> <p>ZERO_OR_ONE(0..1) : Up to
     * one value is allowed</p> </li> <li> <p>ZERO_OR_MORE(0..*) : Optional. Multiple
     * values are allowed</p> </li> <li> <p>ONE_OR_MORE(1..*0) : Required. Multiple
     * values are allowed</p> </li> </ul>
     */
    inline const Aws::String& GetCardinality() const{ return m_cardinality; }
    inline bool CardinalityHasBeenSet() const { return m_cardinalityHasBeenSet; }
    inline void SetCardinality(const Aws::String& value) { m_cardinalityHasBeenSet = true; m_cardinality = value; }
    inline void SetCardinality(Aws::String&& value) { m_cardinalityHasBeenSet = true; m_cardinality = std::move(value); }
    inline void SetCardinality(const char* value) { m_cardinalityHasBeenSet = true; m_cardinality.assign(value); }
    inline PolicyAttributeTypeDescription& WithCardinality(const Aws::String& value) { SetCardinality(value); return *this;}
    inline PolicyAttributeTypeDescription& WithCardinality(Aws::String&& value) { SetCardinality(std::move(value)); return *this;}
    inline PolicyAttributeTypeDescription& WithCardinality(const char* value) { SetCardinality(value); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_attributeType;
    bool m_attributeTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_cardinality;
    bool m_cardinalityHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
