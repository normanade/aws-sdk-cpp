﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/Limits.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for the parameters received from the
   * <code>DescribeInstanceTypeLimits</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeInstanceTypeLimitsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeInstanceTypeLimitsResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeInstanceTypeLimitsResult();
    AWS_OPENSEARCHSERVICE_API DescribeInstanceTypeLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeInstanceTypeLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Map that contains all applicable instance type limits.<code>data</code>
     * refers to data nodes.<code>master</code> refers to dedicated master nodes.</p>
     */
    inline const Aws::Map<Aws::String, Limits>& GetLimitsByRole() const{ return m_limitsByRole; }
    inline void SetLimitsByRole(const Aws::Map<Aws::String, Limits>& value) { m_limitsByRole = value; }
    inline void SetLimitsByRole(Aws::Map<Aws::String, Limits>&& value) { m_limitsByRole = std::move(value); }
    inline DescribeInstanceTypeLimitsResult& WithLimitsByRole(const Aws::Map<Aws::String, Limits>& value) { SetLimitsByRole(value); return *this;}
    inline DescribeInstanceTypeLimitsResult& WithLimitsByRole(Aws::Map<Aws::String, Limits>&& value) { SetLimitsByRole(std::move(value)); return *this;}
    inline DescribeInstanceTypeLimitsResult& AddLimitsByRole(const Aws::String& key, const Limits& value) { m_limitsByRole.emplace(key, value); return *this; }
    inline DescribeInstanceTypeLimitsResult& AddLimitsByRole(Aws::String&& key, const Limits& value) { m_limitsByRole.emplace(std::move(key), value); return *this; }
    inline DescribeInstanceTypeLimitsResult& AddLimitsByRole(const Aws::String& key, Limits&& value) { m_limitsByRole.emplace(key, std::move(value)); return *this; }
    inline DescribeInstanceTypeLimitsResult& AddLimitsByRole(Aws::String&& key, Limits&& value) { m_limitsByRole.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeInstanceTypeLimitsResult& AddLimitsByRole(const char* key, Limits&& value) { m_limitsByRole.emplace(key, std::move(value)); return *this; }
    inline DescribeInstanceTypeLimitsResult& AddLimitsByRole(const char* key, const Limits& value) { m_limitsByRole.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInstanceTypeLimitsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInstanceTypeLimitsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInstanceTypeLimitsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Limits> m_limitsByRole;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
