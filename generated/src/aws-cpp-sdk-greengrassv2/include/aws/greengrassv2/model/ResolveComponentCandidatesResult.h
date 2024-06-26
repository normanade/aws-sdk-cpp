﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/ResolvedComponentVersion.h>
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
namespace GreengrassV2
{
namespace Model
{
  class ResolveComponentCandidatesResult
  {
  public:
    AWS_GREENGRASSV2_API ResolveComponentCandidatesResult();
    AWS_GREENGRASSV2_API ResolveComponentCandidatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ResolveComponentCandidatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of components that meet the requirements that you specify in the
     * request. This list includes each component's recipe that you can use to install
     * the component.</p>
     */
    inline const Aws::Vector<ResolvedComponentVersion>& GetResolvedComponentVersions() const{ return m_resolvedComponentVersions; }
    inline void SetResolvedComponentVersions(const Aws::Vector<ResolvedComponentVersion>& value) { m_resolvedComponentVersions = value; }
    inline void SetResolvedComponentVersions(Aws::Vector<ResolvedComponentVersion>&& value) { m_resolvedComponentVersions = std::move(value); }
    inline ResolveComponentCandidatesResult& WithResolvedComponentVersions(const Aws::Vector<ResolvedComponentVersion>& value) { SetResolvedComponentVersions(value); return *this;}
    inline ResolveComponentCandidatesResult& WithResolvedComponentVersions(Aws::Vector<ResolvedComponentVersion>&& value) { SetResolvedComponentVersions(std::move(value)); return *this;}
    inline ResolveComponentCandidatesResult& AddResolvedComponentVersions(const ResolvedComponentVersion& value) { m_resolvedComponentVersions.push_back(value); return *this; }
    inline ResolveComponentCandidatesResult& AddResolvedComponentVersions(ResolvedComponentVersion&& value) { m_resolvedComponentVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ResolveComponentCandidatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ResolveComponentCandidatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ResolveComponentCandidatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResolvedComponentVersion> m_resolvedComponentVersions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
