﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/FormSummary.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{
  class ListFormsResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ListFormsResult();
    AWS_AMPLIFYUIBUILDER_API ListFormsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API ListFormsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of forms for the Amplify app.</p>
     */
    inline const Aws::Vector<FormSummary>& GetEntities() const{ return m_entities; }
    inline void SetEntities(const Aws::Vector<FormSummary>& value) { m_entities = value; }
    inline void SetEntities(Aws::Vector<FormSummary>&& value) { m_entities = std::move(value); }
    inline ListFormsResult& WithEntities(const Aws::Vector<FormSummary>& value) { SetEntities(value); return *this;}
    inline ListFormsResult& WithEntities(Aws::Vector<FormSummary>&& value) { SetEntities(std::move(value)); return *this;}
    inline ListFormsResult& AddEntities(const FormSummary& value) { m_entities.push_back(value); return *this; }
    inline ListFormsResult& AddEntities(FormSummary&& value) { m_entities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFormsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFormsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFormsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFormsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFormsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFormsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FormSummary> m_entities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
