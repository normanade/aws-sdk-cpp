﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/Conflict.h>
#include <aws/codecommit/model/BatchDescribeMergeConflictsError.h>
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
  class BatchDescribeMergeConflictsResult
  {
  public:
    AWS_CODECOMMIT_API BatchDescribeMergeConflictsResult();
    AWS_CODECOMMIT_API BatchDescribeMergeConflictsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API BatchDescribeMergeConflictsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of conflicts for each file, including the conflict metadata and the
     * hunks of the differences between the files.</p>
     */
    inline const Aws::Vector<Conflict>& GetConflicts() const{ return m_conflicts; }
    inline void SetConflicts(const Aws::Vector<Conflict>& value) { m_conflicts = value; }
    inline void SetConflicts(Aws::Vector<Conflict>&& value) { m_conflicts = std::move(value); }
    inline BatchDescribeMergeConflictsResult& WithConflicts(const Aws::Vector<Conflict>& value) { SetConflicts(value); return *this;}
    inline BatchDescribeMergeConflictsResult& WithConflicts(Aws::Vector<Conflict>&& value) { SetConflicts(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsResult& AddConflicts(const Conflict& value) { m_conflicts.push_back(value); return *this; }
    inline BatchDescribeMergeConflictsResult& AddConflicts(Conflict&& value) { m_conflicts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline BatchDescribeMergeConflictsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline BatchDescribeMergeConflictsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of any errors returned while describing the merge conflicts for each
     * file.</p>
     */
    inline const Aws::Vector<BatchDescribeMergeConflictsError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchDescribeMergeConflictsError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchDescribeMergeConflictsError>&& value) { m_errors = std::move(value); }
    inline BatchDescribeMergeConflictsResult& WithErrors(const Aws::Vector<BatchDescribeMergeConflictsError>& value) { SetErrors(value); return *this;}
    inline BatchDescribeMergeConflictsResult& WithErrors(Aws::Vector<BatchDescribeMergeConflictsError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsResult& AddErrors(const BatchDescribeMergeConflictsError& value) { m_errors.push_back(value); return *this; }
    inline BatchDescribeMergeConflictsResult& AddErrors(BatchDescribeMergeConflictsError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetDestinationCommitId() const{ return m_destinationCommitId; }
    inline void SetDestinationCommitId(const Aws::String& value) { m_destinationCommitId = value; }
    inline void SetDestinationCommitId(Aws::String&& value) { m_destinationCommitId = std::move(value); }
    inline void SetDestinationCommitId(const char* value) { m_destinationCommitId.assign(value); }
    inline BatchDescribeMergeConflictsResult& WithDestinationCommitId(const Aws::String& value) { SetDestinationCommitId(value); return *this;}
    inline BatchDescribeMergeConflictsResult& WithDestinationCommitId(Aws::String&& value) { SetDestinationCommitId(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsResult& WithDestinationCommitId(const char* value) { SetDestinationCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetSourceCommitId() const{ return m_sourceCommitId; }
    inline void SetSourceCommitId(const Aws::String& value) { m_sourceCommitId = value; }
    inline void SetSourceCommitId(Aws::String&& value) { m_sourceCommitId = std::move(value); }
    inline void SetSourceCommitId(const char* value) { m_sourceCommitId.assign(value); }
    inline BatchDescribeMergeConflictsResult& WithSourceCommitId(const Aws::String& value) { SetSourceCommitId(value); return *this;}
    inline BatchDescribeMergeConflictsResult& WithSourceCommitId(Aws::String&& value) { SetSourceCommitId(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsResult& WithSourceCommitId(const char* value) { SetSourceCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline const Aws::String& GetBaseCommitId() const{ return m_baseCommitId; }
    inline void SetBaseCommitId(const Aws::String& value) { m_baseCommitId = value; }
    inline void SetBaseCommitId(Aws::String&& value) { m_baseCommitId = std::move(value); }
    inline void SetBaseCommitId(const char* value) { m_baseCommitId.assign(value); }
    inline BatchDescribeMergeConflictsResult& WithBaseCommitId(const Aws::String& value) { SetBaseCommitId(value); return *this;}
    inline BatchDescribeMergeConflictsResult& WithBaseCommitId(Aws::String&& value) { SetBaseCommitId(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsResult& WithBaseCommitId(const char* value) { SetBaseCommitId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDescribeMergeConflictsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDescribeMergeConflictsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Conflict> m_conflicts;

    Aws::String m_nextToken;

    Aws::Vector<BatchDescribeMergeConflictsError> m_errors;

    Aws::String m_destinationCommitId;

    Aws::String m_sourceCommitId;

    Aws::String m_baseCommitId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
