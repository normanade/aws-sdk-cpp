﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/BulkEmailEntryResult.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>The following data is returned in JSON format by the service.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendBulkEmailResponse">AWS
   * API Reference</a></p>
   */
  class SendBulkEmailResult
  {
  public:
    AWS_SESV2_API SendBulkEmailResult();
    AWS_SESV2_API SendBulkEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API SendBulkEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>One object per intended recipient. Check each response object and retry any
     * messages with a failure status.</p>
     */
    inline const Aws::Vector<BulkEmailEntryResult>& GetBulkEmailEntryResults() const{ return m_bulkEmailEntryResults; }
    inline void SetBulkEmailEntryResults(const Aws::Vector<BulkEmailEntryResult>& value) { m_bulkEmailEntryResults = value; }
    inline void SetBulkEmailEntryResults(Aws::Vector<BulkEmailEntryResult>&& value) { m_bulkEmailEntryResults = std::move(value); }
    inline SendBulkEmailResult& WithBulkEmailEntryResults(const Aws::Vector<BulkEmailEntryResult>& value) { SetBulkEmailEntryResults(value); return *this;}
    inline SendBulkEmailResult& WithBulkEmailEntryResults(Aws::Vector<BulkEmailEntryResult>&& value) { SetBulkEmailEntryResults(std::move(value)); return *this;}
    inline SendBulkEmailResult& AddBulkEmailEntryResults(const BulkEmailEntryResult& value) { m_bulkEmailEntryResults.push_back(value); return *this; }
    inline SendBulkEmailResult& AddBulkEmailEntryResults(BulkEmailEntryResult&& value) { m_bulkEmailEntryResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SendBulkEmailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SendBulkEmailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SendBulkEmailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BulkEmailEntryResult> m_bulkEmailEntryResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
