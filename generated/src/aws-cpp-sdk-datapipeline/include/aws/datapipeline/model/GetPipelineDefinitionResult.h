﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datapipeline/model/PipelineObject.h>
#include <aws/datapipeline/model/ParameterObject.h>
#include <aws/datapipeline/model/ParameterValue.h>
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
   * <p>Contains the output of GetPipelineDefinition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/GetPipelineDefinitionOutput">AWS
   * API Reference</a></p>
   */
  class GetPipelineDefinitionResult
  {
  public:
    AWS_DATAPIPELINE_API GetPipelineDefinitionResult();
    AWS_DATAPIPELINE_API GetPipelineDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API GetPipelineDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The objects defined in the pipeline.</p>
     */
    inline const Aws::Vector<PipelineObject>& GetPipelineObjects() const{ return m_pipelineObjects; }
    inline void SetPipelineObjects(const Aws::Vector<PipelineObject>& value) { m_pipelineObjects = value; }
    inline void SetPipelineObjects(Aws::Vector<PipelineObject>&& value) { m_pipelineObjects = std::move(value); }
    inline GetPipelineDefinitionResult& WithPipelineObjects(const Aws::Vector<PipelineObject>& value) { SetPipelineObjects(value); return *this;}
    inline GetPipelineDefinitionResult& WithPipelineObjects(Aws::Vector<PipelineObject>&& value) { SetPipelineObjects(std::move(value)); return *this;}
    inline GetPipelineDefinitionResult& AddPipelineObjects(const PipelineObject& value) { m_pipelineObjects.push_back(value); return *this; }
    inline GetPipelineDefinitionResult& AddPipelineObjects(PipelineObject&& value) { m_pipelineObjects.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameter objects used in the pipeline definition.</p>
     */
    inline const Aws::Vector<ParameterObject>& GetParameterObjects() const{ return m_parameterObjects; }
    inline void SetParameterObjects(const Aws::Vector<ParameterObject>& value) { m_parameterObjects = value; }
    inline void SetParameterObjects(Aws::Vector<ParameterObject>&& value) { m_parameterObjects = std::move(value); }
    inline GetPipelineDefinitionResult& WithParameterObjects(const Aws::Vector<ParameterObject>& value) { SetParameterObjects(value); return *this;}
    inline GetPipelineDefinitionResult& WithParameterObjects(Aws::Vector<ParameterObject>&& value) { SetParameterObjects(std::move(value)); return *this;}
    inline GetPipelineDefinitionResult& AddParameterObjects(const ParameterObject& value) { m_parameterObjects.push_back(value); return *this; }
    inline GetPipelineDefinitionResult& AddParameterObjects(ParameterObject&& value) { m_parameterObjects.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameter values used in the pipeline definition.</p>
     */
    inline const Aws::Vector<ParameterValue>& GetParameterValues() const{ return m_parameterValues; }
    inline void SetParameterValues(const Aws::Vector<ParameterValue>& value) { m_parameterValues = value; }
    inline void SetParameterValues(Aws::Vector<ParameterValue>&& value) { m_parameterValues = std::move(value); }
    inline GetPipelineDefinitionResult& WithParameterValues(const Aws::Vector<ParameterValue>& value) { SetParameterValues(value); return *this;}
    inline GetPipelineDefinitionResult& WithParameterValues(Aws::Vector<ParameterValue>&& value) { SetParameterValues(std::move(value)); return *this;}
    inline GetPipelineDefinitionResult& AddParameterValues(const ParameterValue& value) { m_parameterValues.push_back(value); return *this; }
    inline GetPipelineDefinitionResult& AddParameterValues(ParameterValue&& value) { m_parameterValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPipelineDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPipelineDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPipelineDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PipelineObject> m_pipelineObjects;

    Aws::Vector<ParameterObject> m_parameterObjects;

    Aws::Vector<ParameterValue> m_parameterValues;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
