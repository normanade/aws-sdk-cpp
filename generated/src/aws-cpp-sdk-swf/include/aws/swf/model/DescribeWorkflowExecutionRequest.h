﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/WorkflowExecution.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class DescribeWorkflowExecutionRequest : public SWFRequest
  {
  public:
    AWS_SWF_API DescribeWorkflowExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorkflowExecution"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain containing the workflow execution.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline DescribeWorkflowExecutionRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline DescribeWorkflowExecutionRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline DescribeWorkflowExecutionRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow execution to describe.</p>
     */
    inline const WorkflowExecution& GetExecution() const{ return m_execution; }
    inline bool ExecutionHasBeenSet() const { return m_executionHasBeenSet; }
    inline void SetExecution(const WorkflowExecution& value) { m_executionHasBeenSet = true; m_execution = value; }
    inline void SetExecution(WorkflowExecution&& value) { m_executionHasBeenSet = true; m_execution = std::move(value); }
    inline DescribeWorkflowExecutionRequest& WithExecution(const WorkflowExecution& value) { SetExecution(value); return *this;}
    inline DescribeWorkflowExecutionRequest& WithExecution(WorkflowExecution&& value) { SetExecution(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    WorkflowExecution m_execution;
    bool m_executionHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
