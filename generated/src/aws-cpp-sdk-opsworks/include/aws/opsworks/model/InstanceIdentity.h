﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Contains a description of an Amazon EC2 instance from the Amazon EC2 metadata
   * service. For more information, see <a
   * href="https://docs.aws.amazon.com/sdkfornet/latest/apidocs/Index.html">Instance
   * Metadata and User Data</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/InstanceIdentity">AWS
   * API Reference</a></p>
   */
  class InstanceIdentity
  {
  public:
    AWS_OPSWORKS_API InstanceIdentity();
    AWS_OPSWORKS_API InstanceIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API InstanceIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A JSON document that contains the metadata.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }
    inline InstanceIdentity& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}
    inline InstanceIdentity& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}
    inline InstanceIdentity& WithDocument(const char* value) { SetDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A signature that can be used to verify the document's accuracy and
     * authenticity.</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }
    inline void SetSignature(const Aws::String& value) { m_signatureHasBeenSet = true; m_signature = value; }
    inline void SetSignature(Aws::String&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }
    inline void SetSignature(const char* value) { m_signatureHasBeenSet = true; m_signature.assign(value); }
    inline InstanceIdentity& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}
    inline InstanceIdentity& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}
    inline InstanceIdentity& WithSignature(const char* value) { SetSignature(value); return *this;}
    ///@}
  private:

    Aws::String m_document;
    bool m_documentHasBeenSet = false;

    Aws::String m_signature;
    bool m_signatureHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
