﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/TableDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DynamoDB
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>DeleteTable</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteTableOutput">AWS
   * API Reference</a></p>
   */
  class DeleteTableResult
  {
  public:
    AWS_DYNAMODB_API DeleteTableResult();
    AWS_DYNAMODB_API DeleteTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DeleteTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the properties of a table.</p>
     */
    inline const TableDescription& GetTableDescription() const{ return m_tableDescription; }
    inline void SetTableDescription(const TableDescription& value) { m_tableDescription = value; }
    inline void SetTableDescription(TableDescription&& value) { m_tableDescription = std::move(value); }
    inline DeleteTableResult& WithTableDescription(const TableDescription& value) { SetTableDescription(value); return *this;}
    inline DeleteTableResult& WithTableDescription(TableDescription&& value) { SetTableDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteTableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteTableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteTableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TableDescription m_tableDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
