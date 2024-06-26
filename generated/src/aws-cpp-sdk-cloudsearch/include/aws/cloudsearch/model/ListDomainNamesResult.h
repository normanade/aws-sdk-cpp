﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudSearch
{
namespace Model
{
  /**
   * <p>The result of a <code>ListDomainNames</code> request. Contains a list of the
   * domains owned by an account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/ListDomainNamesResponse">AWS
   * API Reference</a></p>
   */
  class ListDomainNamesResult
  {
  public:
    AWS_CLOUDSEARCH_API ListDomainNamesResult();
    AWS_CLOUDSEARCH_API ListDomainNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API ListDomainNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The names of the search domains owned by an account.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDomainNames() const{ return m_domainNames; }
    inline void SetDomainNames(const Aws::Map<Aws::String, Aws::String>& value) { m_domainNames = value; }
    inline void SetDomainNames(Aws::Map<Aws::String, Aws::String>&& value) { m_domainNames = std::move(value); }
    inline ListDomainNamesResult& WithDomainNames(const Aws::Map<Aws::String, Aws::String>& value) { SetDomainNames(value); return *this;}
    inline ListDomainNamesResult& WithDomainNames(Aws::Map<Aws::String, Aws::String>&& value) { SetDomainNames(std::move(value)); return *this;}
    inline ListDomainNamesResult& AddDomainNames(const Aws::String& key, const Aws::String& value) { m_domainNames.emplace(key, value); return *this; }
    inline ListDomainNamesResult& AddDomainNames(Aws::String&& key, const Aws::String& value) { m_domainNames.emplace(std::move(key), value); return *this; }
    inline ListDomainNamesResult& AddDomainNames(const Aws::String& key, Aws::String&& value) { m_domainNames.emplace(key, std::move(value)); return *this; }
    inline ListDomainNamesResult& AddDomainNames(Aws::String&& key, Aws::String&& value) { m_domainNames.emplace(std::move(key), std::move(value)); return *this; }
    inline ListDomainNamesResult& AddDomainNames(const char* key, Aws::String&& value) { m_domainNames.emplace(key, std::move(value)); return *this; }
    inline ListDomainNamesResult& AddDomainNames(Aws::String&& key, const char* value) { m_domainNames.emplace(std::move(key), value); return *this; }
    inline ListDomainNamesResult& AddDomainNames(const char* key, const char* value) { m_domainNames.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListDomainNamesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListDomainNamesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_domainNames;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
