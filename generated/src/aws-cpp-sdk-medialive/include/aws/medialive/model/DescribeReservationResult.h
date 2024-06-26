﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/OfferingDurationUnits.h>
#include <aws/medialive/model/OfferingType.h>
#include <aws/medialive/model/RenewalSettings.h>
#include <aws/medialive/model/ReservationResourceSpecification.h>
#include <aws/medialive/model/ReservationState.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeReservationResponse<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeReservationResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReservationResult
  {
  public:
    AWS_MEDIALIVE_API DescribeReservationResult();
    AWS_MEDIALIVE_API DescribeReservationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeReservationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeReservationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeReservationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeReservationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of reserved resources
     */
    inline int GetCount() const{ return m_count; }
    inline void SetCount(int value) { m_count = value; }
    inline DescribeReservationResult& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCode.assign(value); }
    inline DescribeReservationResult& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline DescribeReservationResult& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline DescribeReservationResult& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * Lease duration, e.g. '12'
     */
    inline int GetDuration() const{ return m_duration; }
    inline void SetDuration(int value) { m_duration = value; }
    inline DescribeReservationResult& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline const OfferingDurationUnits& GetDurationUnits() const{ return m_durationUnits; }
    inline void SetDurationUnits(const OfferingDurationUnits& value) { m_durationUnits = value; }
    inline void SetDurationUnits(OfferingDurationUnits&& value) { m_durationUnits = std::move(value); }
    inline DescribeReservationResult& WithDurationUnits(const OfferingDurationUnits& value) { SetDurationUnits(value); return *this;}
    inline DescribeReservationResult& WithDurationUnits(OfferingDurationUnits&& value) { SetDurationUnits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline const Aws::String& GetEnd() const{ return m_end; }
    inline void SetEnd(const Aws::String& value) { m_end = value; }
    inline void SetEnd(Aws::String&& value) { m_end = std::move(value); }
    inline void SetEnd(const char* value) { m_end.assign(value); }
    inline DescribeReservationResult& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}
    inline DescribeReservationResult& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}
    inline DescribeReservationResult& WithEnd(const char* value) { SetEnd(value); return *this;}
    ///@}

    ///@{
    /**
     * One-time charge for each reserved resource, e.g. '0.0' for a NO_UPFRONT offering
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }
    inline void SetFixedPrice(double value) { m_fixedPrice = value; }
    inline DescribeReservationResult& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * User specified reservation name
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeReservationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeReservationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeReservationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline const Aws::String& GetOfferingDescription() const{ return m_offeringDescription; }
    inline void SetOfferingDescription(const Aws::String& value) { m_offeringDescription = value; }
    inline void SetOfferingDescription(Aws::String&& value) { m_offeringDescription = std::move(value); }
    inline void SetOfferingDescription(const char* value) { m_offeringDescription.assign(value); }
    inline DescribeReservationResult& WithOfferingDescription(const Aws::String& value) { SetOfferingDescription(value); return *this;}
    inline DescribeReservationResult& WithOfferingDescription(Aws::String&& value) { SetOfferingDescription(std::move(value)); return *this;}
    inline DescribeReservationResult& WithOfferingDescription(const char* value) { SetOfferingDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }
    inline void SetOfferingId(const Aws::String& value) { m_offeringId = value; }
    inline void SetOfferingId(Aws::String&& value) { m_offeringId = std::move(value); }
    inline void SetOfferingId(const char* value) { m_offeringId.assign(value); }
    inline DescribeReservationResult& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}
    inline DescribeReservationResult& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}
    inline DescribeReservationResult& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline const OfferingType& GetOfferingType() const{ return m_offeringType; }
    inline void SetOfferingType(const OfferingType& value) { m_offeringType = value; }
    inline void SetOfferingType(OfferingType&& value) { m_offeringType = std::move(value); }
    inline DescribeReservationResult& WithOfferingType(const OfferingType& value) { SetOfferingType(value); return *this;}
    inline DescribeReservationResult& WithOfferingType(OfferingType&& value) { SetOfferingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline void SetRegion(const Aws::String& value) { m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_region.assign(value); }
    inline DescribeReservationResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline DescribeReservationResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline DescribeReservationResult& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * Renewal settings for the reservation
     */
    inline const RenewalSettings& GetRenewalSettings() const{ return m_renewalSettings; }
    inline void SetRenewalSettings(const RenewalSettings& value) { m_renewalSettings = value; }
    inline void SetRenewalSettings(RenewalSettings&& value) { m_renewalSettings = std::move(value); }
    inline DescribeReservationResult& WithRenewalSettings(const RenewalSettings& value) { SetRenewalSettings(value); return *this;}
    inline DescribeReservationResult& WithRenewalSettings(RenewalSettings&& value) { SetRenewalSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline const Aws::String& GetReservationId() const{ return m_reservationId; }
    inline void SetReservationId(const Aws::String& value) { m_reservationId = value; }
    inline void SetReservationId(Aws::String&& value) { m_reservationId = std::move(value); }
    inline void SetReservationId(const char* value) { m_reservationId.assign(value); }
    inline DescribeReservationResult& WithReservationId(const Aws::String& value) { SetReservationId(value); return *this;}
    inline DescribeReservationResult& WithReservationId(Aws::String&& value) { SetReservationId(std::move(value)); return *this;}
    inline DescribeReservationResult& WithReservationId(const char* value) { SetReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * Resource configuration details
     */
    inline const ReservationResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }
    inline void SetResourceSpecification(const ReservationResourceSpecification& value) { m_resourceSpecification = value; }
    inline void SetResourceSpecification(ReservationResourceSpecification&& value) { m_resourceSpecification = std::move(value); }
    inline DescribeReservationResult& WithResourceSpecification(const ReservationResourceSpecification& value) { SetResourceSpecification(value); return *this;}
    inline DescribeReservationResult& WithResourceSpecification(ReservationResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline const Aws::String& GetStart() const{ return m_start; }
    inline void SetStart(const Aws::String& value) { m_start = value; }
    inline void SetStart(Aws::String&& value) { m_start = std::move(value); }
    inline void SetStart(const char* value) { m_start.assign(value); }
    inline DescribeReservationResult& WithStart(const Aws::String& value) { SetStart(value); return *this;}
    inline DescribeReservationResult& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}
    inline DescribeReservationResult& WithStart(const char* value) { SetStart(value); return *this;}
    ///@}

    ///@{
    /**
     * Current state of reservation, e.g. 'ACTIVE'
     */
    inline const ReservationState& GetState() const{ return m_state; }
    inline void SetState(const ReservationState& value) { m_state = value; }
    inline void SetState(ReservationState&& value) { m_state = std::move(value); }
    inline DescribeReservationResult& WithState(const ReservationState& value) { SetState(value); return *this;}
    inline DescribeReservationResult& WithState(ReservationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeReservationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeReservationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeReservationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeReservationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeReservationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeReservationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeReservationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeReservationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeReservationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * Recurring usage charge for each reserved resource, e.g. '157.0'
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }
    inline void SetUsagePrice(double value) { m_usagePrice = value; }
    inline DescribeReservationResult& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeReservationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeReservationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeReservationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    int m_count;

    Aws::String m_currencyCode;

    int m_duration;

    OfferingDurationUnits m_durationUnits;

    Aws::String m_end;

    double m_fixedPrice;

    Aws::String m_name;

    Aws::String m_offeringDescription;

    Aws::String m_offeringId;

    OfferingType m_offeringType;

    Aws::String m_region;

    RenewalSettings m_renewalSettings;

    Aws::String m_reservationId;

    ReservationResourceSpecification m_resourceSpecification;

    Aws::String m_start;

    ReservationState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;

    double m_usagePrice;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
