﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Details of the Firewall Manager protocols list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ProtocolsListDataSummary">AWS
   * API Reference</a></p>
   */
  class ProtocolsListDataSummary
  {
  public:
    AWS_FMS_API ProtocolsListDataSummary();
    AWS_FMS_API ProtocolsListDataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ProtocolsListDataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the specified protocols list.</p>
     */
    inline const Aws::String& GetListArn() const{ return m_listArn; }
    inline bool ListArnHasBeenSet() const { return m_listArnHasBeenSet; }
    inline void SetListArn(const Aws::String& value) { m_listArnHasBeenSet = true; m_listArn = value; }
    inline void SetListArn(Aws::String&& value) { m_listArnHasBeenSet = true; m_listArn = std::move(value); }
    inline void SetListArn(const char* value) { m_listArnHasBeenSet = true; m_listArn.assign(value); }
    inline ProtocolsListDataSummary& WithListArn(const Aws::String& value) { SetListArn(value); return *this;}
    inline ProtocolsListDataSummary& WithListArn(Aws::String&& value) { SetListArn(std::move(value)); return *this;}
    inline ProtocolsListDataSummary& WithListArn(const char* value) { SetListArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the specified protocols list.</p>
     */
    inline const Aws::String& GetListId() const{ return m_listId; }
    inline bool ListIdHasBeenSet() const { return m_listIdHasBeenSet; }
    inline void SetListId(const Aws::String& value) { m_listIdHasBeenSet = true; m_listId = value; }
    inline void SetListId(Aws::String&& value) { m_listIdHasBeenSet = true; m_listId = std::move(value); }
    inline void SetListId(const char* value) { m_listIdHasBeenSet = true; m_listId.assign(value); }
    inline ProtocolsListDataSummary& WithListId(const Aws::String& value) { SetListId(value); return *this;}
    inline ProtocolsListDataSummary& WithListId(Aws::String&& value) { SetListId(std::move(value)); return *this;}
    inline ProtocolsListDataSummary& WithListId(const char* value) { SetListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the specified protocols list.</p>
     */
    inline const Aws::String& GetListName() const{ return m_listName; }
    inline bool ListNameHasBeenSet() const { return m_listNameHasBeenSet; }
    inline void SetListName(const Aws::String& value) { m_listNameHasBeenSet = true; m_listName = value; }
    inline void SetListName(Aws::String&& value) { m_listNameHasBeenSet = true; m_listName = std::move(value); }
    inline void SetListName(const char* value) { m_listNameHasBeenSet = true; m_listName.assign(value); }
    inline ProtocolsListDataSummary& WithListName(const Aws::String& value) { SetListName(value); return *this;}
    inline ProtocolsListDataSummary& WithListName(Aws::String&& value) { SetListName(std::move(value)); return *this;}
    inline ProtocolsListDataSummary& WithListName(const char* value) { SetListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of protocols in the Firewall Manager protocols list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtocolsList() const{ return m_protocolsList; }
    inline bool ProtocolsListHasBeenSet() const { return m_protocolsListHasBeenSet; }
    inline void SetProtocolsList(const Aws::Vector<Aws::String>& value) { m_protocolsListHasBeenSet = true; m_protocolsList = value; }
    inline void SetProtocolsList(Aws::Vector<Aws::String>&& value) { m_protocolsListHasBeenSet = true; m_protocolsList = std::move(value); }
    inline ProtocolsListDataSummary& WithProtocolsList(const Aws::Vector<Aws::String>& value) { SetProtocolsList(value); return *this;}
    inline ProtocolsListDataSummary& WithProtocolsList(Aws::Vector<Aws::String>&& value) { SetProtocolsList(std::move(value)); return *this;}
    inline ProtocolsListDataSummary& AddProtocolsList(const Aws::String& value) { m_protocolsListHasBeenSet = true; m_protocolsList.push_back(value); return *this; }
    inline ProtocolsListDataSummary& AddProtocolsList(Aws::String&& value) { m_protocolsListHasBeenSet = true; m_protocolsList.push_back(std::move(value)); return *this; }
    inline ProtocolsListDataSummary& AddProtocolsList(const char* value) { m_protocolsListHasBeenSet = true; m_protocolsList.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_listArn;
    bool m_listArnHasBeenSet = false;

    Aws::String m_listId;
    bool m_listIdHasBeenSet = false;

    Aws::String m_listName;
    bool m_listNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_protocolsList;
    bool m_protocolsListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
