﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/MethodSnapshot.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>An immutable representation of a RestApi resource that can be called by users
   * using Stages. A deployment must be associated with a Stage for it to be callable
   * over the Internet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Deployment">AWS
   * API Reference</a></p>
   */
  class UpdateDeploymentResult
  {
  public:
    AWS_APIGATEWAY_API UpdateDeploymentResult();
    AWS_APIGATEWAY_API UpdateDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API UpdateDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateDeploymentResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateDeploymentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateDeploymentResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the deployment resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateDeploymentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateDeploymentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateDeploymentResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline UpdateDeploymentResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline UpdateDeploymentResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the RestApi at the date and time that the deployment resource
     * was created.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& GetApiSummary() const{ return m_apiSummary; }
    inline void SetApiSummary(const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& value) { m_apiSummary = value; }
    inline void SetApiSummary(Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>&& value) { m_apiSummary = std::move(value); }
    inline UpdateDeploymentResult& WithApiSummary(const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& value) { SetApiSummary(value); return *this;}
    inline UpdateDeploymentResult& WithApiSummary(Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>&& value) { SetApiSummary(std::move(value)); return *this;}
    inline UpdateDeploymentResult& AddApiSummary(const Aws::String& key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummary.emplace(key, value); return *this; }
    inline UpdateDeploymentResult& AddApiSummary(Aws::String&& key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummary.emplace(std::move(key), value); return *this; }
    inline UpdateDeploymentResult& AddApiSummary(const Aws::String& key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummary.emplace(key, std::move(value)); return *this; }
    inline UpdateDeploymentResult& AddApiSummary(Aws::String&& key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummary.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateDeploymentResult& AddApiSummary(const char* key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummary.emplace(key, std::move(value)); return *this; }
    inline UpdateDeploymentResult& AddApiSummary(const char* key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummary.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_description;

    Aws::Utils::DateTime m_createdDate;

    Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>> m_apiSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
