﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datapipeline/model/ValidationError.h>
#include <aws/datapipeline/model/ValidationWarning.h>
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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of PutPipelineDefinition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/PutPipelineDefinitionOutput">AWS
   * API Reference</a></p>
   */
  class PutPipelineDefinitionResult
  {
  public:
    AWS_DATAPIPELINE_API PutPipelineDefinitionResult();
    AWS_DATAPIPELINE_API PutPipelineDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API PutPipelineDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The validation errors that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline const Aws::Vector<ValidationError>& GetValidationErrors() const{ return m_validationErrors; }
    inline void SetValidationErrors(const Aws::Vector<ValidationError>& value) { m_validationErrors = value; }
    inline void SetValidationErrors(Aws::Vector<ValidationError>&& value) { m_validationErrors = std::move(value); }
    inline PutPipelineDefinitionResult& WithValidationErrors(const Aws::Vector<ValidationError>& value) { SetValidationErrors(value); return *this;}
    inline PutPipelineDefinitionResult& WithValidationErrors(Aws::Vector<ValidationError>&& value) { SetValidationErrors(std::move(value)); return *this;}
    inline PutPipelineDefinitionResult& AddValidationErrors(const ValidationError& value) { m_validationErrors.push_back(value); return *this; }
    inline PutPipelineDefinitionResult& AddValidationErrors(ValidationError&& value) { m_validationErrors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The validation warnings that are associated with the objects defined in
     * <code>pipelineObjects</code>.</p>
     */
    inline const Aws::Vector<ValidationWarning>& GetValidationWarnings() const{ return m_validationWarnings; }
    inline void SetValidationWarnings(const Aws::Vector<ValidationWarning>& value) { m_validationWarnings = value; }
    inline void SetValidationWarnings(Aws::Vector<ValidationWarning>&& value) { m_validationWarnings = std::move(value); }
    inline PutPipelineDefinitionResult& WithValidationWarnings(const Aws::Vector<ValidationWarning>& value) { SetValidationWarnings(value); return *this;}
    inline PutPipelineDefinitionResult& WithValidationWarnings(Aws::Vector<ValidationWarning>&& value) { SetValidationWarnings(std::move(value)); return *this;}
    inline PutPipelineDefinitionResult& AddValidationWarnings(const ValidationWarning& value) { m_validationWarnings.push_back(value); return *this; }
    inline PutPipelineDefinitionResult& AddValidationWarnings(ValidationWarning&& value) { m_validationWarnings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether there were validation errors, and the pipeline definition
     * is stored but cannot be activated until you correct the pipeline and call
     * <code>PutPipelineDefinition</code> to commit the corrected pipeline.</p>
     */
    inline bool GetErrored() const{ return m_errored; }
    inline void SetErrored(bool value) { m_errored = value; }
    inline PutPipelineDefinitionResult& WithErrored(bool value) { SetErrored(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutPipelineDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutPipelineDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutPipelineDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ValidationError> m_validationErrors;

    Aws::Vector<ValidationWarning> m_validationWarnings;

    bool m_errored;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
