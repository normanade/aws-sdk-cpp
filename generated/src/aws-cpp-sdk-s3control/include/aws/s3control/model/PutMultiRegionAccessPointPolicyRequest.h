﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/PutMultiRegionAccessPointPolicyInput.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class PutMultiRegionAccessPointPolicyRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API PutMultiRegionAccessPointPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMultiRegionAccessPointPolicy"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline PutMultiRegionAccessPointPolicyRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline PutMultiRegionAccessPointPolicyRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline PutMultiRegionAccessPointPolicyRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token used to identify the request and guarantee that requests
     * are unique.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline PutMultiRegionAccessPointPolicyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline PutMultiRegionAccessPointPolicyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline PutMultiRegionAccessPointPolicyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container element containing the details of the policy for the Multi-Region
     * Access Point.</p>
     */
    inline const PutMultiRegionAccessPointPolicyInput& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const PutMultiRegionAccessPointPolicyInput& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(PutMultiRegionAccessPointPolicyInput&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline PutMultiRegionAccessPointPolicyRequest& WithDetails(const PutMultiRegionAccessPointPolicyInput& value) { SetDetails(value); return *this;}
    inline PutMultiRegionAccessPointPolicyRequest& WithDetails(PutMultiRegionAccessPointPolicyInput&& value) { SetDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    PutMultiRegionAccessPointPolicyInput m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
