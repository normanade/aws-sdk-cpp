﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/EventSubscription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyEventSubscriptionResponse">AWS
   * API Reference</a></p>
   */
  class ModifyEventSubscriptionResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyEventSubscriptionResult();
    AWS_DATABASEMIGRATIONSERVICE_API ModifyEventSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ModifyEventSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The modified event subscription.</p>
     */
    inline const EventSubscription& GetEventSubscription() const{ return m_eventSubscription; }
    inline void SetEventSubscription(const EventSubscription& value) { m_eventSubscription = value; }
    inline void SetEventSubscription(EventSubscription&& value) { m_eventSubscription = std::move(value); }
    inline ModifyEventSubscriptionResult& WithEventSubscription(const EventSubscription& value) { SetEventSubscription(value); return *this;}
    inline ModifyEventSubscriptionResult& WithEventSubscription(EventSubscription&& value) { SetEventSubscription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ModifyEventSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ModifyEventSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ModifyEventSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    EventSubscription m_eventSubscription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
