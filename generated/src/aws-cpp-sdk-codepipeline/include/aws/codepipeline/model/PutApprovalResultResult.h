﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodePipeline
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>PutApprovalResult</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutApprovalResultOutput">AWS
   * API Reference</a></p>
   */
  class PutApprovalResultResult
  {
  public:
    AWS_CODEPIPELINE_API PutApprovalResultResult();
    AWS_CODEPIPELINE_API PutApprovalResultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API PutApprovalResultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp showing when the approval or rejection was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetApprovedAt() const{ return m_approvedAt; }
    inline void SetApprovedAt(const Aws::Utils::DateTime& value) { m_approvedAt = value; }
    inline void SetApprovedAt(Aws::Utils::DateTime&& value) { m_approvedAt = std::move(value); }
    inline PutApprovalResultResult& WithApprovedAt(const Aws::Utils::DateTime& value) { SetApprovedAt(value); return *this;}
    inline PutApprovalResultResult& WithApprovedAt(Aws::Utils::DateTime&& value) { SetApprovedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutApprovalResultResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutApprovalResultResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutApprovalResultResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_approvedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
