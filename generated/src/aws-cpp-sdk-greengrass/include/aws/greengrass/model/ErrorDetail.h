﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Details about the error.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ErrorDetail">AWS
   * API Reference</a></p>
   */
  class ErrorDetail
  {
  public:
    AWS_GREENGRASS_API ErrorDetail();
    AWS_GREENGRASS_API ErrorDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API ErrorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A detailed error code.
     */
    inline const Aws::String& GetDetailedErrorCode() const{ return m_detailedErrorCode; }
    inline bool DetailedErrorCodeHasBeenSet() const { return m_detailedErrorCodeHasBeenSet; }
    inline void SetDetailedErrorCode(const Aws::String& value) { m_detailedErrorCodeHasBeenSet = true; m_detailedErrorCode = value; }
    inline void SetDetailedErrorCode(Aws::String&& value) { m_detailedErrorCodeHasBeenSet = true; m_detailedErrorCode = std::move(value); }
    inline void SetDetailedErrorCode(const char* value) { m_detailedErrorCodeHasBeenSet = true; m_detailedErrorCode.assign(value); }
    inline ErrorDetail& WithDetailedErrorCode(const Aws::String& value) { SetDetailedErrorCode(value); return *this;}
    inline ErrorDetail& WithDetailedErrorCode(Aws::String&& value) { SetDetailedErrorCode(std::move(value)); return *this;}
    inline ErrorDetail& WithDetailedErrorCode(const char* value) { SetDetailedErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * A detailed error message.
     */
    inline const Aws::String& GetDetailedErrorMessage() const{ return m_detailedErrorMessage; }
    inline bool DetailedErrorMessageHasBeenSet() const { return m_detailedErrorMessageHasBeenSet; }
    inline void SetDetailedErrorMessage(const Aws::String& value) { m_detailedErrorMessageHasBeenSet = true; m_detailedErrorMessage = value; }
    inline void SetDetailedErrorMessage(Aws::String&& value) { m_detailedErrorMessageHasBeenSet = true; m_detailedErrorMessage = std::move(value); }
    inline void SetDetailedErrorMessage(const char* value) { m_detailedErrorMessageHasBeenSet = true; m_detailedErrorMessage.assign(value); }
    inline ErrorDetail& WithDetailedErrorMessage(const Aws::String& value) { SetDetailedErrorMessage(value); return *this;}
    inline ErrorDetail& WithDetailedErrorMessage(Aws::String&& value) { SetDetailedErrorMessage(std::move(value)); return *this;}
    inline ErrorDetail& WithDetailedErrorMessage(const char* value) { SetDetailedErrorMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_detailedErrorCode;
    bool m_detailedErrorCodeHasBeenSet = false;

    Aws::String m_detailedErrorMessage;
    bool m_detailedErrorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
