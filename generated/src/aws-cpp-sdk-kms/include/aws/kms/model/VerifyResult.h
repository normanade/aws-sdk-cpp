﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/SigningAlgorithmSpec.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{
  class VerifyResult
  {
  public:
    AWS_KMS_API VerifyResult();
    AWS_KMS_API VerifyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API VerifyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to verify the signature.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }
    inline VerifyResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline VerifyResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline VerifyResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether the signature was verified. A value of
     * <code>True</code> indicates that the <code>Signature</code> was produced by
     * signing the <code>Message</code> with the specified <code>KeyID</code> and
     * <code>SigningAlgorithm.</code> If the signature is not verified, the
     * <code>Verify</code> operation fails with a
     * <code>KMSInvalidSignatureException</code> exception. </p>
     */
    inline bool GetSignatureValid() const{ return m_signatureValid; }
    inline void SetSignatureValid(bool value) { m_signatureValid = value; }
    inline VerifyResult& WithSignatureValid(bool value) { SetSignatureValid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signing algorithm that was used to verify the signature.</p>
     */
    inline const SigningAlgorithmSpec& GetSigningAlgorithm() const{ return m_signingAlgorithm; }
    inline void SetSigningAlgorithm(const SigningAlgorithmSpec& value) { m_signingAlgorithm = value; }
    inline void SetSigningAlgorithm(SigningAlgorithmSpec&& value) { m_signingAlgorithm = std::move(value); }
    inline VerifyResult& WithSigningAlgorithm(const SigningAlgorithmSpec& value) { SetSigningAlgorithm(value); return *this;}
    inline VerifyResult& WithSigningAlgorithm(SigningAlgorithmSpec&& value) { SetSigningAlgorithm(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline VerifyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline VerifyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline VerifyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;

    bool m_signatureValid;

    SigningAlgorithmSpec m_signingAlgorithm;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
