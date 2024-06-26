﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT1ClickDevicesService
{
namespace Model
{

  /**
   */
  class ListDeviceEventsRequest : public IoT1ClickDevicesServiceRequest
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API ListDeviceEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeviceEvents"; }

    AWS_IOT1CLICKDEVICESSERVICE_API Aws::String SerializePayload() const override;

    AWS_IOT1CLICKDEVICESSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }
    inline ListDeviceEventsRequest& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline ListDeviceEventsRequest& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline ListDeviceEventsRequest& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date for the device event query, in ISO8061 format. For example,

     * 2018-03-28T15:45:12.880Z
 </p>
     */
    inline const Aws::Utils::DateTime& GetFromTimeStamp() const{ return m_fromTimeStamp; }
    inline bool FromTimeStampHasBeenSet() const { return m_fromTimeStampHasBeenSet; }
    inline void SetFromTimeStamp(const Aws::Utils::DateTime& value) { m_fromTimeStampHasBeenSet = true; m_fromTimeStamp = value; }
    inline void SetFromTimeStamp(Aws::Utils::DateTime&& value) { m_fromTimeStampHasBeenSet = true; m_fromTimeStamp = std::move(value); }
    inline ListDeviceEventsRequest& WithFromTimeStamp(const Aws::Utils::DateTime& value) { SetFromTimeStamp(value); return *this;}
    inline ListDeviceEventsRequest& WithFromTimeStamp(Aws::Utils::DateTime&& value) { SetFromTimeStamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per request. If not set, a default
     * value of
 100 is used.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDeviceEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListDeviceEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDeviceEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDeviceEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date for the device event query, in ISO8061 format. For example,

     * 2018-03-28T15:45:12.880Z
 </p>
     */
    inline const Aws::Utils::DateTime& GetToTimeStamp() const{ return m_toTimeStamp; }
    inline bool ToTimeStampHasBeenSet() const { return m_toTimeStampHasBeenSet; }
    inline void SetToTimeStamp(const Aws::Utils::DateTime& value) { m_toTimeStampHasBeenSet = true; m_toTimeStamp = value; }
    inline void SetToTimeStamp(Aws::Utils::DateTime&& value) { m_toTimeStampHasBeenSet = true; m_toTimeStamp = std::move(value); }
    inline ListDeviceEventsRequest& WithToTimeStamp(const Aws::Utils::DateTime& value) { SetToTimeStamp(value); return *this;}
    inline ListDeviceEventsRequest& WithToTimeStamp(Aws::Utils::DateTime&& value) { SetToTimeStamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::Utils::DateTime m_fromTimeStamp;
    bool m_fromTimeStampHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_toTimeStamp;
    bool m_toTimeStampHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
