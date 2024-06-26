﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/ICD10CMEntity.h>
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
namespace ComprehendMedical
{
namespace Model
{
  class InferICD10CMResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API InferICD10CMResult();
    AWS_COMPREHENDMEDICAL_API InferICD10CMResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API InferICD10CMResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The medical conditions detected in the text linked to ICD-10-CM concepts. If
     * the action is successful, the service sends back an HTTP 200 response, as well
     * as the entities detected.</p>
     */
    inline const Aws::Vector<ICD10CMEntity>& GetEntities() const{ return m_entities; }
    inline void SetEntities(const Aws::Vector<ICD10CMEntity>& value) { m_entities = value; }
    inline void SetEntities(Aws::Vector<ICD10CMEntity>&& value) { m_entities = std::move(value); }
    inline InferICD10CMResult& WithEntities(const Aws::Vector<ICD10CMEntity>& value) { SetEntities(value); return *this;}
    inline InferICD10CMResult& WithEntities(Aws::Vector<ICD10CMEntity>&& value) { SetEntities(std::move(value)); return *this;}
    inline InferICD10CMResult& AddEntities(const ICD10CMEntity& value) { m_entities.push_back(value); return *this; }
    inline InferICD10CMResult& AddEntities(ICD10CMEntity&& value) { m_entities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result of the previous request to <code>InferICD10CM</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * medical condition entities. </p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }
    inline void SetPaginationToken(const Aws::String& value) { m_paginationToken = value; }
    inline void SetPaginationToken(Aws::String&& value) { m_paginationToken = std::move(value); }
    inline void SetPaginationToken(const char* value) { m_paginationToken.assign(value); }
    inline InferICD10CMResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}
    inline InferICD10CMResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}
    inline InferICD10CMResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model used to analyze the documents, in the format
     * <i>n</i>.<i>n</i>.<i>n</i> You can use this information to track the model used
     * for a particular batch of documents.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }
    inline void SetModelVersion(const Aws::String& value) { m_modelVersion = value; }
    inline void SetModelVersion(Aws::String&& value) { m_modelVersion = std::move(value); }
    inline void SetModelVersion(const char* value) { m_modelVersion.assign(value); }
    inline InferICD10CMResult& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}
    inline InferICD10CMResult& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}
    inline InferICD10CMResult& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InferICD10CMResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InferICD10CMResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InferICD10CMResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ICD10CMEntity> m_entities;

    Aws::String m_paginationToken;

    Aws::String m_modelVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
