﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/Location.h>
#include <aws/codecommit/model/Comment.h>
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
  class PostCommentForComparedCommitResult
  {
  public:
    AWS_CODECOMMIT_API PostCommentForComparedCommitResult();
    AWS_CODECOMMIT_API PostCommentForComparedCommitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API PostCommentForComparedCommitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the repository where you posted a comment on the comparison
     * between commits.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryName.assign(value); }
    inline PostCommentForComparedCommitResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline PostCommentForComparedCommitResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline PostCommentForComparedCommitResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the directionality you established, the full commit ID of the before
     * commit.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const{ return m_beforeCommitId; }
    inline void SetBeforeCommitId(const Aws::String& value) { m_beforeCommitId = value; }
    inline void SetBeforeCommitId(Aws::String&& value) { m_beforeCommitId = std::move(value); }
    inline void SetBeforeCommitId(const char* value) { m_beforeCommitId.assign(value); }
    inline PostCommentForComparedCommitResult& WithBeforeCommitId(const Aws::String& value) { SetBeforeCommitId(value); return *this;}
    inline PostCommentForComparedCommitResult& WithBeforeCommitId(Aws::String&& value) { SetBeforeCommitId(std::move(value)); return *this;}
    inline PostCommentForComparedCommitResult& WithBeforeCommitId(const char* value) { SetBeforeCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the directionality you established, the full commit ID of the after
     * commit.</p>
     */
    inline const Aws::String& GetAfterCommitId() const{ return m_afterCommitId; }
    inline void SetAfterCommitId(const Aws::String& value) { m_afterCommitId = value; }
    inline void SetAfterCommitId(Aws::String&& value) { m_afterCommitId = std::move(value); }
    inline void SetAfterCommitId(const char* value) { m_afterCommitId.assign(value); }
    inline PostCommentForComparedCommitResult& WithAfterCommitId(const Aws::String& value) { SetAfterCommitId(value); return *this;}
    inline PostCommentForComparedCommitResult& WithAfterCommitId(Aws::String&& value) { SetAfterCommitId(std::move(value)); return *this;}
    inline PostCommentForComparedCommitResult& WithAfterCommitId(const char* value) { SetAfterCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the directionality you established, the blob ID of the before blob.</p>
     */
    inline const Aws::String& GetBeforeBlobId() const{ return m_beforeBlobId; }
    inline void SetBeforeBlobId(const Aws::String& value) { m_beforeBlobId = value; }
    inline void SetBeforeBlobId(Aws::String&& value) { m_beforeBlobId = std::move(value); }
    inline void SetBeforeBlobId(const char* value) { m_beforeBlobId.assign(value); }
    inline PostCommentForComparedCommitResult& WithBeforeBlobId(const Aws::String& value) { SetBeforeBlobId(value); return *this;}
    inline PostCommentForComparedCommitResult& WithBeforeBlobId(Aws::String&& value) { SetBeforeBlobId(std::move(value)); return *this;}
    inline PostCommentForComparedCommitResult& WithBeforeBlobId(const char* value) { SetBeforeBlobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the directionality you established, the blob ID of the after blob.</p>
     */
    inline const Aws::String& GetAfterBlobId() const{ return m_afterBlobId; }
    inline void SetAfterBlobId(const Aws::String& value) { m_afterBlobId = value; }
    inline void SetAfterBlobId(Aws::String&& value) { m_afterBlobId = std::move(value); }
    inline void SetAfterBlobId(const char* value) { m_afterBlobId.assign(value); }
    inline PostCommentForComparedCommitResult& WithAfterBlobId(const Aws::String& value) { SetAfterBlobId(value); return *this;}
    inline PostCommentForComparedCommitResult& WithAfterBlobId(Aws::String&& value) { SetAfterBlobId(std::move(value)); return *this;}
    inline PostCommentForComparedCommitResult& WithAfterBlobId(const char* value) { SetAfterBlobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the comment in the comparison between the two commits.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }
    inline void SetLocation(const Location& value) { m_location = value; }
    inline void SetLocation(Location&& value) { m_location = std::move(value); }
    inline PostCommentForComparedCommitResult& WithLocation(const Location& value) { SetLocation(value); return *this;}
    inline PostCommentForComparedCommitResult& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the comment you posted.</p>
     */
    inline const Comment& GetComment() const{ return m_comment; }
    inline void SetComment(const Comment& value) { m_comment = value; }
    inline void SetComment(Comment&& value) { m_comment = std::move(value); }
    inline PostCommentForComparedCommitResult& WithComment(const Comment& value) { SetComment(value); return *this;}
    inline PostCommentForComparedCommitResult& WithComment(Comment&& value) { SetComment(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PostCommentForComparedCommitResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PostCommentForComparedCommitResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PostCommentForComparedCommitResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;

    Aws::String m_beforeCommitId;

    Aws::String m_afterCommitId;

    Aws::String m_beforeBlobId;

    Aws::String m_afterBlobId;

    Location m_location;

    Comment m_comment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
