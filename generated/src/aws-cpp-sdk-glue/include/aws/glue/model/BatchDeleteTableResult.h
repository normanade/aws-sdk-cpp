﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableError.h>
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
namespace Glue
{
namespace Model
{
  class BatchDeleteTableResult
  {
  public:
    AWS_GLUE_API BatchDeleteTableResult();
    AWS_GLUE_API BatchDeleteTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchDeleteTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of errors encountered in attempting to delete the specified
     * tables.</p>
     */
    inline const Aws::Vector<TableError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<TableError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<TableError>&& value) { m_errors = std::move(value); }
    inline BatchDeleteTableResult& WithErrors(const Aws::Vector<TableError>& value) { SetErrors(value); return *this;}
    inline BatchDeleteTableResult& WithErrors(Aws::Vector<TableError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDeleteTableResult& AddErrors(const TableError& value) { m_errors.push_back(value); return *this; }
    inline BatchDeleteTableResult& AddErrors(TableError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteTableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteTableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteTableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TableError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
