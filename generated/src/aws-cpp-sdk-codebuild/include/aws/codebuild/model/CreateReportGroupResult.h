﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/ReportGroup.h>
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
namespace CodeBuild
{
namespace Model
{
  class CreateReportGroupResult
  {
  public:
    AWS_CODEBUILD_API CreateReportGroupResult();
    AWS_CODEBUILD_API CreateReportGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API CreateReportGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Information about the report group that was created. </p>
     */
    inline const ReportGroup& GetReportGroup() const{ return m_reportGroup; }
    inline void SetReportGroup(const ReportGroup& value) { m_reportGroup = value; }
    inline void SetReportGroup(ReportGroup&& value) { m_reportGroup = std::move(value); }
    inline CreateReportGroupResult& WithReportGroup(const ReportGroup& value) { SetReportGroup(value); return *this;}
    inline CreateReportGroupResult& WithReportGroup(ReportGroup&& value) { SetReportGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateReportGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateReportGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateReportGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ReportGroup m_reportGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
