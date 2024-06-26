﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about a specific Map Run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/MapRunListItem">AWS
   * API Reference</a></p>
   */
  class MapRunListItem
  {
  public:
    AWS_SFN_API MapRunListItem();
    AWS_SFN_API MapRunListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API MapRunListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>executionArn</code> of the execution from which the Map Run was
     * started.</p>
     */
    inline const Aws::String& GetExecutionArn() const{ return m_executionArn; }
    inline bool ExecutionArnHasBeenSet() const { return m_executionArnHasBeenSet; }
    inline void SetExecutionArn(const Aws::String& value) { m_executionArnHasBeenSet = true; m_executionArn = value; }
    inline void SetExecutionArn(Aws::String&& value) { m_executionArnHasBeenSet = true; m_executionArn = std::move(value); }
    inline void SetExecutionArn(const char* value) { m_executionArnHasBeenSet = true; m_executionArn.assign(value); }
    inline MapRunListItem& WithExecutionArn(const Aws::String& value) { SetExecutionArn(value); return *this;}
    inline MapRunListItem& WithExecutionArn(Aws::String&& value) { SetExecutionArn(std::move(value)); return *this;}
    inline MapRunListItem& WithExecutionArn(const char* value) { SetExecutionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Map Run.</p>
     */
    inline const Aws::String& GetMapRunArn() const{ return m_mapRunArn; }
    inline bool MapRunArnHasBeenSet() const { return m_mapRunArnHasBeenSet; }
    inline void SetMapRunArn(const Aws::String& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = value; }
    inline void SetMapRunArn(Aws::String&& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = std::move(value); }
    inline void SetMapRunArn(const char* value) { m_mapRunArnHasBeenSet = true; m_mapRunArn.assign(value); }
    inline MapRunListItem& WithMapRunArn(const Aws::String& value) { SetMapRunArn(value); return *this;}
    inline MapRunListItem& WithMapRunArn(Aws::String&& value) { SetMapRunArn(std::move(value)); return *this;}
    inline MapRunListItem& WithMapRunArn(const char* value) { SetMapRunArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the executed state machine.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = value; }
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::move(value); }
    inline void SetStateMachineArn(const char* value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn.assign(value); }
    inline MapRunListItem& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}
    inline MapRunListItem& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}
    inline MapRunListItem& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the Map Run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline MapRunListItem& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline MapRunListItem& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the Map Run stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopDate() const{ return m_stopDate; }
    inline bool StopDateHasBeenSet() const { return m_stopDateHasBeenSet; }
    inline void SetStopDate(const Aws::Utils::DateTime& value) { m_stopDateHasBeenSet = true; m_stopDate = value; }
    inline void SetStopDate(Aws::Utils::DateTime&& value) { m_stopDateHasBeenSet = true; m_stopDate = std::move(value); }
    inline MapRunListItem& WithStopDate(const Aws::Utils::DateTime& value) { SetStopDate(value); return *this;}
    inline MapRunListItem& WithStopDate(Aws::Utils::DateTime&& value) { SetStopDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet = false;

    Aws::String m_mapRunArn;
    bool m_mapRunArnHasBeenSet = false;

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_stopDate;
    bool m_stopDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
