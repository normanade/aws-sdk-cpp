﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class GetHostReservationPurchasePreviewRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetHostReservationPurchasePreviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHostReservationPurchasePreview"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation is associated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIdSet() const{ return m_hostIdSet; }
    inline bool HostIdSetHasBeenSet() const { return m_hostIdSetHasBeenSet; }
    inline void SetHostIdSet(const Aws::Vector<Aws::String>& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = value; }
    inline void SetHostIdSet(Aws::Vector<Aws::String>&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = std::move(value); }
    inline GetHostReservationPurchasePreviewRequest& WithHostIdSet(const Aws::Vector<Aws::String>& value) { SetHostIdSet(value); return *this;}
    inline GetHostReservationPurchasePreviewRequest& WithHostIdSet(Aws::Vector<Aws::String>&& value) { SetHostIdSet(std::move(value)); return *this;}
    inline GetHostReservationPurchasePreviewRequest& AddHostIdSet(const Aws::String& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(value); return *this; }
    inline GetHostReservationPurchasePreviewRequest& AddHostIdSet(Aws::String&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(std::move(value)); return *this; }
    inline GetHostReservationPurchasePreviewRequest& AddHostIdSet(const char* value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The offering ID of the reservation.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }
    inline GetHostReservationPurchasePreviewRequest& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}
    inline GetHostReservationPurchasePreviewRequest& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}
    inline GetHostReservationPurchasePreviewRequest& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_hostIdSet;
    bool m_hostIdSetHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
