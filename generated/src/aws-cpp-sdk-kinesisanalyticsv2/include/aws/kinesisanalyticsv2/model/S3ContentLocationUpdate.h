﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes an update for the Amazon S3 code content location for an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3ContentLocationUpdate">AWS
   * API Reference</a></p>
   */
  class S3ContentLocationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API S3ContentLocationUpdate();
    AWS_KINESISANALYTICSV2_API S3ContentLocationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API S3ContentLocationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The new Amazon Resource Name (ARN) for the S3 bucket containing the
     * application code.</p>
     */
    inline const Aws::String& GetBucketARNUpdate() const{ return m_bucketARNUpdate; }
    inline bool BucketARNUpdateHasBeenSet() const { return m_bucketARNUpdateHasBeenSet; }
    inline void SetBucketARNUpdate(const Aws::String& value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate = value; }
    inline void SetBucketARNUpdate(Aws::String&& value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate = std::move(value); }
    inline void SetBucketARNUpdate(const char* value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate.assign(value); }
    inline S3ContentLocationUpdate& WithBucketARNUpdate(const Aws::String& value) { SetBucketARNUpdate(value); return *this;}
    inline S3ContentLocationUpdate& WithBucketARNUpdate(Aws::String&& value) { SetBucketARNUpdate(std::move(value)); return *this;}
    inline S3ContentLocationUpdate& WithBucketARNUpdate(const char* value) { SetBucketARNUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new file key for the object containing the application code.</p>
     */
    inline const Aws::String& GetFileKeyUpdate() const{ return m_fileKeyUpdate; }
    inline bool FileKeyUpdateHasBeenSet() const { return m_fileKeyUpdateHasBeenSet; }
    inline void SetFileKeyUpdate(const Aws::String& value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate = value; }
    inline void SetFileKeyUpdate(Aws::String&& value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate = std::move(value); }
    inline void SetFileKeyUpdate(const char* value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate.assign(value); }
    inline S3ContentLocationUpdate& WithFileKeyUpdate(const Aws::String& value) { SetFileKeyUpdate(value); return *this;}
    inline S3ContentLocationUpdate& WithFileKeyUpdate(Aws::String&& value) { SetFileKeyUpdate(std::move(value)); return *this;}
    inline S3ContentLocationUpdate& WithFileKeyUpdate(const char* value) { SetFileKeyUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new version of the object containing the application code.</p>
     */
    inline const Aws::String& GetObjectVersionUpdate() const{ return m_objectVersionUpdate; }
    inline bool ObjectVersionUpdateHasBeenSet() const { return m_objectVersionUpdateHasBeenSet; }
    inline void SetObjectVersionUpdate(const Aws::String& value) { m_objectVersionUpdateHasBeenSet = true; m_objectVersionUpdate = value; }
    inline void SetObjectVersionUpdate(Aws::String&& value) { m_objectVersionUpdateHasBeenSet = true; m_objectVersionUpdate = std::move(value); }
    inline void SetObjectVersionUpdate(const char* value) { m_objectVersionUpdateHasBeenSet = true; m_objectVersionUpdate.assign(value); }
    inline S3ContentLocationUpdate& WithObjectVersionUpdate(const Aws::String& value) { SetObjectVersionUpdate(value); return *this;}
    inline S3ContentLocationUpdate& WithObjectVersionUpdate(Aws::String&& value) { SetObjectVersionUpdate(std::move(value)); return *this;}
    inline S3ContentLocationUpdate& WithObjectVersionUpdate(const char* value) { SetObjectVersionUpdate(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketARNUpdate;
    bool m_bucketARNUpdateHasBeenSet = false;

    Aws::String m_fileKeyUpdate;
    bool m_fileKeyUpdateHasBeenSet = false;

    Aws::String m_objectVersionUpdate;
    bool m_objectVersionUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
