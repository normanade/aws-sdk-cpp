﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/sagemaker/model/ModelPackageGroupStatus.h>
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
  class DescribeModelPackageGroupResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelPackageGroupResult();
    AWS_SAGEMAKER_API DescribeModelPackageGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelPackageGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const{ return m_modelPackageGroupName; }
    inline void SetModelPackageGroupName(const Aws::String& value) { m_modelPackageGroupName = value; }
    inline void SetModelPackageGroupName(Aws::String&& value) { m_modelPackageGroupName = std::move(value); }
    inline void SetModelPackageGroupName(const char* value) { m_modelPackageGroupName.assign(value); }
    inline DescribeModelPackageGroupResult& WithModelPackageGroupName(const Aws::String& value) { SetModelPackageGroupName(value); return *this;}
    inline DescribeModelPackageGroupResult& WithModelPackageGroupName(Aws::String&& value) { SetModelPackageGroupName(std::move(value)); return *this;}
    inline DescribeModelPackageGroupResult& WithModelPackageGroupName(const char* value) { SetModelPackageGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupArn() const{ return m_modelPackageGroupArn; }
    inline void SetModelPackageGroupArn(const Aws::String& value) { m_modelPackageGroupArn = value; }
    inline void SetModelPackageGroupArn(Aws::String&& value) { m_modelPackageGroupArn = std::move(value); }
    inline void SetModelPackageGroupArn(const char* value) { m_modelPackageGroupArn.assign(value); }
    inline DescribeModelPackageGroupResult& WithModelPackageGroupArn(const Aws::String& value) { SetModelPackageGroupArn(value); return *this;}
    inline DescribeModelPackageGroupResult& WithModelPackageGroupArn(Aws::String&& value) { SetModelPackageGroupArn(std::move(value)); return *this;}
    inline DescribeModelPackageGroupResult& WithModelPackageGroupArn(const char* value) { SetModelPackageGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupDescription() const{ return m_modelPackageGroupDescription; }
    inline void SetModelPackageGroupDescription(const Aws::String& value) { m_modelPackageGroupDescription = value; }
    inline void SetModelPackageGroupDescription(Aws::String&& value) { m_modelPackageGroupDescription = std::move(value); }
    inline void SetModelPackageGroupDescription(const char* value) { m_modelPackageGroupDescription.assign(value); }
    inline DescribeModelPackageGroupResult& WithModelPackageGroupDescription(const Aws::String& value) { SetModelPackageGroupDescription(value); return *this;}
    inline DescribeModelPackageGroupResult& WithModelPackageGroupDescription(Aws::String&& value) { SetModelPackageGroupDescription(std::move(value)); return *this;}
    inline DescribeModelPackageGroupResult& WithModelPackageGroupDescription(const char* value) { SetModelPackageGroupDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the model group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeModelPackageGroupResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeModelPackageGroupResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }
    inline DescribeModelPackageGroupResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline DescribeModelPackageGroupResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model group.</p>
     */
    inline const ModelPackageGroupStatus& GetModelPackageGroupStatus() const{ return m_modelPackageGroupStatus; }
    inline void SetModelPackageGroupStatus(const ModelPackageGroupStatus& value) { m_modelPackageGroupStatus = value; }
    inline void SetModelPackageGroupStatus(ModelPackageGroupStatus&& value) { m_modelPackageGroupStatus = std::move(value); }
    inline DescribeModelPackageGroupResult& WithModelPackageGroupStatus(const ModelPackageGroupStatus& value) { SetModelPackageGroupStatus(value); return *this;}
    inline DescribeModelPackageGroupResult& WithModelPackageGroupStatus(ModelPackageGroupStatus&& value) { SetModelPackageGroupStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeModelPackageGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeModelPackageGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeModelPackageGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_modelPackageGroupName;

    Aws::String m_modelPackageGroupArn;

    Aws::String m_modelPackageGroupDescription;

    Aws::Utils::DateTime m_creationTime;

    UserContext m_createdBy;

    ModelPackageGroupStatus m_modelPackageGroupStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
