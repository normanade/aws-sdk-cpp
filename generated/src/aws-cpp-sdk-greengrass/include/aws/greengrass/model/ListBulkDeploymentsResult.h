﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/BulkDeployment.h>
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
namespace Greengrass
{
namespace Model
{
  class ListBulkDeploymentsResult
  {
  public:
    AWS_GREENGRASS_API ListBulkDeploymentsResult();
    AWS_GREENGRASS_API ListBulkDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API ListBulkDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A list of bulk deployments.
     */
    inline const Aws::Vector<BulkDeployment>& GetBulkDeployments() const{ return m_bulkDeployments; }
    inline void SetBulkDeployments(const Aws::Vector<BulkDeployment>& value) { m_bulkDeployments = value; }
    inline void SetBulkDeployments(Aws::Vector<BulkDeployment>&& value) { m_bulkDeployments = std::move(value); }
    inline ListBulkDeploymentsResult& WithBulkDeployments(const Aws::Vector<BulkDeployment>& value) { SetBulkDeployments(value); return *this;}
    inline ListBulkDeploymentsResult& WithBulkDeployments(Aws::Vector<BulkDeployment>&& value) { SetBulkDeployments(std::move(value)); return *this;}
    inline ListBulkDeploymentsResult& AddBulkDeployments(const BulkDeployment& value) { m_bulkDeployments.push_back(value); return *this; }
    inline ListBulkDeploymentsResult& AddBulkDeployments(BulkDeployment&& value) { m_bulkDeployments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBulkDeploymentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBulkDeploymentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBulkDeploymentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBulkDeploymentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBulkDeploymentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBulkDeploymentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BulkDeployment> m_bulkDeployments;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
