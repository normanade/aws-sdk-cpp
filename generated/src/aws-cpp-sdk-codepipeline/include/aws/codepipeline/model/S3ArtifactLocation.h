﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The location of the S3 bucket that contains a revision.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/S3ArtifactLocation">AWS
   * API Reference</a></p>
   */
  class S3ArtifactLocation
  {
  public:
    AWS_CODEPIPELINE_API S3ArtifactLocation();
    AWS_CODEPIPELINE_API S3ArtifactLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API S3ArtifactLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }
    inline S3ArtifactLocation& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline S3ArtifactLocation& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline S3ArtifactLocation& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key of the object in the S3 bucket, which uniquely identifies the object
     * in the bucket.</p>
     */
    inline const Aws::String& GetObjectKey() const{ return m_objectKey; }
    inline bool ObjectKeyHasBeenSet() const { return m_objectKeyHasBeenSet; }
    inline void SetObjectKey(const Aws::String& value) { m_objectKeyHasBeenSet = true; m_objectKey = value; }
    inline void SetObjectKey(Aws::String&& value) { m_objectKeyHasBeenSet = true; m_objectKey = std::move(value); }
    inline void SetObjectKey(const char* value) { m_objectKeyHasBeenSet = true; m_objectKey.assign(value); }
    inline S3ArtifactLocation& WithObjectKey(const Aws::String& value) { SetObjectKey(value); return *this;}
    inline S3ArtifactLocation& WithObjectKey(Aws::String&& value) { SetObjectKey(std::move(value)); return *this;}
    inline S3ArtifactLocation& WithObjectKey(const char* value) { SetObjectKey(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_objectKey;
    bool m_objectKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
