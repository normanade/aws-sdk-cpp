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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the DescribeThing operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingResponse">AWS
   * API Reference</a></p>
   */
  class DescribeThingResult
  {
  public:
    AWS_IOT_API DescribeThingResult();
    AWS_IOT_API DescribeThingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeThingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The default MQTT client ID. For a typical device, the thing name is also used
     * as the default MQTT client ID. Although we don’t require a mapping between a
     * thing's registry name and its use of MQTT client IDs, certificates, or shadow
     * state, we recommend that you choose a thing name and use it as the MQTT client
     * ID for the registry and the Device Shadow service.</p> <p>This lets you better
     * organize your IoT fleet without removing the flexibility of the underlying
     * device certificate model or shadows.</p>
     */
    inline const Aws::String& GetDefaultClientId() const{ return m_defaultClientId; }
    inline void SetDefaultClientId(const Aws::String& value) { m_defaultClientId = value; }
    inline void SetDefaultClientId(Aws::String&& value) { m_defaultClientId = std::move(value); }
    inline void SetDefaultClientId(const char* value) { m_defaultClientId.assign(value); }
    inline DescribeThingResult& WithDefaultClientId(const Aws::String& value) { SetDefaultClientId(value); return *this;}
    inline DescribeThingResult& WithDefaultClientId(Aws::String&& value) { SetDefaultClientId(std::move(value)); return *this;}
    inline DescribeThingResult& WithDefaultClientId(const char* value) { SetDefaultClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline void SetThingName(const Aws::String& value) { m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingName.assign(value); }
    inline DescribeThingResult& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline DescribeThingResult& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline DescribeThingResult& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the thing to describe.</p>
     */
    inline const Aws::String& GetThingId() const{ return m_thingId; }
    inline void SetThingId(const Aws::String& value) { m_thingId = value; }
    inline void SetThingId(Aws::String&& value) { m_thingId = std::move(value); }
    inline void SetThingId(const char* value) { m_thingId.assign(value); }
    inline DescribeThingResult& WithThingId(const Aws::String& value) { SetThingId(value); return *this;}
    inline DescribeThingResult& WithThingId(Aws::String&& value) { SetThingId(std::move(value)); return *this;}
    inline DescribeThingResult& WithThingId(const char* value) { SetThingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the thing to describe.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }
    inline void SetThingArn(const Aws::String& value) { m_thingArn = value; }
    inline void SetThingArn(Aws::String&& value) { m_thingArn = std::move(value); }
    inline void SetThingArn(const char* value) { m_thingArn.assign(value); }
    inline DescribeThingResult& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}
    inline DescribeThingResult& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}
    inline DescribeThingResult& WithThingArn(const char* value) { SetThingArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing type name.</p>
     */
    inline const Aws::String& GetThingTypeName() const{ return m_thingTypeName; }
    inline void SetThingTypeName(const Aws::String& value) { m_thingTypeName = value; }
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeName = std::move(value); }
    inline void SetThingTypeName(const char* value) { m_thingTypeName.assign(value); }
    inline DescribeThingResult& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}
    inline DescribeThingResult& WithThingTypeName(Aws::String&& value) { SetThingTypeName(std::move(value)); return *this;}
    inline DescribeThingResult& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributes = std::move(value); }
    inline DescribeThingResult& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline DescribeThingResult& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline DescribeThingResult& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributes.emplace(key, value); return *this; }
    inline DescribeThingResult& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributes.emplace(std::move(key), value); return *this; }
    inline DescribeThingResult& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }
    inline DescribeThingResult& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeThingResult& AddAttributes(const char* key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }
    inline DescribeThingResult& AddAttributes(Aws::String&& key, const char* value) { m_attributes.emplace(std::move(key), value); return *this; }
    inline DescribeThingResult& AddAttributes(const char* key, const char* value) { m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current version of the thing record in the registry.</p>  <p>To
     * avoid unintentional changes to the information in the registry, you can pass the
     * version information in the <code>expectedVersion</code> parameter of the
     * <code>UpdateThing</code> and <code>DeleteThing</code> calls.</p> 
     */
    inline long long GetVersion() const{ return m_version; }
    inline void SetVersion(long long value) { m_version = value; }
    inline DescribeThingResult& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the billing group the thing belongs to.</p>
     */
    inline const Aws::String& GetBillingGroupName() const{ return m_billingGroupName; }
    inline void SetBillingGroupName(const Aws::String& value) { m_billingGroupName = value; }
    inline void SetBillingGroupName(Aws::String&& value) { m_billingGroupName = std::move(value); }
    inline void SetBillingGroupName(const char* value) { m_billingGroupName.assign(value); }
    inline DescribeThingResult& WithBillingGroupName(const Aws::String& value) { SetBillingGroupName(value); return *this;}
    inline DescribeThingResult& WithBillingGroupName(Aws::String&& value) { SetBillingGroupName(std::move(value)); return *this;}
    inline DescribeThingResult& WithBillingGroupName(const char* value) { SetBillingGroupName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeThingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeThingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeThingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_defaultClientId;

    Aws::String m_thingName;

    Aws::String m_thingId;

    Aws::String m_thingArn;

    Aws::String m_thingTypeName;

    Aws::Map<Aws::String, Aws::String> m_attributes;

    long long m_version;

    Aws::String m_billingGroupName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
