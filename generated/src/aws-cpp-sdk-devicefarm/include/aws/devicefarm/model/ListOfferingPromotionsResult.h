﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/OfferingPromotion.h>
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
namespace DeviceFarm
{
namespace Model
{
  class ListOfferingPromotionsResult
  {
  public:
    AWS_DEVICEFARM_API ListOfferingPromotionsResult();
    AWS_DEVICEFARM_API ListOfferingPromotionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListOfferingPromotionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the offering promotions.</p>
     */
    inline const Aws::Vector<OfferingPromotion>& GetOfferingPromotions() const{ return m_offeringPromotions; }
    inline void SetOfferingPromotions(const Aws::Vector<OfferingPromotion>& value) { m_offeringPromotions = value; }
    inline void SetOfferingPromotions(Aws::Vector<OfferingPromotion>&& value) { m_offeringPromotions = std::move(value); }
    inline ListOfferingPromotionsResult& WithOfferingPromotions(const Aws::Vector<OfferingPromotion>& value) { SetOfferingPromotions(value); return *this;}
    inline ListOfferingPromotionsResult& WithOfferingPromotions(Aws::Vector<OfferingPromotion>&& value) { SetOfferingPromotions(std::move(value)); return *this;}
    inline ListOfferingPromotionsResult& AddOfferingPromotions(const OfferingPromotion& value) { m_offeringPromotions.push_back(value); return *this; }
    inline ListOfferingPromotionsResult& AddOfferingPromotions(OfferingPromotion&& value) { m_offeringPromotions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier to be used in the next call to this operation, to return the
     * next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListOfferingPromotionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOfferingPromotionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOfferingPromotionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListOfferingPromotionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListOfferingPromotionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListOfferingPromotionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<OfferingPromotion> m_offeringPromotions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
