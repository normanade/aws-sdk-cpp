﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
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
namespace ForecastService
{
namespace Model
{
  class CreateExplainabilityExportResult
  {
  public:
    AWS_FORECASTSERVICE_API CreateExplainabilityExportResult();
    AWS_FORECASTSERVICE_API CreateExplainabilityExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateExplainabilityExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline const Aws::String& GetExplainabilityExportArn() const{ return m_explainabilityExportArn; }
    inline void SetExplainabilityExportArn(const Aws::String& value) { m_explainabilityExportArn = value; }
    inline void SetExplainabilityExportArn(Aws::String&& value) { m_explainabilityExportArn = std::move(value); }
    inline void SetExplainabilityExportArn(const char* value) { m_explainabilityExportArn.assign(value); }
    inline CreateExplainabilityExportResult& WithExplainabilityExportArn(const Aws::String& value) { SetExplainabilityExportArn(value); return *this;}
    inline CreateExplainabilityExportResult& WithExplainabilityExportArn(Aws::String&& value) { SetExplainabilityExportArn(std::move(value)); return *this;}
    inline CreateExplainabilityExportResult& WithExplainabilityExportArn(const char* value) { SetExplainabilityExportArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateExplainabilityExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateExplainabilityExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateExplainabilityExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_explainabilityExportArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
