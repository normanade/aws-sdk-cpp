﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/TimestreamWriteRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/RetentionProperties.h>
#include <aws/timestream-write/model/MagneticStoreWriteProperties.h>
#include <aws/timestream-write/model/Schema.h>
#include <utility>

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

  /**
   */
  class UpdateTableRequest : public TimestreamWriteRequest
  {
  public:
    AWS_TIMESTREAMWRITE_API UpdateTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTable"; }

    AWS_TIMESTREAMWRITE_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMWRITE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Timestream database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline UpdateTableRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline UpdateTableRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline UpdateTableRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Timestream table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline UpdateTableRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline UpdateTableRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline UpdateTableRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention duration of the memory store and the magnetic store.</p>
     */
    inline const RetentionProperties& GetRetentionProperties() const{ return m_retentionProperties; }
    inline bool RetentionPropertiesHasBeenSet() const { return m_retentionPropertiesHasBeenSet; }
    inline void SetRetentionProperties(const RetentionProperties& value) { m_retentionPropertiesHasBeenSet = true; m_retentionProperties = value; }
    inline void SetRetentionProperties(RetentionProperties&& value) { m_retentionPropertiesHasBeenSet = true; m_retentionProperties = std::move(value); }
    inline UpdateTableRequest& WithRetentionProperties(const RetentionProperties& value) { SetRetentionProperties(value); return *this;}
    inline UpdateTableRequest& WithRetentionProperties(RetentionProperties&& value) { SetRetentionProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains properties to set on the table when enabling magnetic store
     * writes.</p>
     */
    inline const MagneticStoreWriteProperties& GetMagneticStoreWriteProperties() const{ return m_magneticStoreWriteProperties; }
    inline bool MagneticStoreWritePropertiesHasBeenSet() const { return m_magneticStoreWritePropertiesHasBeenSet; }
    inline void SetMagneticStoreWriteProperties(const MagneticStoreWriteProperties& value) { m_magneticStoreWritePropertiesHasBeenSet = true; m_magneticStoreWriteProperties = value; }
    inline void SetMagneticStoreWriteProperties(MagneticStoreWriteProperties&& value) { m_magneticStoreWritePropertiesHasBeenSet = true; m_magneticStoreWriteProperties = std::move(value); }
    inline UpdateTableRequest& WithMagneticStoreWriteProperties(const MagneticStoreWriteProperties& value) { SetMagneticStoreWriteProperties(value); return *this;}
    inline UpdateTableRequest& WithMagneticStoreWriteProperties(MagneticStoreWriteProperties&& value) { SetMagneticStoreWriteProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The schema of the table. </p>
     */
    inline const Schema& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Schema& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Schema&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline UpdateTableRequest& WithSchema(const Schema& value) { SetSchema(value); return *this;}
    inline UpdateTableRequest& WithSchema(Schema&& value) { SetSchema(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    RetentionProperties m_retentionProperties;
    bool m_retentionPropertiesHasBeenSet = false;

    MagneticStoreWriteProperties m_magneticStoreWriteProperties;
    bool m_magneticStoreWritePropertiesHasBeenSet = false;

    Schema m_schema;
    bool m_schemaHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
