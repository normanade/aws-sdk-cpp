﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/PropertyValueHistory.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class GetPropertyValueHistoryResult
  {
  public:
    AWS_IOTTWINMAKER_API GetPropertyValueHistoryResult();
    AWS_IOTTWINMAKER_API GetPropertyValueHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API GetPropertyValueHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Vector<PropertyValueHistory>& GetPropertyValues() const{ return m_propertyValues; }
    inline void SetPropertyValues(const Aws::Vector<PropertyValueHistory>& value) { m_propertyValues = value; }
    inline void SetPropertyValues(Aws::Vector<PropertyValueHistory>&& value) { m_propertyValues = std::move(value); }
    inline GetPropertyValueHistoryResult& WithPropertyValues(const Aws::Vector<PropertyValueHistory>& value) { SetPropertyValues(value); return *this;}
    inline GetPropertyValueHistoryResult& WithPropertyValues(Aws::Vector<PropertyValueHistory>&& value) { SetPropertyValues(std::move(value)); return *this;}
    inline GetPropertyValueHistoryResult& AddPropertyValues(const PropertyValueHistory& value) { m_propertyValues.push_back(value); return *this; }
    inline GetPropertyValueHistoryResult& AddPropertyValues(PropertyValueHistory&& value) { m_propertyValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetPropertyValueHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetPropertyValueHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetPropertyValueHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPropertyValueHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPropertyValueHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPropertyValueHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PropertyValueHistory> m_propertyValues;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
