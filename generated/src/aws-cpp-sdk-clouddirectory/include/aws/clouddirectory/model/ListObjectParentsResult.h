﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectIdentifierAndLinkNameTuple.h>
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
namespace CloudDirectory
{
namespace Model
{
  class ListObjectParentsResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListObjectParentsResult();
    AWS_CLOUDDIRECTORY_API ListObjectParentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListObjectParentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParents() const{ return m_parents; }
    inline void SetParents(const Aws::Map<Aws::String, Aws::String>& value) { m_parents = value; }
    inline void SetParents(Aws::Map<Aws::String, Aws::String>&& value) { m_parents = std::move(value); }
    inline ListObjectParentsResult& WithParents(const Aws::Map<Aws::String, Aws::String>& value) { SetParents(value); return *this;}
    inline ListObjectParentsResult& WithParents(Aws::Map<Aws::String, Aws::String>&& value) { SetParents(std::move(value)); return *this;}
    inline ListObjectParentsResult& AddParents(const Aws::String& key, const Aws::String& value) { m_parents.emplace(key, value); return *this; }
    inline ListObjectParentsResult& AddParents(Aws::String&& key, const Aws::String& value) { m_parents.emplace(std::move(key), value); return *this; }
    inline ListObjectParentsResult& AddParents(const Aws::String& key, Aws::String&& value) { m_parents.emplace(key, std::move(value)); return *this; }
    inline ListObjectParentsResult& AddParents(Aws::String&& key, Aws::String&& value) { m_parents.emplace(std::move(key), std::move(value)); return *this; }
    inline ListObjectParentsResult& AddParents(const char* key, Aws::String&& value) { m_parents.emplace(key, std::move(value)); return *this; }
    inline ListObjectParentsResult& AddParents(Aws::String&& key, const char* value) { m_parents.emplace(std::move(key), value); return *this; }
    inline ListObjectParentsResult& AddParents(const char* key, const char* value) { m_parents.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListObjectParentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListObjectParentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListObjectParentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline const Aws::Vector<ObjectIdentifierAndLinkNameTuple>& GetParentLinks() const{ return m_parentLinks; }
    inline void SetParentLinks(const Aws::Vector<ObjectIdentifierAndLinkNameTuple>& value) { m_parentLinks = value; }
    inline void SetParentLinks(Aws::Vector<ObjectIdentifierAndLinkNameTuple>&& value) { m_parentLinks = std::move(value); }
    inline ListObjectParentsResult& WithParentLinks(const Aws::Vector<ObjectIdentifierAndLinkNameTuple>& value) { SetParentLinks(value); return *this;}
    inline ListObjectParentsResult& WithParentLinks(Aws::Vector<ObjectIdentifierAndLinkNameTuple>&& value) { SetParentLinks(std::move(value)); return *this;}
    inline ListObjectParentsResult& AddParentLinks(const ObjectIdentifierAndLinkNameTuple& value) { m_parentLinks.push_back(value); return *this; }
    inline ListObjectParentsResult& AddParentLinks(ObjectIdentifierAndLinkNameTuple&& value) { m_parentLinks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListObjectParentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListObjectParentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListObjectParentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_parents;

    Aws::String m_nextToken;

    Aws::Vector<ObjectIdentifierAndLinkNameTuple> m_parentLinks;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
