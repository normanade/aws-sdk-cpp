﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/FunctionConfiguration.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a Lambda function.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Function">AWS
   * API Reference</a></p>
   */
  class Function
  {
  public:
    AWS_GREENGRASS_API Function();
    AWS_GREENGRASS_API Function(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Function& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the Lambda function.
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }
    inline Function& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}
    inline Function& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}
    inline Function& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The configuration of the Lambda function.
     */
    inline const FunctionConfiguration& GetFunctionConfiguration() const{ return m_functionConfiguration; }
    inline bool FunctionConfigurationHasBeenSet() const { return m_functionConfigurationHasBeenSet; }
    inline void SetFunctionConfiguration(const FunctionConfiguration& value) { m_functionConfigurationHasBeenSet = true; m_functionConfiguration = value; }
    inline void SetFunctionConfiguration(FunctionConfiguration&& value) { m_functionConfigurationHasBeenSet = true; m_functionConfiguration = std::move(value); }
    inline Function& WithFunctionConfiguration(const FunctionConfiguration& value) { SetFunctionConfiguration(value); return *this;}
    inline Function& WithFunctionConfiguration(FunctionConfiguration&& value) { SetFunctionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A descriptive or arbitrary ID for the function. This value must be unique within
     * the function definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Function& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Function& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Function& WithId(const char* value) { SetId(value); return *this;}
    ///@}
  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    FunctionConfiguration m_functionConfiguration;
    bool m_functionConfigurationHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
