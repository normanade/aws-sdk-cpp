﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class GetInsightSelectorsRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API GetInsightSelectorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInsightSelectors"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the name of the trail or trail ARN. If you specify a trail name,
     * the string must meet the following requirements:</p> <ul> <li> <p>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-)</p> </li> <li> <p>Start with a letter or number, and end with a letter or
     * number</p> </li> <li> <p>Be between 3 and 128 characters</p> </li> <li> <p>Have
     * no adjacent periods, underscores or dashes. Names like
     * <code>my-_namespace</code> and <code>my--namespace</code> are not valid.</p>
     * </li> <li> <p>Not be in IP address format (for example, 192.168.5.4)</p> </li>
     * </ul> <p>If you specify a trail ARN, it must be in the format:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p> <p>You
     * cannot use this parameter with the <code>EventDataStore</code> parameter.</p>
     */
    inline const Aws::String& GetTrailName() const{ return m_trailName; }
    inline bool TrailNameHasBeenSet() const { return m_trailNameHasBeenSet; }
    inline void SetTrailName(const Aws::String& value) { m_trailNameHasBeenSet = true; m_trailName = value; }
    inline void SetTrailName(Aws::String&& value) { m_trailNameHasBeenSet = true; m_trailName = std::move(value); }
    inline void SetTrailName(const char* value) { m_trailNameHasBeenSet = true; m_trailName.assign(value); }
    inline GetInsightSelectorsRequest& WithTrailName(const Aws::String& value) { SetTrailName(value); return *this;}
    inline GetInsightSelectorsRequest& WithTrailName(Aws::String&& value) { SetTrailName(std::move(value)); return *this;}
    inline GetInsightSelectorsRequest& WithTrailName(const char* value) { SetTrailName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the ARN (or ID suffix of the ARN) of the event data store for
     * which you want to get Insights selectors. </p> <p>You cannot use this parameter
     * with the <code>TrailName</code> parameter.</p>
     */
    inline const Aws::String& GetEventDataStore() const{ return m_eventDataStore; }
    inline bool EventDataStoreHasBeenSet() const { return m_eventDataStoreHasBeenSet; }
    inline void SetEventDataStore(const Aws::String& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = value; }
    inline void SetEventDataStore(Aws::String&& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = std::move(value); }
    inline void SetEventDataStore(const char* value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore.assign(value); }
    inline GetInsightSelectorsRequest& WithEventDataStore(const Aws::String& value) { SetEventDataStore(value); return *this;}
    inline GetInsightSelectorsRequest& WithEventDataStore(Aws::String&& value) { SetEventDataStore(std::move(value)); return *this;}
    inline GetInsightSelectorsRequest& WithEventDataStore(const char* value) { SetEventDataStore(value); return *this;}
    ///@}
  private:

    Aws::String m_trailName;
    bool m_trailNameHasBeenSet = false;

    Aws::String m_eventDataStore;
    bool m_eventDataStoreHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
