﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents a global secondary index to be deleted from an existing
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteGlobalSecondaryIndexAction">AWS
   * API Reference</a></p>
   */
  class DeleteGlobalSecondaryIndexAction
  {
  public:
    AWS_DYNAMODB_API DeleteGlobalSecondaryIndexAction();
    AWS_DYNAMODB_API DeleteGlobalSecondaryIndexAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API DeleteGlobalSecondaryIndexAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the global secondary index to be deleted.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }
    inline DeleteGlobalSecondaryIndexAction& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline DeleteGlobalSecondaryIndexAction& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline DeleteGlobalSecondaryIndexAction& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
