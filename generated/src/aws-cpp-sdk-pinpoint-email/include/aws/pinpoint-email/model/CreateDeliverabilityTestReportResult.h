﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/DeliverabilityTestStatus.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>Information about the predictive inbox placement test that you
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/CreateDeliverabilityTestReportResponse">AWS
   * API Reference</a></p>
   */
  class CreateDeliverabilityTestReportResult
  {
  public:
    AWS_PINPOINTEMAIL_API CreateDeliverabilityTestReportResult();
    AWS_PINPOINTEMAIL_API CreateDeliverabilityTestReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API CreateDeliverabilityTestReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }
    inline void SetReportId(const Aws::String& value) { m_reportId = value; }
    inline void SetReportId(Aws::String&& value) { m_reportId = std::move(value); }
    inline void SetReportId(const char* value) { m_reportId.assign(value); }
    inline CreateDeliverabilityTestReportResult& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}
    inline CreateDeliverabilityTestReportResult& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}
    inline CreateDeliverabilityTestReportResult& WithReportId(const char* value) { SetReportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the predictive inbox placement test. If the status is
     * <code>IN_PROGRESS</code>, then the predictive inbox placement test is currently
     * running. Predictive inbox placement tests are usually complete within 24 hours
     * of creating the test. If the status is <code>COMPLETE</code>, then the test is
     * finished, and you can use the <code>GetDeliverabilityTestReport</code> to view
     * the results of the test.</p>
     */
    inline const DeliverabilityTestStatus& GetDeliverabilityTestStatus() const{ return m_deliverabilityTestStatus; }
    inline void SetDeliverabilityTestStatus(const DeliverabilityTestStatus& value) { m_deliverabilityTestStatus = value; }
    inline void SetDeliverabilityTestStatus(DeliverabilityTestStatus&& value) { m_deliverabilityTestStatus = std::move(value); }
    inline CreateDeliverabilityTestReportResult& WithDeliverabilityTestStatus(const DeliverabilityTestStatus& value) { SetDeliverabilityTestStatus(value); return *this;}
    inline CreateDeliverabilityTestReportResult& WithDeliverabilityTestStatus(DeliverabilityTestStatus&& value) { SetDeliverabilityTestStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDeliverabilityTestReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDeliverabilityTestReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDeliverabilityTestReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_reportId;

    DeliverabilityTestStatus m_deliverabilityTestStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
