﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class CreateProjectResult
  {
  public:
    AWS_CODECATALYST_API CreateProjectResult();
    AWS_CODECATALYST_API CreateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API CreateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }
    inline CreateProjectResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline CreateProjectResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline CreateProjectResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateProjectResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateProjectResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateProjectResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the project.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline CreateProjectResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateProjectResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateProjectResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateProjectResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateProjectResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateProjectResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;

    Aws::String m_name;

    Aws::String m_displayName;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
