﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/BonusPayment.h>
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
namespace MTurk
{
namespace Model
{
  class ListBonusPaymentsResult
  {
  public:
    AWS_MTURK_API ListBonusPaymentsResult();
    AWS_MTURK_API ListBonusPaymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API ListBonusPaymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of bonus payments on this page in the filtered results list,
     * equivalent to the number of bonus payments being returned by this call. </p>
     */
    inline int GetNumResults() const{ return m_numResults; }
    inline void SetNumResults(int value) { m_numResults = value; }
    inline ListBonusPaymentsResult& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBonusPaymentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBonusPaymentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBonusPaymentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A successful request to the ListBonusPayments operation returns a list of
     * BonusPayment objects. </p>
     */
    inline const Aws::Vector<BonusPayment>& GetBonusPayments() const{ return m_bonusPayments; }
    inline void SetBonusPayments(const Aws::Vector<BonusPayment>& value) { m_bonusPayments = value; }
    inline void SetBonusPayments(Aws::Vector<BonusPayment>&& value) { m_bonusPayments = std::move(value); }
    inline ListBonusPaymentsResult& WithBonusPayments(const Aws::Vector<BonusPayment>& value) { SetBonusPayments(value); return *this;}
    inline ListBonusPaymentsResult& WithBonusPayments(Aws::Vector<BonusPayment>&& value) { SetBonusPayments(std::move(value)); return *this;}
    inline ListBonusPaymentsResult& AddBonusPayments(const BonusPayment& value) { m_bonusPayments.push_back(value); return *this; }
    inline ListBonusPaymentsResult& AddBonusPayments(BonusPayment&& value) { m_bonusPayments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBonusPaymentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBonusPaymentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBonusPaymentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_numResults;

    Aws::String m_nextToken;

    Aws::Vector<BonusPayment> m_bonusPayments;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
