﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/SchemaId.h>
#include <aws/glue/model/SchemaVersionNumber.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/MetadataKeyValuePair.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class RemoveSchemaVersionMetadataRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API RemoveSchemaVersionMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveSchemaVersionMetadata"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A wrapper structure that may contain the schema name and Amazon Resource Name
     * (ARN).</p>
     */
    inline const SchemaId& GetSchemaId() const{ return m_schemaId; }
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
    inline void SetSchemaId(const SchemaId& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }
    inline void SetSchemaId(SchemaId&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }
    inline RemoveSchemaVersionMetadataRequest& WithSchemaId(const SchemaId& value) { SetSchemaId(value); return *this;}
    inline RemoveSchemaVersionMetadataRequest& WithSchemaId(SchemaId&& value) { SetSchemaId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the schema.</p>
     */
    inline const SchemaVersionNumber& GetSchemaVersionNumber() const{ return m_schemaVersionNumber; }
    inline bool SchemaVersionNumberHasBeenSet() const { return m_schemaVersionNumberHasBeenSet; }
    inline void SetSchemaVersionNumber(const SchemaVersionNumber& value) { m_schemaVersionNumberHasBeenSet = true; m_schemaVersionNumber = value; }
    inline void SetSchemaVersionNumber(SchemaVersionNumber&& value) { m_schemaVersionNumberHasBeenSet = true; m_schemaVersionNumber = std::move(value); }
    inline RemoveSchemaVersionMetadataRequest& WithSchemaVersionNumber(const SchemaVersionNumber& value) { SetSchemaVersionNumber(value); return *this;}
    inline RemoveSchemaVersionMetadataRequest& WithSchemaVersionNumber(SchemaVersionNumber&& value) { SetSchemaVersionNumber(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const{ return m_schemaVersionId; }
    inline bool SchemaVersionIdHasBeenSet() const { return m_schemaVersionIdHasBeenSet; }
    inline void SetSchemaVersionId(const Aws::String& value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId = value; }
    inline void SetSchemaVersionId(Aws::String&& value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId = std::move(value); }
    inline void SetSchemaVersionId(const char* value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId.assign(value); }
    inline RemoveSchemaVersionMetadataRequest& WithSchemaVersionId(const Aws::String& value) { SetSchemaVersionId(value); return *this;}
    inline RemoveSchemaVersionMetadataRequest& WithSchemaVersionId(Aws::String&& value) { SetSchemaVersionId(std::move(value)); return *this;}
    inline RemoveSchemaVersionMetadataRequest& WithSchemaVersionId(const char* value) { SetSchemaVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the metadata key.</p>
     */
    inline const MetadataKeyValuePair& GetMetadataKeyValue() const{ return m_metadataKeyValue; }
    inline bool MetadataKeyValueHasBeenSet() const { return m_metadataKeyValueHasBeenSet; }
    inline void SetMetadataKeyValue(const MetadataKeyValuePair& value) { m_metadataKeyValueHasBeenSet = true; m_metadataKeyValue = value; }
    inline void SetMetadataKeyValue(MetadataKeyValuePair&& value) { m_metadataKeyValueHasBeenSet = true; m_metadataKeyValue = std::move(value); }
    inline RemoveSchemaVersionMetadataRequest& WithMetadataKeyValue(const MetadataKeyValuePair& value) { SetMetadataKeyValue(value); return *this;}
    inline RemoveSchemaVersionMetadataRequest& WithMetadataKeyValue(MetadataKeyValuePair&& value) { SetMetadataKeyValue(std::move(value)); return *this;}
    ///@}
  private:

    SchemaId m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    SchemaVersionNumber m_schemaVersionNumber;
    bool m_schemaVersionNumberHasBeenSet = false;

    Aws::String m_schemaVersionId;
    bool m_schemaVersionIdHasBeenSet = false;

    MetadataKeyValuePair m_metadataKeyValue;
    bool m_metadataKeyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
