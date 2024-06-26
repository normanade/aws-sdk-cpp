﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/IdentityDkimAttributes.h>
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
   * <p>Represents the status of Amazon SES Easy DKIM signing for an identity. For
   * domain identities, this response also contains the DKIM tokens that are required
   * for Easy DKIM signing, and whether Amazon SES successfully verified that these
   * tokens were published.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityDkimAttributesResponse">AWS
   * API Reference</a></p>
   */
  class GetIdentityDkimAttributesResult
  {
  public:
    AWS_SES_API GetIdentityDkimAttributesResult();
    AWS_SES_API GetIdentityDkimAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API GetIdentityDkimAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The DKIM attributes for an email address or a domain.</p>
     */
    inline const Aws::Map<Aws::String, IdentityDkimAttributes>& GetDkimAttributes() const{ return m_dkimAttributes; }
    inline void SetDkimAttributes(const Aws::Map<Aws::String, IdentityDkimAttributes>& value) { m_dkimAttributes = value; }
    inline void SetDkimAttributes(Aws::Map<Aws::String, IdentityDkimAttributes>&& value) { m_dkimAttributes = std::move(value); }
    inline GetIdentityDkimAttributesResult& WithDkimAttributes(const Aws::Map<Aws::String, IdentityDkimAttributes>& value) { SetDkimAttributes(value); return *this;}
    inline GetIdentityDkimAttributesResult& WithDkimAttributes(Aws::Map<Aws::String, IdentityDkimAttributes>&& value) { SetDkimAttributes(std::move(value)); return *this;}
    inline GetIdentityDkimAttributesResult& AddDkimAttributes(const Aws::String& key, const IdentityDkimAttributes& value) { m_dkimAttributes.emplace(key, value); return *this; }
    inline GetIdentityDkimAttributesResult& AddDkimAttributes(Aws::String&& key, const IdentityDkimAttributes& value) { m_dkimAttributes.emplace(std::move(key), value); return *this; }
    inline GetIdentityDkimAttributesResult& AddDkimAttributes(const Aws::String& key, IdentityDkimAttributes&& value) { m_dkimAttributes.emplace(key, std::move(value)); return *this; }
    inline GetIdentityDkimAttributesResult& AddDkimAttributes(Aws::String&& key, IdentityDkimAttributes&& value) { m_dkimAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline GetIdentityDkimAttributesResult& AddDkimAttributes(const char* key, IdentityDkimAttributes&& value) { m_dkimAttributes.emplace(key, std::move(value)); return *this; }
    inline GetIdentityDkimAttributesResult& AddDkimAttributes(const char* key, const IdentityDkimAttributes& value) { m_dkimAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetIdentityDkimAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetIdentityDkimAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, IdentityDkimAttributes> m_dkimAttributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
