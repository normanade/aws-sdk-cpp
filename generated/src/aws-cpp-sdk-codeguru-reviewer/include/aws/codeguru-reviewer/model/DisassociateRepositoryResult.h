﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/RepositoryAssociation.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CodeGuruReviewer
{
namespace Model
{
  class DisassociateRepositoryResult
  {
  public:
    AWS_CODEGURUREVIEWER_API DisassociateRepositoryResult();
    AWS_CODEGURUREVIEWER_API DisassociateRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API DisassociateRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the disassociated repository.</p>
     */
    inline const RepositoryAssociation& GetRepositoryAssociation() const{ return m_repositoryAssociation; }
    inline void SetRepositoryAssociation(const RepositoryAssociation& value) { m_repositoryAssociation = value; }
    inline void SetRepositoryAssociation(RepositoryAssociation&& value) { m_repositoryAssociation = std::move(value); }
    inline DisassociateRepositoryResult& WithRepositoryAssociation(const RepositoryAssociation& value) { SetRepositoryAssociation(value); return *this;}
    inline DisassociateRepositoryResult& WithRepositoryAssociation(RepositoryAssociation&& value) { SetRepositoryAssociation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs used to tag an associated repository. A tag is a
     * custom attribute label with two parts:</p> <ul> <li> <p>A <i>tag key</i> (for
     * example, <code>CostCenter</code>, <code>Environment</code>,
     * <code>Project</code>, or <code>Secret</code>). Tag keys are case sensitive.</p>
     * </li> <li> <p>An optional field known as a <i>tag value</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). Omitting
     * the tag value is the same as using an empty string. Like tag keys, tag values
     * are case sensitive.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DisassociateRepositoryResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DisassociateRepositoryResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DisassociateRepositoryResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DisassociateRepositoryResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DisassociateRepositoryResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DisassociateRepositoryResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DisassociateRepositoryResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DisassociateRepositoryResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DisassociateRepositoryResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DisassociateRepositoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DisassociateRepositoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DisassociateRepositoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RepositoryAssociation m_repositoryAssociation;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
