﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
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
namespace SQS
{
namespace Model
{

  /**
   * <p>Encloses a receipt handle and an identifier for it.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/DeleteMessageBatchRequestEntry">AWS
   * API Reference</a></p>
   */
  class DeleteMessageBatchRequestEntry
  {
  public:
    AWS_SQS_API DeleteMessageBatchRequestEntry();
    AWS_SQS_API DeleteMessageBatchRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SQS_API DeleteMessageBatchRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SQS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for this particular receipt handle. This is used to
     * communicate the result.</p>  <p>The <code>Id</code>s of a batch request
     * need to be unique within a request.</p> <p>This identifier can have up to 80
     * characters. The following characters are accepted: alphanumeric characters,
     * hyphens(-), and underscores (_).</p> 
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DeleteMessageBatchRequestEntry& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeleteMessageBatchRequestEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeleteMessageBatchRequestEntry& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A receipt handle.</p>
     */
    inline const Aws::String& GetReceiptHandle() const{ return m_receiptHandle; }
    inline bool ReceiptHandleHasBeenSet() const { return m_receiptHandleHasBeenSet; }
    inline void SetReceiptHandle(const Aws::String& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = value; }
    inline void SetReceiptHandle(Aws::String&& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = std::move(value); }
    inline void SetReceiptHandle(const char* value) { m_receiptHandleHasBeenSet = true; m_receiptHandle.assign(value); }
    inline DeleteMessageBatchRequestEntry& WithReceiptHandle(const Aws::String& value) { SetReceiptHandle(value); return *this;}
    inline DeleteMessageBatchRequestEntry& WithReceiptHandle(Aws::String&& value) { SetReceiptHandle(std::move(value)); return *this;}
    inline DeleteMessageBatchRequestEntry& WithReceiptHandle(const char* value) { SetReceiptHandle(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_receiptHandle;
    bool m_receiptHandleHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
