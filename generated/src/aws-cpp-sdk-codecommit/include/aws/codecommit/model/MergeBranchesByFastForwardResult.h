﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{
  class MergeBranchesByFastForwardResult
  {
  public:
    AWS_CODECOMMIT_API MergeBranchesByFastForwardResult();
    AWS_CODECOMMIT_API MergeBranchesByFastForwardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API MergeBranchesByFastForwardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The commit ID of the merge in the destination or target branch.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }
    inline void SetCommitId(const Aws::String& value) { m_commitId = value; }
    inline void SetCommitId(Aws::String&& value) { m_commitId = std::move(value); }
    inline void SetCommitId(const char* value) { m_commitId.assign(value); }
    inline MergeBranchesByFastForwardResult& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}
    inline MergeBranchesByFastForwardResult& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}
    inline MergeBranchesByFastForwardResult& WithCommitId(const char* value) { SetCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tree ID of the merge in the destination or target branch.</p>
     */
    inline const Aws::String& GetTreeId() const{ return m_treeId; }
    inline void SetTreeId(const Aws::String& value) { m_treeId = value; }
    inline void SetTreeId(Aws::String&& value) { m_treeId = std::move(value); }
    inline void SetTreeId(const char* value) { m_treeId.assign(value); }
    inline MergeBranchesByFastForwardResult& WithTreeId(const Aws::String& value) { SetTreeId(value); return *this;}
    inline MergeBranchesByFastForwardResult& WithTreeId(Aws::String&& value) { SetTreeId(std::move(value)); return *this;}
    inline MergeBranchesByFastForwardResult& WithTreeId(const char* value) { SetTreeId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline MergeBranchesByFastForwardResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline MergeBranchesByFastForwardResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline MergeBranchesByFastForwardResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_commitId;

    Aws::String m_treeId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
