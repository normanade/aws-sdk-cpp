﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GenerateDataKeyResult
  {
  public:
    AWS_KMS_API GenerateDataKeyResult();
    AWS_KMS_API GenerateDataKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GenerateDataKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The encrypted copy of the data key. When you use the HTTP API or the Amazon
     * Web Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextBlob() const{ return m_ciphertextBlob; }
    inline void SetCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_ciphertextBlob = value; }
    inline void SetCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_ciphertextBlob = std::move(value); }
    inline GenerateDataKeyResult& WithCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetCiphertextBlob(value); return *this;}
    inline GenerateDataKeyResult& WithCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetCiphertextBlob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plaintext data key. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded. Use this
     * data key to encrypt your data outside of KMS. Then, remove it from memory as
     * soon as possible.</p> <p>If the response includes the
     * <code>CiphertextForRecipient</code> field, the <code>Plaintext</code> field is
     * null or empty.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPlaintext() const{ return m_plaintext; }
    inline void SetPlaintext(const Aws::Utils::CryptoBuffer& value) { m_plaintext = value; }
    inline void SetPlaintext(Aws::Utils::CryptoBuffer&& value) { m_plaintext = std::move(value); }
    inline GenerateDataKeyResult& WithPlaintext(const Aws::Utils::CryptoBuffer& value) { SetPlaintext(value); return *this;}
    inline GenerateDataKeyResult& WithPlaintext(Aws::Utils::CryptoBuffer&& value) { SetPlaintext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the data key.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }
    inline GenerateDataKeyResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline GenerateDataKeyResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline GenerateDataKeyResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plaintext data key encrypted with the public key from the Nitro enclave.
     * This ciphertext can be decrypted only by using a private key in the Nitro
     * enclave. </p> <p>This field is included in the response only when the
     * <code>Recipient</code> parameter in the request includes a valid attestation
     * document from an Amazon Web Services Nitro enclave. For information about the
     * interaction between KMS and Amazon Web Services Nitro Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextForRecipient() const{ return m_ciphertextForRecipient; }
    inline void SetCiphertextForRecipient(const Aws::Utils::ByteBuffer& value) { m_ciphertextForRecipient = value; }
    inline void SetCiphertextForRecipient(Aws::Utils::ByteBuffer&& value) { m_ciphertextForRecipient = std::move(value); }
    inline GenerateDataKeyResult& WithCiphertextForRecipient(const Aws::Utils::ByteBuffer& value) { SetCiphertextForRecipient(value); return *this;}
    inline GenerateDataKeyResult& WithCiphertextForRecipient(Aws::Utils::ByteBuffer&& value) { SetCiphertextForRecipient(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GenerateDataKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GenerateDataKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GenerateDataKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_ciphertextBlob;

    Aws::Utils::CryptoBuffer m_plaintext;

    Aws::String m_keyId;

    Aws::Utils::ByteBuffer m_ciphertextForRecipient;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
