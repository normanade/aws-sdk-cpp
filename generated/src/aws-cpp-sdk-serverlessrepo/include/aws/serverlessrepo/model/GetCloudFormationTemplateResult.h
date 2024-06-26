﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/serverlessrepo/model/Status.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{
  class GetCloudFormationTemplateResult
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API GetCloudFormationTemplateResult();
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API GetCloudFormationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API GetCloudFormationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline GetCloudFormationTemplateResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetCloudFormationTemplateResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetCloudFormationTemplateResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this resource was created.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::String& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::String&& value) { m_creationTime = std::move(value); }
    inline void SetCreationTime(const char* value) { m_creationTime.assign(value); }
    inline GetCloudFormationTemplateResult& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}
    inline GetCloudFormationTemplateResult& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}
    inline GetCloudFormationTemplateResult& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this template expires. Templates
 expire 1 hour after
     * creation.</p>
     */
    inline const Aws::String& GetExpirationTime() const{ return m_expirationTime; }
    inline void SetExpirationTime(const Aws::String& value) { m_expirationTime = value; }
    inline void SetExpirationTime(Aws::String&& value) { m_expirationTime = std::move(value); }
    inline void SetExpirationTime(const char* value) { m_expirationTime.assign(value); }
    inline GetCloudFormationTemplateResult& WithExpirationTime(const Aws::String& value) { SetExpirationTime(value); return *this;}
    inline GetCloudFormationTemplateResult& WithExpirationTime(Aws::String&& value) { SetExpirationTime(std::move(value)); return *this;}
    inline GetCloudFormationTemplateResult& WithExpirationTime(const char* value) { SetExpirationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersion = value; }
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersion = std::move(value); }
    inline void SetSemanticVersion(const char* value) { m_semanticVersion.assign(value); }
    inline GetCloudFormationTemplateResult& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}
    inline GetCloudFormationTemplateResult& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}
    inline GetCloudFormationTemplateResult& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the template creation workflow.</p><p>Possible values: PREPARING |
     * ACTIVE | EXPIRED
 </p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline GetCloudFormationTemplateResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline GetCloudFormationTemplateResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UUID returned by CreateCloudFormationTemplate.</p><p>Pattern:
     * [0-9a-fA-F]{8}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{12}</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline void SetTemplateId(const Aws::String& value) { m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateId.assign(value); }
    inline GetCloudFormationTemplateResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline GetCloudFormationTemplateResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline GetCloudFormationTemplateResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the template that can be used to deploy the application using
 AWS
     * CloudFormation.</p>
     */
    inline const Aws::String& GetTemplateUrl() const{ return m_templateUrl; }
    inline void SetTemplateUrl(const Aws::String& value) { m_templateUrl = value; }
    inline void SetTemplateUrl(Aws::String&& value) { m_templateUrl = std::move(value); }
    inline void SetTemplateUrl(const char* value) { m_templateUrl.assign(value); }
    inline GetCloudFormationTemplateResult& WithTemplateUrl(const Aws::String& value) { SetTemplateUrl(value); return *this;}
    inline GetCloudFormationTemplateResult& WithTemplateUrl(Aws::String&& value) { SetTemplateUrl(std::move(value)); return *this;}
    inline GetCloudFormationTemplateResult& WithTemplateUrl(const char* value) { SetTemplateUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCloudFormationTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCloudFormationTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCloudFormationTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    Aws::String m_creationTime;

    Aws::String m_expirationTime;

    Aws::String m_semanticVersion;

    Status m_status;

    Aws::String m_templateId;

    Aws::String m_templateUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
