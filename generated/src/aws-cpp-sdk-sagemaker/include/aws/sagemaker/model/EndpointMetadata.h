﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EndpointStatus.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The metadata of the endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EndpointMetadata">AWS
   * API Reference</a></p>
   */
  class EndpointMetadata
  {
  public:
    AWS_SAGEMAKER_API EndpointMetadata();
    AWS_SAGEMAKER_API EndpointMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EndpointMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }
    inline EndpointMetadata& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline EndpointMetadata& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline EndpointMetadata& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint configuration.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }
    inline bool EndpointConfigNameHasBeenSet() const { return m_endpointConfigNameHasBeenSet; }
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = value; }
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::move(value); }
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName.assign(value); }
    inline EndpointMetadata& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}
    inline EndpointMetadata& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}
    inline EndpointMetadata& WithEndpointConfigName(const char* value) { SetEndpointConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the endpoint. For possible values of the status of an
     * endpoint, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_EndpointSummary.html">EndpointSummary</a>.
     * </p>
     */
    inline const EndpointStatus& GetEndpointStatus() const{ return m_endpointStatus; }
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }
    inline void SetEndpointStatus(const EndpointStatus& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }
    inline void SetEndpointStatus(EndpointStatus&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::move(value); }
    inline EndpointMetadata& WithEndpointStatus(const EndpointStatus& value) { SetEndpointStatus(value); return *this;}
    inline EndpointMetadata& WithEndpointStatus(EndpointStatus&& value) { SetEndpointStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the status of the endpoint is <code>Failed</code>, or the status is
     * <code>InService</code> but update operation fails, this provides the reason why
     * it failed. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline EndpointMetadata& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline EndpointMetadata& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline EndpointMetadata& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet = false;

    EndpointStatus m_endpointStatus;
    bool m_endpointStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
