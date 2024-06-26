﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/QueueName.h>
#include <aws/braket/model/QueuePriority.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>Information about the queue for the specified quantum task.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/QuantumTaskQueueInfo">AWS
   * API Reference</a></p>
   */
  class QuantumTaskQueueInfo
  {
  public:
    AWS_BRAKET_API QuantumTaskQueueInfo();
    AWS_BRAKET_API QuantumTaskQueueInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API QuantumTaskQueueInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Optional. Provides more information about the queue position. For example, if
     * the task is complete and no longer in the queue, the message field contains that
     * information.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline QuantumTaskQueueInfo& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline QuantumTaskQueueInfo& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline QuantumTaskQueueInfo& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current position of the task in the quantum tasks queue.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }
    inline QuantumTaskQueueInfo& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}
    inline QuantumTaskQueueInfo& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}
    inline QuantumTaskQueueInfo& WithPosition(const char* value) { SetPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the queue. </p>
     */
    inline const QueueName& GetQueue() const{ return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    inline void SetQueue(const QueueName& value) { m_queueHasBeenSet = true; m_queue = value; }
    inline void SetQueue(QueueName&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }
    inline QuantumTaskQueueInfo& WithQueue(const QueueName& value) { SetQueue(value); return *this;}
    inline QuantumTaskQueueInfo& WithQueue(QueueName&& value) { SetQueue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. Specifies the priority of the queue. Quantum tasks in a priority
     * queue are processed before the tasks in a normal queue.</p>
     */
    inline const QueuePriority& GetQueuePriority() const{ return m_queuePriority; }
    inline bool QueuePriorityHasBeenSet() const { return m_queuePriorityHasBeenSet; }
    inline void SetQueuePriority(const QueuePriority& value) { m_queuePriorityHasBeenSet = true; m_queuePriority = value; }
    inline void SetQueuePriority(QueuePriority&& value) { m_queuePriorityHasBeenSet = true; m_queuePriority = std::move(value); }
    inline QuantumTaskQueueInfo& WithQueuePriority(const QueuePriority& value) { SetQueuePriority(value); return *this;}
    inline QuantumTaskQueueInfo& WithQueuePriority(QueuePriority&& value) { SetQueuePriority(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_position;
    bool m_positionHasBeenSet = false;

    QueueName m_queue;
    bool m_queueHasBeenSet = false;

    QueuePriority m_queuePriority;
    bool m_queuePriorityHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
