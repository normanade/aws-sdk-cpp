﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DetailedAlgorithmStatus.h>
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
   * <p>Represents the overall status of an algorithm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AlgorithmStatusItem">AWS
   * API Reference</a></p>
   */
  class AlgorithmStatusItem
  {
  public:
    AWS_SAGEMAKER_API AlgorithmStatusItem();
    AWS_SAGEMAKER_API AlgorithmStatusItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AlgorithmStatusItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the algorithm for which the overall status is being reported.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AlgorithmStatusItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AlgorithmStatusItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AlgorithmStatusItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status.</p>
     */
    inline const DetailedAlgorithmStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DetailedAlgorithmStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DetailedAlgorithmStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AlgorithmStatusItem& WithStatus(const DetailedAlgorithmStatus& value) { SetStatus(value); return *this;}
    inline AlgorithmStatusItem& WithStatus(DetailedAlgorithmStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>if the overall status is <code>Failed</code>, the reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline AlgorithmStatusItem& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline AlgorithmStatusItem& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline AlgorithmStatusItem& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DetailedAlgorithmStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
