﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/model/Prompt.h>
#include <aws/lex-models/model/Statement.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>A prompt for additional activity after an intent is fulfilled. For example,
   * after the <code>OrderPizza</code> intent is fulfilled, you might prompt the user
   * to find out whether the user wants to order drinks.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/FollowUpPrompt">AWS
   * API Reference</a></p>
   */
  class FollowUpPrompt
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API FollowUpPrompt();
    AWS_LEXMODELBUILDINGSERVICE_API FollowUpPrompt(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API FollowUpPrompt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Prompts for information from the user. </p>
     */
    inline const Prompt& GetPrompt() const{ return m_prompt; }
    inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }
    inline void SetPrompt(const Prompt& value) { m_promptHasBeenSet = true; m_prompt = value; }
    inline void SetPrompt(Prompt&& value) { m_promptHasBeenSet = true; m_prompt = std::move(value); }
    inline FollowUpPrompt& WithPrompt(const Prompt& value) { SetPrompt(value); return *this;}
    inline FollowUpPrompt& WithPrompt(Prompt&& value) { SetPrompt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the user answers "no" to the question defined in the <code>prompt</code>
     * field, Amazon Lex responds with this statement to acknowledge that the intent
     * was canceled. </p>
     */
    inline const Statement& GetRejectionStatement() const{ return m_rejectionStatement; }
    inline bool RejectionStatementHasBeenSet() const { return m_rejectionStatementHasBeenSet; }
    inline void SetRejectionStatement(const Statement& value) { m_rejectionStatementHasBeenSet = true; m_rejectionStatement = value; }
    inline void SetRejectionStatement(Statement&& value) { m_rejectionStatementHasBeenSet = true; m_rejectionStatement = std::move(value); }
    inline FollowUpPrompt& WithRejectionStatement(const Statement& value) { SetRejectionStatement(value); return *this;}
    inline FollowUpPrompt& WithRejectionStatement(Statement&& value) { SetRejectionStatement(std::move(value)); return *this;}
    ///@}
  private:

    Prompt m_prompt;
    bool m_promptHasBeenSet = false;

    Statement m_rejectionStatement;
    bool m_rejectionStatementHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
