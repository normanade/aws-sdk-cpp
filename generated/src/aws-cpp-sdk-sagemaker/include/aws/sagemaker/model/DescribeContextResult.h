﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ContextSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeContextResult
  {
  public:
    AWS_SAGEMAKER_API DescribeContextResult();
    AWS_SAGEMAKER_API DescribeContextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeContextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the context.</p>
     */
    inline const Aws::String& GetContextName() const{ return m_contextName; }
    inline void SetContextName(const Aws::String& value) { m_contextName = value; }
    inline void SetContextName(Aws::String&& value) { m_contextName = std::move(value); }
    inline void SetContextName(const char* value) { m_contextName.assign(value); }
    inline DescribeContextResult& WithContextName(const Aws::String& value) { SetContextName(value); return *this;}
    inline DescribeContextResult& WithContextName(Aws::String&& value) { SetContextName(std::move(value)); return *this;}
    inline DescribeContextResult& WithContextName(const char* value) { SetContextName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the context.</p>
     */
    inline const Aws::String& GetContextArn() const{ return m_contextArn; }
    inline void SetContextArn(const Aws::String& value) { m_contextArn = value; }
    inline void SetContextArn(Aws::String&& value) { m_contextArn = std::move(value); }
    inline void SetContextArn(const char* value) { m_contextArn.assign(value); }
    inline DescribeContextResult& WithContextArn(const Aws::String& value) { SetContextArn(value); return *this;}
    inline DescribeContextResult& WithContextArn(Aws::String&& value) { SetContextArn(std::move(value)); return *this;}
    inline DescribeContextResult& WithContextArn(const char* value) { SetContextArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the context.</p>
     */
    inline const ContextSource& GetSource() const{ return m_source; }
    inline void SetSource(const ContextSource& value) { m_source = value; }
    inline void SetSource(ContextSource&& value) { m_source = std::move(value); }
    inline DescribeContextResult& WithSource(const ContextSource& value) { SetSource(value); return *this;}
    inline DescribeContextResult& WithSource(ContextSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the context.</p>
     */
    inline const Aws::String& GetContextType() const{ return m_contextType; }
    inline void SetContextType(const Aws::String& value) { m_contextType = value; }
    inline void SetContextType(Aws::String&& value) { m_contextType = std::move(value); }
    inline void SetContextType(const char* value) { m_contextType.assign(value); }
    inline DescribeContextResult& WithContextType(const Aws::String& value) { SetContextType(value); return *this;}
    inline DescribeContextResult& WithContextType(Aws::String&& value) { SetContextType(std::move(value)); return *this;}
    inline DescribeContextResult& WithContextType(const char* value) { SetContextType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the context.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeContextResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeContextResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeContextResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the context's properties.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_properties = value; }
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_properties = std::move(value); }
    inline DescribeContextResult& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}
    inline DescribeContextResult& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(std::move(value)); return *this;}
    inline DescribeContextResult& AddProperties(const Aws::String& key, const Aws::String& value) { m_properties.emplace(key, value); return *this; }
    inline DescribeContextResult& AddProperties(Aws::String&& key, const Aws::String& value) { m_properties.emplace(std::move(key), value); return *this; }
    inline DescribeContextResult& AddProperties(const Aws::String& key, Aws::String&& value) { m_properties.emplace(key, std::move(value)); return *this; }
    inline DescribeContextResult& AddProperties(Aws::String&& key, Aws::String&& value) { m_properties.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeContextResult& AddProperties(const char* key, Aws::String&& value) { m_properties.emplace(key, std::move(value)); return *this; }
    inline DescribeContextResult& AddProperties(Aws::String&& key, const char* value) { m_properties.emplace(std::move(key), value); return *this; }
    inline DescribeContextResult& AddProperties(const char* key, const char* value) { m_properties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the context was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeContextResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeContextResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }
    inline DescribeContextResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline DescribeContextResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the context was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeContextResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeContextResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }
    inline DescribeContextResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline DescribeContextResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline const Aws::String& GetLineageGroupArn() const{ return m_lineageGroupArn; }
    inline void SetLineageGroupArn(const Aws::String& value) { m_lineageGroupArn = value; }
    inline void SetLineageGroupArn(Aws::String&& value) { m_lineageGroupArn = std::move(value); }
    inline void SetLineageGroupArn(const char* value) { m_lineageGroupArn.assign(value); }
    inline DescribeContextResult& WithLineageGroupArn(const Aws::String& value) { SetLineageGroupArn(value); return *this;}
    inline DescribeContextResult& WithLineageGroupArn(Aws::String&& value) { SetLineageGroupArn(std::move(value)); return *this;}
    inline DescribeContextResult& WithLineageGroupArn(const char* value) { SetLineageGroupArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeContextResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeContextResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeContextResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contextName;

    Aws::String m_contextArn;

    ContextSource m_source;

    Aws::String m_contextType;

    Aws::String m_description;

    Aws::Map<Aws::String, Aws::String> m_properties;

    Aws::Utils::DateTime m_creationTime;

    UserContext m_createdBy;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_lastModifiedBy;

    Aws::String m_lineageGroupArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
