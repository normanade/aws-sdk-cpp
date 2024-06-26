﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>An activity that runs a Lambda function to modify the message.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/LambdaActivity">AWS
   * API Reference</a></p>
   */
  class LambdaActivity
  {
  public:
    AWS_IOTANALYTICS_API LambdaActivity();
    AWS_IOTANALYTICS_API LambdaActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API LambdaActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the lambda activity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline LambdaActivity& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline LambdaActivity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline LambdaActivity& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Lambda function that is run on the message.</p>
     */
    inline const Aws::String& GetLambdaName() const{ return m_lambdaName; }
    inline bool LambdaNameHasBeenSet() const { return m_lambdaNameHasBeenSet; }
    inline void SetLambdaName(const Aws::String& value) { m_lambdaNameHasBeenSet = true; m_lambdaName = value; }
    inline void SetLambdaName(Aws::String&& value) { m_lambdaNameHasBeenSet = true; m_lambdaName = std::move(value); }
    inline void SetLambdaName(const char* value) { m_lambdaNameHasBeenSet = true; m_lambdaName.assign(value); }
    inline LambdaActivity& WithLambdaName(const Aws::String& value) { SetLambdaName(value); return *this;}
    inline LambdaActivity& WithLambdaName(Aws::String&& value) { SetLambdaName(std::move(value)); return *this;}
    inline LambdaActivity& WithLambdaName(const char* value) { SetLambdaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of messages passed to the Lambda function for processing.</p>
     * <p>The Lambda function must be able to process all of these messages within five
     * minutes, which is the maximum timeout duration for Lambda functions.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }
    inline LambdaActivity& WithBatchSize(int value) { SetBatchSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline const Aws::String& GetNext() const{ return m_next; }
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }
    inline void SetNext(const Aws::String& value) { m_nextHasBeenSet = true; m_next = value; }
    inline void SetNext(Aws::String&& value) { m_nextHasBeenSet = true; m_next = std::move(value); }
    inline void SetNext(const char* value) { m_nextHasBeenSet = true; m_next.assign(value); }
    inline LambdaActivity& WithNext(const Aws::String& value) { SetNext(value); return *this;}
    inline LambdaActivity& WithNext(Aws::String&& value) { SetNext(std::move(value)); return *this;}
    inline LambdaActivity& WithNext(const char* value) { SetNext(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_lambdaName;
    bool m_lambdaNameHasBeenSet = false;

    int m_batchSize;
    bool m_batchSizeHasBeenSet = false;

    Aws::String m_next;
    bool m_nextHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
