﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeBuild
{
namespace Model
{
  class ListReportGroupsResult
  {
  public:
    AWS_CODEBUILD_API ListReportGroupsResult();
    AWS_CODEBUILD_API ListReportGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API ListReportGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListReportGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReportGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReportGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of ARNs for the report groups in the current Amazon Web Services
     * account. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReportGroups() const{ return m_reportGroups; }
    inline void SetReportGroups(const Aws::Vector<Aws::String>& value) { m_reportGroups = value; }
    inline void SetReportGroups(Aws::Vector<Aws::String>&& value) { m_reportGroups = std::move(value); }
    inline ListReportGroupsResult& WithReportGroups(const Aws::Vector<Aws::String>& value) { SetReportGroups(value); return *this;}
    inline ListReportGroupsResult& WithReportGroups(Aws::Vector<Aws::String>&& value) { SetReportGroups(std::move(value)); return *this;}
    inline ListReportGroupsResult& AddReportGroups(const Aws::String& value) { m_reportGroups.push_back(value); return *this; }
    inline ListReportGroupsResult& AddReportGroups(Aws::String&& value) { m_reportGroups.push_back(std::move(value)); return *this; }
    inline ListReportGroupsResult& AddReportGroups(const char* value) { m_reportGroups.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListReportGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListReportGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListReportGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_reportGroups;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
