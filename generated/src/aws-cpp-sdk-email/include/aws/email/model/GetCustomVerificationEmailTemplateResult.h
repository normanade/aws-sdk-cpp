﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{
  /**
   * <p>The content of the custom verification email template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetCustomVerificationEmailTemplateResponse">AWS
   * API Reference</a></p>
   */
  class GetCustomVerificationEmailTemplateResult
  {
  public:
    AWS_SES_API GetCustomVerificationEmailTemplateResult();
    AWS_SES_API GetCustomVerificationEmailTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API GetCustomVerificationEmailTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline void SetTemplateName(const Aws::String& value) { m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateName.assign(value); }
    inline GetCustomVerificationEmailTemplateResult& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline GetCustomVerificationEmailTemplateResult& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline GetCustomVerificationEmailTemplateResult& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const{ return m_fromEmailAddress; }
    inline void SetFromEmailAddress(const Aws::String& value) { m_fromEmailAddress = value; }
    inline void SetFromEmailAddress(Aws::String&& value) { m_fromEmailAddress = std::move(value); }
    inline void SetFromEmailAddress(const char* value) { m_fromEmailAddress.assign(value); }
    inline GetCustomVerificationEmailTemplateResult& WithFromEmailAddress(const Aws::String& value) { SetFromEmailAddress(value); return *this;}
    inline GetCustomVerificationEmailTemplateResult& WithFromEmailAddress(Aws::String&& value) { SetFromEmailAddress(std::move(value)); return *this;}
    inline GetCustomVerificationEmailTemplateResult& WithFromEmailAddress(const char* value) { SetFromEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline const Aws::String& GetTemplateSubject() const{ return m_templateSubject; }
    inline void SetTemplateSubject(const Aws::String& value) { m_templateSubject = value; }
    inline void SetTemplateSubject(Aws::String&& value) { m_templateSubject = std::move(value); }
    inline void SetTemplateSubject(const char* value) { m_templateSubject.assign(value); }
    inline GetCustomVerificationEmailTemplateResult& WithTemplateSubject(const Aws::String& value) { SetTemplateSubject(value); return *this;}
    inline GetCustomVerificationEmailTemplateResult& WithTemplateSubject(Aws::String&& value) { SetTemplateSubject(std::move(value)); return *this;}
    inline GetCustomVerificationEmailTemplateResult& WithTemplateSubject(const char* value) { SetTemplateSubject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the custom verification email.</p>
     */
    inline const Aws::String& GetTemplateContent() const{ return m_templateContent; }
    inline void SetTemplateContent(const Aws::String& value) { m_templateContent = value; }
    inline void SetTemplateContent(Aws::String&& value) { m_templateContent = std::move(value); }
    inline void SetTemplateContent(const char* value) { m_templateContent.assign(value); }
    inline GetCustomVerificationEmailTemplateResult& WithTemplateContent(const Aws::String& value) { SetTemplateContent(value); return *this;}
    inline GetCustomVerificationEmailTemplateResult& WithTemplateContent(Aws::String&& value) { SetTemplateContent(std::move(value)); return *this;}
    inline GetCustomVerificationEmailTemplateResult& WithTemplateContent(const char* value) { SetTemplateContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline const Aws::String& GetSuccessRedirectionURL() const{ return m_successRedirectionURL; }
    inline void SetSuccessRedirectionURL(const Aws::String& value) { m_successRedirectionURL = value; }
    inline void SetSuccessRedirectionURL(Aws::String&& value) { m_successRedirectionURL = std::move(value); }
    inline void SetSuccessRedirectionURL(const char* value) { m_successRedirectionURL.assign(value); }
    inline GetCustomVerificationEmailTemplateResult& WithSuccessRedirectionURL(const Aws::String& value) { SetSuccessRedirectionURL(value); return *this;}
    inline GetCustomVerificationEmailTemplateResult& WithSuccessRedirectionURL(Aws::String&& value) { SetSuccessRedirectionURL(std::move(value)); return *this;}
    inline GetCustomVerificationEmailTemplateResult& WithSuccessRedirectionURL(const char* value) { SetSuccessRedirectionURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline const Aws::String& GetFailureRedirectionURL() const{ return m_failureRedirectionURL; }
    inline void SetFailureRedirectionURL(const Aws::String& value) { m_failureRedirectionURL = value; }
    inline void SetFailureRedirectionURL(Aws::String&& value) { m_failureRedirectionURL = std::move(value); }
    inline void SetFailureRedirectionURL(const char* value) { m_failureRedirectionURL.assign(value); }
    inline GetCustomVerificationEmailTemplateResult& WithFailureRedirectionURL(const Aws::String& value) { SetFailureRedirectionURL(value); return *this;}
    inline GetCustomVerificationEmailTemplateResult& WithFailureRedirectionURL(Aws::String&& value) { SetFailureRedirectionURL(std::move(value)); return *this;}
    inline GetCustomVerificationEmailTemplateResult& WithFailureRedirectionURL(const char* value) { SetFailureRedirectionURL(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetCustomVerificationEmailTemplateResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetCustomVerificationEmailTemplateResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;

    Aws::String m_fromEmailAddress;

    Aws::String m_templateSubject;

    Aws::String m_templateContent;

    Aws::String m_successRedirectionURL;

    Aws::String m_failureRedirectionURL;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
