﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DatabaseInput.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateDatabaseRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateDatabaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDatabase"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog in which the metadata database resides. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline UpdateDatabaseRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline UpdateDatabaseRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline UpdateDatabaseRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database to update in the catalog. For Hive compatibility,
     * this is folded to lowercase.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateDatabaseRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateDatabaseRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateDatabaseRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>DatabaseInput</code> object specifying the new definition of the
     * metadata database in the catalog.</p>
     */
    inline const DatabaseInput& GetDatabaseInput() const{ return m_databaseInput; }
    inline bool DatabaseInputHasBeenSet() const { return m_databaseInputHasBeenSet; }
    inline void SetDatabaseInput(const DatabaseInput& value) { m_databaseInputHasBeenSet = true; m_databaseInput = value; }
    inline void SetDatabaseInput(DatabaseInput&& value) { m_databaseInputHasBeenSet = true; m_databaseInput = std::move(value); }
    inline UpdateDatabaseRequest& WithDatabaseInput(const DatabaseInput& value) { SetDatabaseInput(value); return *this;}
    inline UpdateDatabaseRequest& WithDatabaseInput(DatabaseInput&& value) { SetDatabaseInput(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DatabaseInput m_databaseInput;
    bool m_databaseInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
