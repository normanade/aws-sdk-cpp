﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/Sample.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/databrew/model/SessionStatus.h>
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
namespace GlueDataBrew
{
namespace Model
{
  class DescribeProjectResult
  {
  public:
    AWS_GLUEDATABREW_API DescribeProjectResult();
    AWS_GLUEDATABREW_API DescribeProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API DescribeProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date and time that the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDate = value; }
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDate = std::move(value); }
    inline DescribeProjectResult& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}
    inline DescribeProjectResult& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (user name) of the user who created the project.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline DescribeProjectResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline DescribeProjectResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline DescribeProjectResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset associated with the project.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }
    inline void SetDatasetName(const Aws::String& value) { m_datasetName = value; }
    inline void SetDatasetName(Aws::String&& value) { m_datasetName = std::move(value); }
    inline void SetDatasetName(const char* value) { m_datasetName.assign(value); }
    inline DescribeProjectResult& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}
    inline DescribeProjectResult& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}
    inline DescribeProjectResult& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the project was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }
    inline DescribeProjectResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline DescribeProjectResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (user name) of the user who last modified the project.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedBy = std::move(value); }
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedBy.assign(value); }
    inline DescribeProjectResult& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}
    inline DescribeProjectResult& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    inline DescribeProjectResult& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeProjectResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeProjectResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeProjectResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recipe associated with this job.</p>
     */
    inline const Aws::String& GetRecipeName() const{ return m_recipeName; }
    inline void SetRecipeName(const Aws::String& value) { m_recipeName = value; }
    inline void SetRecipeName(Aws::String&& value) { m_recipeName = std::move(value); }
    inline void SetRecipeName(const char* value) { m_recipeName.assign(value); }
    inline DescribeProjectResult& WithRecipeName(const Aws::String& value) { SetRecipeName(value); return *this;}
    inline DescribeProjectResult& WithRecipeName(Aws::String&& value) { SetRecipeName(std::move(value)); return *this;}
    inline DescribeProjectResult& WithRecipeName(const char* value) { SetRecipeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline DescribeProjectResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline DescribeProjectResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline DescribeProjectResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Sample& GetSample() const{ return m_sample; }
    inline void SetSample(const Sample& value) { m_sample = value; }
    inline void SetSample(Sample&& value) { m_sample = std::move(value); }
    inline DescribeProjectResult& WithSample(const Sample& value) { SetSample(value); return *this;}
    inline DescribeProjectResult& WithSample(Sample&& value) { SetSample(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Identity and Access Management (IAM) role to be assumed when
     * DataBrew runs the job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeProjectResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeProjectResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeProjectResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata tags associated with this project.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeProjectResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeProjectResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeProjectResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeProjectResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeProjectResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeProjectResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeProjectResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeProjectResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeProjectResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the current state of the session:</p> <ul> <li> <p>
     * <code>PROVISIONING</code> - allocating resources for the session.</p> </li> <li>
     * <p> <code>INITIALIZING</code> - getting the session ready for first use.</p>
     * </li> <li> <p> <code>ASSIGNED</code> - the session is ready for use.</p> </li>
     * </ul>
     */
    inline const SessionStatus& GetSessionStatus() const{ return m_sessionStatus; }
    inline void SetSessionStatus(const SessionStatus& value) { m_sessionStatus = value; }
    inline void SetSessionStatus(SessionStatus&& value) { m_sessionStatus = std::move(value); }
    inline DescribeProjectResult& WithSessionStatus(const SessionStatus& value) { SetSessionStatus(value); return *this;}
    inline DescribeProjectResult& WithSessionStatus(SessionStatus&& value) { SetSessionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (user name) of the user that opened the project for use. </p>
     */
    inline const Aws::String& GetOpenedBy() const{ return m_openedBy; }
    inline void SetOpenedBy(const Aws::String& value) { m_openedBy = value; }
    inline void SetOpenedBy(Aws::String&& value) { m_openedBy = std::move(value); }
    inline void SetOpenedBy(const char* value) { m_openedBy.assign(value); }
    inline DescribeProjectResult& WithOpenedBy(const Aws::String& value) { SetOpenedBy(value); return *this;}
    inline DescribeProjectResult& WithOpenedBy(Aws::String&& value) { SetOpenedBy(std::move(value)); return *this;}
    inline DescribeProjectResult& WithOpenedBy(const char* value) { SetOpenedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the project was opened. </p>
     */
    inline const Aws::Utils::DateTime& GetOpenDate() const{ return m_openDate; }
    inline void SetOpenDate(const Aws::Utils::DateTime& value) { m_openDate = value; }
    inline void SetOpenDate(Aws::Utils::DateTime&& value) { m_openDate = std::move(value); }
    inline DescribeProjectResult& WithOpenDate(const Aws::Utils::DateTime& value) { SetOpenDate(value); return *this;}
    inline DescribeProjectResult& WithOpenDate(Aws::Utils::DateTime&& value) { SetOpenDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createDate;

    Aws::String m_createdBy;

    Aws::String m_datasetName;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_lastModifiedBy;

    Aws::String m_name;

    Aws::String m_recipeName;

    Aws::String m_resourceArn;

    Sample m_sample;

    Aws::String m_roleArn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    SessionStatus m_sessionStatus;

    Aws::String m_openedBy;

    Aws::Utils::DateTime m_openDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
