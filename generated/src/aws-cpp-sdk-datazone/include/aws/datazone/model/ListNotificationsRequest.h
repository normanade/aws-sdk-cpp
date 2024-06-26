﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/TaskStatus.h>
#include <aws/datazone/model/NotificationType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class ListNotificationsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListNotificationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNotifications"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The time after which you want to list notifications.</p>
     */
    inline const Aws::Utils::DateTime& GetAfterTimestamp() const{ return m_afterTimestamp; }
    inline bool AfterTimestampHasBeenSet() const { return m_afterTimestampHasBeenSet; }
    inline void SetAfterTimestamp(const Aws::Utils::DateTime& value) { m_afterTimestampHasBeenSet = true; m_afterTimestamp = value; }
    inline void SetAfterTimestamp(Aws::Utils::DateTime&& value) { m_afterTimestampHasBeenSet = true; m_afterTimestamp = std::move(value); }
    inline ListNotificationsRequest& WithAfterTimestamp(const Aws::Utils::DateTime& value) { SetAfterTimestamp(value); return *this;}
    inline ListNotificationsRequest& WithAfterTimestamp(Aws::Utils::DateTime&& value) { SetAfterTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time before which you want to list notifications.</p>
     */
    inline const Aws::Utils::DateTime& GetBeforeTimestamp() const{ return m_beforeTimestamp; }
    inline bool BeforeTimestampHasBeenSet() const { return m_beforeTimestampHasBeenSet; }
    inline void SetBeforeTimestamp(const Aws::Utils::DateTime& value) { m_beforeTimestampHasBeenSet = true; m_beforeTimestamp = value; }
    inline void SetBeforeTimestamp(Aws::Utils::DateTime&& value) { m_beforeTimestampHasBeenSet = true; m_beforeTimestamp = std::move(value); }
    inline ListNotificationsRequest& WithBeforeTimestamp(const Aws::Utils::DateTime& value) { SetBeforeTimestamp(value); return *this;}
    inline ListNotificationsRequest& WithBeforeTimestamp(Aws::Utils::DateTime&& value) { SetBeforeTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline ListNotificationsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline ListNotificationsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline ListNotificationsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of notifications to return in a single call to
     * <code>ListNotifications</code>. When the number of notifications to be listed is
     * greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListNotifications</code> to list the next set of notifications.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListNotificationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

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
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListNotificationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNotificationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNotificationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subjects of notifications.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjects() const{ return m_subjects; }
    inline bool SubjectsHasBeenSet() const { return m_subjectsHasBeenSet; }
    inline void SetSubjects(const Aws::Vector<Aws::String>& value) { m_subjectsHasBeenSet = true; m_subjects = value; }
    inline void SetSubjects(Aws::Vector<Aws::String>&& value) { m_subjectsHasBeenSet = true; m_subjects = std::move(value); }
    inline ListNotificationsRequest& WithSubjects(const Aws::Vector<Aws::String>& value) { SetSubjects(value); return *this;}
    inline ListNotificationsRequest& WithSubjects(Aws::Vector<Aws::String>&& value) { SetSubjects(std::move(value)); return *this;}
    inline ListNotificationsRequest& AddSubjects(const Aws::String& value) { m_subjectsHasBeenSet = true; m_subjects.push_back(value); return *this; }
    inline ListNotificationsRequest& AddSubjects(Aws::String&& value) { m_subjectsHasBeenSet = true; m_subjects.push_back(std::move(value)); return *this; }
    inline ListNotificationsRequest& AddSubjects(const char* value) { m_subjectsHasBeenSet = true; m_subjects.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The task status of notifications.</p>
     */
    inline const TaskStatus& GetTaskStatus() const{ return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(const TaskStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline void SetTaskStatus(TaskStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }
    inline ListNotificationsRequest& WithTaskStatus(const TaskStatus& value) { SetTaskStatus(value); return *this;}
    inline ListNotificationsRequest& WithTaskStatus(TaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of notifications.</p>
     */
    inline const NotificationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const NotificationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(NotificationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ListNotificationsRequest& WithType(const NotificationType& value) { SetType(value); return *this;}
    inline ListNotificationsRequest& WithType(NotificationType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_afterTimestamp;
    bool m_afterTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_beforeTimestamp;
    bool m_beforeTimestampHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_subjects;
    bool m_subjectsHasBeenSet = false;

    TaskStatus m_taskStatus;
    bool m_taskStatusHasBeenSet = false;

    NotificationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
