﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/S3Config.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>CloudWatch logging configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CloudWatchConfig">AWS
   * API Reference</a></p>
   */
  class CloudWatchConfig
  {
  public:
    AWS_BEDROCK_API CloudWatchConfig();
    AWS_BEDROCK_API CloudWatchConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API CloudWatchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The log group name.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }
    inline CloudWatchConfig& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}
    inline CloudWatchConfig& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}
    inline CloudWatchConfig& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CloudWatchConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CloudWatchConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CloudWatchConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 configuration for delivering a large amount of data.</p>
     */
    inline const S3Config& GetLargeDataDeliveryS3Config() const{ return m_largeDataDeliveryS3Config; }
    inline bool LargeDataDeliveryS3ConfigHasBeenSet() const { return m_largeDataDeliveryS3ConfigHasBeenSet; }
    inline void SetLargeDataDeliveryS3Config(const S3Config& value) { m_largeDataDeliveryS3ConfigHasBeenSet = true; m_largeDataDeliveryS3Config = value; }
    inline void SetLargeDataDeliveryS3Config(S3Config&& value) { m_largeDataDeliveryS3ConfigHasBeenSet = true; m_largeDataDeliveryS3Config = std::move(value); }
    inline CloudWatchConfig& WithLargeDataDeliveryS3Config(const S3Config& value) { SetLargeDataDeliveryS3Config(value); return *this;}
    inline CloudWatchConfig& WithLargeDataDeliveryS3Config(S3Config&& value) { SetLargeDataDeliveryS3Config(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    S3Config m_largeDataDeliveryS3Config;
    bool m_largeDataDeliveryS3ConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
