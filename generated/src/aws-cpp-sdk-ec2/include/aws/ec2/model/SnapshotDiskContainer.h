﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/UserBucket.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The disk container object for the import snapshot request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SnapshotDiskContainer">AWS
   * API Reference</a></p>
   */
  class SnapshotDiskContainer
  {
  public:
    AWS_EC2_API SnapshotDiskContainer();
    AWS_EC2_API SnapshotDiskContainer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SnapshotDiskContainer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The description of the disk image being imported.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SnapshotDiskContainer& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SnapshotDiskContainer& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SnapshotDiskContainer& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>VHD</code> | <code>VMDK</code> | <code>RAW</code> </p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }
    inline SnapshotDiskContainer& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline SnapshotDiskContainer& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline SnapshotDiskContainer& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the Amazon S3-based disk image being imported. It can either be a
     * https URL (https://..) or an Amazon S3 URL (s3://..).</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline SnapshotDiskContainer& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline SnapshotDiskContainer& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline SnapshotDiskContainer& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket for the disk image.</p>
     */
    inline const UserBucket& GetUserBucket() const{ return m_userBucket; }
    inline bool UserBucketHasBeenSet() const { return m_userBucketHasBeenSet; }
    inline void SetUserBucket(const UserBucket& value) { m_userBucketHasBeenSet = true; m_userBucket = value; }
    inline void SetUserBucket(UserBucket&& value) { m_userBucketHasBeenSet = true; m_userBucket = std::move(value); }
    inline SnapshotDiskContainer& WithUserBucket(const UserBucket& value) { SetUserBucket(value); return *this;}
    inline SnapshotDiskContainer& WithUserBucket(UserBucket&& value) { SetUserBucket(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    UserBucket m_userBucket;
    bool m_userBucketHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
