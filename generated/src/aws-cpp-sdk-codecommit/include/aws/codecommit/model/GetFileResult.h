﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/FileModeTypeEnum.h>
#include <aws/core/utils/Array.h>
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
  class GetFileResult
  {
  public:
    AWS_CODECOMMIT_API GetFileResult();
    AWS_CODECOMMIT_API GetFileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetFileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full commit ID of the commit that contains the content returned by
     * GetFile.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }
    inline void SetCommitId(const Aws::String& value) { m_commitId = value; }
    inline void SetCommitId(Aws::String&& value) { m_commitId = std::move(value); }
    inline void SetCommitId(const char* value) { m_commitId.assign(value); }
    inline GetFileResult& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}
    inline GetFileResult& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}
    inline GetFileResult& WithCommitId(const char* value) { SetCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blob ID of the object that represents the file content.</p>
     */
    inline const Aws::String& GetBlobId() const{ return m_blobId; }
    inline void SetBlobId(const Aws::String& value) { m_blobId = value; }
    inline void SetBlobId(Aws::String&& value) { m_blobId = std::move(value); }
    inline void SetBlobId(const char* value) { m_blobId.assign(value); }
    inline GetFileResult& WithBlobId(const Aws::String& value) { SetBlobId(value); return *this;}
    inline GetFileResult& WithBlobId(Aws::String&& value) { SetBlobId(std::move(value)); return *this;}
    inline GetFileResult& WithBlobId(const char* value) { SetBlobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified path to the specified file. Returns the name and
     * extension of the file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }
    inline void SetFilePath(const Aws::String& value) { m_filePath = value; }
    inline void SetFilePath(Aws::String&& value) { m_filePath = std::move(value); }
    inline void SetFilePath(const char* value) { m_filePath.assign(value); }
    inline GetFileResult& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}
    inline GetFileResult& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}
    inline GetFileResult& WithFilePath(const char* value) { SetFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extrapolated file mode permissions of the blob. Valid values include
     * strings such as EXECUTABLE and not numeric values.</p>  <p>The file mode
     * permissions returned by this API are not the standard file mode permission
     * values, such as 100644, but rather extrapolated values. See the supported return
     * values.</p> 
     */
    inline const FileModeTypeEnum& GetFileMode() const{ return m_fileMode; }
    inline void SetFileMode(const FileModeTypeEnum& value) { m_fileMode = value; }
    inline void SetFileMode(FileModeTypeEnum&& value) { m_fileMode = std::move(value); }
    inline GetFileResult& WithFileMode(const FileModeTypeEnum& value) { SetFileMode(value); return *this;}
    inline GetFileResult& WithFileMode(FileModeTypeEnum&& value) { SetFileMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the contents of the file, in bytes.</p>
     */
    inline long long GetFileSize() const{ return m_fileSize; }
    inline void SetFileSize(long long value) { m_fileSize = value; }
    inline GetFileResult& WithFileSize(long long value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base-64 encoded binary data object that represents the content of the
     * file.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetFileContent() const{ return m_fileContent; }
    inline void SetFileContent(const Aws::Utils::ByteBuffer& value) { m_fileContent = value; }
    inline void SetFileContent(Aws::Utils::ByteBuffer&& value) { m_fileContent = std::move(value); }
    inline GetFileResult& WithFileContent(const Aws::Utils::ByteBuffer& value) { SetFileContent(value); return *this;}
    inline GetFileResult& WithFileContent(Aws::Utils::ByteBuffer&& value) { SetFileContent(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_commitId;

    Aws::String m_blobId;

    Aws::String m_filePath;

    FileModeTypeEnum m_fileMode;

    long long m_fileSize;

    Aws::Utils::ByteBuffer m_fileContent;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
