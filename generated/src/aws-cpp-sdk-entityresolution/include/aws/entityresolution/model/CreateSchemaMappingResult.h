﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/SchemaInputAttribute.h>
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
namespace EntityResolution
{
namespace Model
{
  class CreateSchemaMappingResult
  {
  public:
    AWS_ENTITYRESOLUTION_API CreateSchemaMappingResult();
    AWS_ENTITYRESOLUTION_API CreateSchemaMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API CreateSchemaMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A description of the schema.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateSchemaMappingResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateSchemaMappingResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateSchemaMappingResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information that Entity Resolution uses for matching.</p>
     */
    inline const Aws::Vector<SchemaInputAttribute>& GetMappedInputFields() const{ return m_mappedInputFields; }
    inline void SetMappedInputFields(const Aws::Vector<SchemaInputAttribute>& value) { m_mappedInputFields = value; }
    inline void SetMappedInputFields(Aws::Vector<SchemaInputAttribute>&& value) { m_mappedInputFields = std::move(value); }
    inline CreateSchemaMappingResult& WithMappedInputFields(const Aws::Vector<SchemaInputAttribute>& value) { SetMappedInputFields(value); return *this;}
    inline CreateSchemaMappingResult& WithMappedInputFields(Aws::Vector<SchemaInputAttribute>&& value) { SetMappedInputFields(std::move(value)); return *this;}
    inline CreateSchemaMappingResult& AddMappedInputFields(const SchemaInputAttribute& value) { m_mappedInputFields.push_back(value); return *this; }
    inline CreateSchemaMappingResult& AddMappedInputFields(SchemaInputAttribute&& value) { m_mappedInputFields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>SchemaMapping</code>.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }
    inline CreateSchemaMappingResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}
    inline CreateSchemaMappingResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}
    inline CreateSchemaMappingResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }
    inline void SetSchemaName(const Aws::String& value) { m_schemaName = value; }
    inline void SetSchemaName(Aws::String&& value) { m_schemaName = std::move(value); }
    inline void SetSchemaName(const char* value) { m_schemaName.assign(value); }
    inline CreateSchemaMappingResult& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}
    inline CreateSchemaMappingResult& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}
    inline CreateSchemaMappingResult& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSchemaMappingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSchemaMappingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSchemaMappingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_description;

    Aws::Vector<SchemaInputAttribute> m_mappedInputFields;

    Aws::String m_schemaArn;

    Aws::String m_schemaName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
