﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace QuickSight
{
namespace Model
{
  class DeleteAnalysisResult
  {
  public:
    AWS_QUICKSIGHT_API DeleteAnalysisResult();
    AWS_QUICKSIGHT_API DeleteAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DeleteAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline DeleteAnalysisResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the deleted analysis.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DeleteAnalysisResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeleteAnalysisResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeleteAnalysisResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the deleted analysis.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }
    inline void SetAnalysisId(const Aws::String& value) { m_analysisId = value; }
    inline void SetAnalysisId(Aws::String&& value) { m_analysisId = std::move(value); }
    inline void SetAnalysisId(const char* value) { m_analysisId.assign(value); }
    inline DeleteAnalysisResult& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}
    inline DeleteAnalysisResult& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}
    inline DeleteAnalysisResult& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the analysis is scheduled to be deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionTime() const{ return m_deletionTime; }
    inline void SetDeletionTime(const Aws::Utils::DateTime& value) { m_deletionTime = value; }
    inline void SetDeletionTime(Aws::Utils::DateTime&& value) { m_deletionTime = std::move(value); }
    inline DeleteAnalysisResult& WithDeletionTime(const Aws::Utils::DateTime& value) { SetDeletionTime(value); return *this;}
    inline DeleteAnalysisResult& WithDeletionTime(Aws::Utils::DateTime&& value) { SetDeletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteAnalysisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteAnalysisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteAnalysisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_status;

    Aws::String m_arn;

    Aws::String m_analysisId;

    Aws::Utils::DateTime m_deletionTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
