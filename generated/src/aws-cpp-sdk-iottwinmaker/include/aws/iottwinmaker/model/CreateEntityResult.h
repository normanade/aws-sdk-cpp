﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iottwinmaker/model/State.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class CreateEntityResult
  {
  public:
    AWS_IOTTWINMAKER_API CreateEntityResult();
    AWS_IOTTWINMAKER_API CreateEntityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API CreateEntityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the entity.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline void SetEntityId(const Aws::String& value) { m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityId.assign(value); }
    inline CreateEntityResult& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline CreateEntityResult& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline CreateEntityResult& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the entity.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateEntityResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateEntityResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateEntityResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline CreateEntityResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline CreateEntityResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the entity.</p>
     */
    inline const State& GetState() const{ return m_state; }
    inline void SetState(const State& value) { m_state = value; }
    inline void SetState(State&& value) { m_state = std::move(value); }
    inline CreateEntityResult& WithState(const State& value) { SetState(value); return *this;}
    inline CreateEntityResult& WithState(State&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateEntityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateEntityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateEntityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_entityId;

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationDateTime;

    State m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
