﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>This array is empty if the API operation was successful for all the rules
   * specified in the request. If the operation could not process one of the rules,
   * the following data is returned for each of those rules.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PartialFailure">AWS
   * API Reference</a></p>
   */
  class PartialFailure
  {
  public:
    AWS_CLOUDWATCH_API PartialFailure();
    AWS_CLOUDWATCH_API PartialFailure(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API PartialFailure& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The specified rule that could not be deleted.</p>
     */
    inline const Aws::String& GetFailureResource() const{ return m_failureResource; }
    inline bool FailureResourceHasBeenSet() const { return m_failureResourceHasBeenSet; }
    inline void SetFailureResource(const Aws::String& value) { m_failureResourceHasBeenSet = true; m_failureResource = value; }
    inline void SetFailureResource(Aws::String&& value) { m_failureResourceHasBeenSet = true; m_failureResource = std::move(value); }
    inline void SetFailureResource(const char* value) { m_failureResourceHasBeenSet = true; m_failureResource.assign(value); }
    inline PartialFailure& WithFailureResource(const Aws::String& value) { SetFailureResource(value); return *this;}
    inline PartialFailure& WithFailureResource(Aws::String&& value) { SetFailureResource(std::move(value)); return *this;}
    inline PartialFailure& WithFailureResource(const char* value) { SetFailureResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of error.</p>
     */
    inline const Aws::String& GetExceptionType() const{ return m_exceptionType; }
    inline bool ExceptionTypeHasBeenSet() const { return m_exceptionTypeHasBeenSet; }
    inline void SetExceptionType(const Aws::String& value) { m_exceptionTypeHasBeenSet = true; m_exceptionType = value; }
    inline void SetExceptionType(Aws::String&& value) { m_exceptionTypeHasBeenSet = true; m_exceptionType = std::move(value); }
    inline void SetExceptionType(const char* value) { m_exceptionTypeHasBeenSet = true; m_exceptionType.assign(value); }
    inline PartialFailure& WithExceptionType(const Aws::String& value) { SetExceptionType(value); return *this;}
    inline PartialFailure& WithExceptionType(Aws::String&& value) { SetExceptionType(std::move(value)); return *this;}
    inline PartialFailure& WithExceptionType(const char* value) { SetExceptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code of the error.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }
    inline PartialFailure& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}
    inline PartialFailure& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}
    inline PartialFailure& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the error.</p>
     */
    inline const Aws::String& GetFailureDescription() const{ return m_failureDescription; }
    inline bool FailureDescriptionHasBeenSet() const { return m_failureDescriptionHasBeenSet; }
    inline void SetFailureDescription(const Aws::String& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = value; }
    inline void SetFailureDescription(Aws::String&& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = std::move(value); }
    inline void SetFailureDescription(const char* value) { m_failureDescriptionHasBeenSet = true; m_failureDescription.assign(value); }
    inline PartialFailure& WithFailureDescription(const Aws::String& value) { SetFailureDescription(value); return *this;}
    inline PartialFailure& WithFailureDescription(Aws::String&& value) { SetFailureDescription(std::move(value)); return *this;}
    inline PartialFailure& WithFailureDescription(const char* value) { SetFailureDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_failureResource;
    bool m_failureResourceHasBeenSet = false;

    Aws::String m_exceptionType;
    bool m_exceptionTypeHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureDescription;
    bool m_failureDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
