﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/VTLDevice.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>DescribeVTLDevicesOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeVTLDevicesOutput">AWS
   * API Reference</a></p>
   */
  class DescribeVTLDevicesResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeVTLDevicesResult();
    AWS_STORAGEGATEWAY_API DescribeVTLDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeVTLDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }
    inline DescribeVTLDevicesResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline DescribeVTLDevicesResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline DescribeVTLDevicesResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of VTL device objects composed of the Amazon Resource Name (ARN) of
     * the VTL devices.</p>
     */
    inline const Aws::Vector<VTLDevice>& GetVTLDevices() const{ return m_vTLDevices; }
    inline void SetVTLDevices(const Aws::Vector<VTLDevice>& value) { m_vTLDevices = value; }
    inline void SetVTLDevices(Aws::Vector<VTLDevice>&& value) { m_vTLDevices = std::move(value); }
    inline DescribeVTLDevicesResult& WithVTLDevices(const Aws::Vector<VTLDevice>& value) { SetVTLDevices(value); return *this;}
    inline DescribeVTLDevicesResult& WithVTLDevices(Aws::Vector<VTLDevice>&& value) { SetVTLDevices(std::move(value)); return *this;}
    inline DescribeVTLDevicesResult& AddVTLDevices(const VTLDevice& value) { m_vTLDevices.push_back(value); return *this; }
    inline DescribeVTLDevicesResult& AddVTLDevices(VTLDevice&& value) { m_vTLDevices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An opaque string that indicates the position at which the VTL devices that
     * were fetched for description ended. Use the marker in your next request to fetch
     * the next set of VTL devices in the list. If there are no more VTL devices to
     * describe, this field does not appear in the response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeVTLDevicesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeVTLDevicesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeVTLDevicesResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeVTLDevicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeVTLDevicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeVTLDevicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;

    Aws::Vector<VTLDevice> m_vTLDevices;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
