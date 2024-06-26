﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The properties of the thing, including thing name, thing type name, and a
   * list of thing attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingAttribute">AWS
   * API Reference</a></p>
   */
  class ThingAttribute
  {
  public:
    AWS_IOT_API ThingAttribute();
    AWS_IOT_API ThingAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }
    inline ThingAttribute& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline ThingAttribute& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline ThingAttribute& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing type, if the thing has been associated with a type.</p>
     */
    inline const Aws::String& GetThingTypeName() const{ return m_thingTypeName; }
    inline bool ThingTypeNameHasBeenSet() const { return m_thingTypeNameHasBeenSet; }
    inline void SetThingTypeName(const Aws::String& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = value; }
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::move(value); }
    inline void SetThingTypeName(const char* value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName.assign(value); }
    inline ThingAttribute& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}
    inline ThingAttribute& WithThingTypeName(Aws::String&& value) { SetThingTypeName(std::move(value)); return *this;}
    inline ThingAttribute& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing ARN.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }
    inline void SetThingArn(const Aws::String& value) { m_thingArnHasBeenSet = true; m_thingArn = value; }
    inline void SetThingArn(Aws::String&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::move(value); }
    inline void SetThingArn(const char* value) { m_thingArnHasBeenSet = true; m_thingArn.assign(value); }
    inline ThingAttribute& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}
    inline ThingAttribute& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}
    inline ThingAttribute& WithThingArn(const char* value) { SetThingArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of thing attributes which are name-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline ThingAttribute& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline ThingAttribute& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline ThingAttribute& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline ThingAttribute& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline ThingAttribute& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline ThingAttribute& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline ThingAttribute& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline ThingAttribute& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline ThingAttribute& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the thing record in the registry.</p>
     */
    inline long long GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline ThingAttribute& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet = false;

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    long long m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
