﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/ManagedRuleGroupVersion.h>
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
namespace WAFV2
{
namespace Model
{
  class ListAvailableManagedRuleGroupVersionsResult
  {
  public:
    AWS_WAFV2_API ListAvailableManagedRuleGroupVersionsResult();
    AWS_WAFV2_API ListAvailableManagedRuleGroupVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListAvailableManagedRuleGroupVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline ListAvailableManagedRuleGroupVersionsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListAvailableManagedRuleGroupVersionsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListAvailableManagedRuleGroupVersionsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The versions that are currently available for the specified managed rule
     * group. If you specified a <code>Limit</code> in your request, this might not be
     * the full list. </p>
     */
    inline const Aws::Vector<ManagedRuleGroupVersion>& GetVersions() const{ return m_versions; }
    inline void SetVersions(const Aws::Vector<ManagedRuleGroupVersion>& value) { m_versions = value; }
    inline void SetVersions(Aws::Vector<ManagedRuleGroupVersion>&& value) { m_versions = std::move(value); }
    inline ListAvailableManagedRuleGroupVersionsResult& WithVersions(const Aws::Vector<ManagedRuleGroupVersion>& value) { SetVersions(value); return *this;}
    inline ListAvailableManagedRuleGroupVersionsResult& WithVersions(Aws::Vector<ManagedRuleGroupVersion>&& value) { SetVersions(std::move(value)); return *this;}
    inline ListAvailableManagedRuleGroupVersionsResult& AddVersions(const ManagedRuleGroupVersion& value) { m_versions.push_back(value); return *this; }
    inline ListAvailableManagedRuleGroupVersionsResult& AddVersions(ManagedRuleGroupVersion&& value) { m_versions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the version that's currently set as the default. </p>
     */
    inline const Aws::String& GetCurrentDefaultVersion() const{ return m_currentDefaultVersion; }
    inline void SetCurrentDefaultVersion(const Aws::String& value) { m_currentDefaultVersion = value; }
    inline void SetCurrentDefaultVersion(Aws::String&& value) { m_currentDefaultVersion = std::move(value); }
    inline void SetCurrentDefaultVersion(const char* value) { m_currentDefaultVersion.assign(value); }
    inline ListAvailableManagedRuleGroupVersionsResult& WithCurrentDefaultVersion(const Aws::String& value) { SetCurrentDefaultVersion(value); return *this;}
    inline ListAvailableManagedRuleGroupVersionsResult& WithCurrentDefaultVersion(Aws::String&& value) { SetCurrentDefaultVersion(std::move(value)); return *this;}
    inline ListAvailableManagedRuleGroupVersionsResult& WithCurrentDefaultVersion(const char* value) { SetCurrentDefaultVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAvailableManagedRuleGroupVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAvailableManagedRuleGroupVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAvailableManagedRuleGroupVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;

    Aws::Vector<ManagedRuleGroupVersion> m_versions;

    Aws::String m_currentDefaultVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
