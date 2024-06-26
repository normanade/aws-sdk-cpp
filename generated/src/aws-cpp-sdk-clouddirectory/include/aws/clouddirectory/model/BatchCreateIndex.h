﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/AttributeKey.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Creates an index object inside of a <a>BatchRead</a> operation. For more
   * information, see <a>CreateIndex</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchCreateIndex">AWS
   * API Reference</a></p>
   */
  class BatchCreateIndex
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchCreateIndex();
    AWS_CLOUDDIRECTORY_API BatchCreateIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchCreateIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the attributes that should be indexed on. Currently only a single
     * attribute is supported.</p>
     */
    inline const Aws::Vector<AttributeKey>& GetOrderedIndexedAttributeList() const{ return m_orderedIndexedAttributeList; }
    inline bool OrderedIndexedAttributeListHasBeenSet() const { return m_orderedIndexedAttributeListHasBeenSet; }
    inline void SetOrderedIndexedAttributeList(const Aws::Vector<AttributeKey>& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList = value; }
    inline void SetOrderedIndexedAttributeList(Aws::Vector<AttributeKey>&& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList = std::move(value); }
    inline BatchCreateIndex& WithOrderedIndexedAttributeList(const Aws::Vector<AttributeKey>& value) { SetOrderedIndexedAttributeList(value); return *this;}
    inline BatchCreateIndex& WithOrderedIndexedAttributeList(Aws::Vector<AttributeKey>&& value) { SetOrderedIndexedAttributeList(std::move(value)); return *this;}
    inline BatchCreateIndex& AddOrderedIndexedAttributeList(const AttributeKey& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList.push_back(value); return *this; }
    inline BatchCreateIndex& AddOrderedIndexedAttributeList(AttributeKey&& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the attribute that is being indexed has unique values or
     * not.</p>
     */
    inline bool GetIsUnique() const{ return m_isUnique; }
    inline bool IsUniqueHasBeenSet() const { return m_isUniqueHasBeenSet; }
    inline void SetIsUnique(bool value) { m_isUniqueHasBeenSet = true; m_isUnique = value; }
    inline BatchCreateIndex& WithIsUnique(bool value) { SetIsUnique(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to the parent object that contains the index object.</p>
     */
    inline const ObjectReference& GetParentReference() const{ return m_parentReference; }
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }
    inline void SetParentReference(const ObjectReference& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }
    inline void SetParentReference(ObjectReference&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::move(value); }
    inline BatchCreateIndex& WithParentReference(const ObjectReference& value) { SetParentReference(value); return *this;}
    inline BatchCreateIndex& WithParentReference(ObjectReference&& value) { SetParentReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the link between the parent object and the index object.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = std::move(value); }
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }
    inline BatchCreateIndex& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}
    inline BatchCreateIndex& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}
    inline BatchCreateIndex& WithLinkName(const char* value) { SetLinkName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline const Aws::String& GetBatchReferenceName() const{ return m_batchReferenceName; }
    inline bool BatchReferenceNameHasBeenSet() const { return m_batchReferenceNameHasBeenSet; }
    inline void SetBatchReferenceName(const Aws::String& value) { m_batchReferenceNameHasBeenSet = true; m_batchReferenceName = value; }
    inline void SetBatchReferenceName(Aws::String&& value) { m_batchReferenceNameHasBeenSet = true; m_batchReferenceName = std::move(value); }
    inline void SetBatchReferenceName(const char* value) { m_batchReferenceNameHasBeenSet = true; m_batchReferenceName.assign(value); }
    inline BatchCreateIndex& WithBatchReferenceName(const Aws::String& value) { SetBatchReferenceName(value); return *this;}
    inline BatchCreateIndex& WithBatchReferenceName(Aws::String&& value) { SetBatchReferenceName(std::move(value)); return *this;}
    inline BatchCreateIndex& WithBatchReferenceName(const char* value) { SetBatchReferenceName(value); return *this;}
    ///@}
  private:

    Aws::Vector<AttributeKey> m_orderedIndexedAttributeList;
    bool m_orderedIndexedAttributeListHasBeenSet = false;

    bool m_isUnique;
    bool m_isUniqueHasBeenSet = false;

    ObjectReference m_parentReference;
    bool m_parentReferenceHasBeenSet = false;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet = false;

    Aws::String m_batchReferenceName;
    bool m_batchReferenceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
