﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/NotificationOutput.h>
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
namespace DataZone
{
namespace Model
{
  class ListNotificationsResult
  {
  public:
    AWS_DATAZONE_API ListNotificationsResult();
    AWS_DATAZONE_API ListNotificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListNotificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When the number of notifications is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of notifications, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListNotifications</code> to list the next set of notifications.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNotificationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNotificationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNotificationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of the <code>ListNotifications</code> action.</p>
     */
    inline const Aws::Vector<NotificationOutput>& GetNotifications() const{ return m_notifications; }
    inline void SetNotifications(const Aws::Vector<NotificationOutput>& value) { m_notifications = value; }
    inline void SetNotifications(Aws::Vector<NotificationOutput>&& value) { m_notifications = std::move(value); }
    inline ListNotificationsResult& WithNotifications(const Aws::Vector<NotificationOutput>& value) { SetNotifications(value); return *this;}
    inline ListNotificationsResult& WithNotifications(Aws::Vector<NotificationOutput>&& value) { SetNotifications(std::move(value)); return *this;}
    inline ListNotificationsResult& AddNotifications(const NotificationOutput& value) { m_notifications.push_back(value); return *this; }
    inline ListNotificationsResult& AddNotifications(NotificationOutput&& value) { m_notifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNotificationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNotificationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNotificationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<NotificationOutput> m_notifications;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
