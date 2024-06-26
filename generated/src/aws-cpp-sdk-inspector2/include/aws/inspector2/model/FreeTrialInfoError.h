﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/FreeTrialInfoErrorCode.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Information about an error received while accessing free trail data for an
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/FreeTrialInfoError">AWS
   * API Reference</a></p>
   */
  class FreeTrialInfoError
  {
  public:
    AWS_INSPECTOR2_API FreeTrialInfoError();
    AWS_INSPECTOR2_API FreeTrialInfoError(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API FreeTrialInfoError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account associated with the Amazon Inspector free trial information.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline FreeTrialInfoError& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline FreeTrialInfoError& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline FreeTrialInfoError& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code.</p>
     */
    inline const FreeTrialInfoErrorCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const FreeTrialInfoErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(FreeTrialInfoErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline FreeTrialInfoError& WithCode(const FreeTrialInfoErrorCode& value) { SetCode(value); return *this;}
    inline FreeTrialInfoError& WithCode(FreeTrialInfoErrorCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message returned.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline FreeTrialInfoError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline FreeTrialInfoError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline FreeTrialInfoError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    FreeTrialInfoErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
