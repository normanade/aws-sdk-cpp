﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/ModelStatus.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class CreateModelResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateModelResult();
    AWS_LOOKOUTEQUIPMENT_API CreateModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API CreateModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model being created. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }
    inline CreateModelResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline CreateModelResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline CreateModelResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the <code>CreateModel</code> operation. </p>
     */
    inline const ModelStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ModelStatus& value) { m_status = value; }
    inline void SetStatus(ModelStatus&& value) { m_status = std::move(value); }
    inline CreateModelResult& WithStatus(const ModelStatus& value) { SetStatus(value); return *this;}
    inline CreateModelResult& WithStatus(ModelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;

    ModelStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
