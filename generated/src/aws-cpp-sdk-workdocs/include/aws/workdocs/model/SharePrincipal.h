﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/PrincipalType.h>
#include <aws/workdocs/model/RoleType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the recipient type and ID, if available.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/SharePrincipal">AWS
   * API Reference</a></p>
   */
  class SharePrincipal
  {
  public:
    AWS_WORKDOCS_API SharePrincipal();
    AWS_WORKDOCS_API SharePrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API SharePrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the recipient.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline SharePrincipal& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline SharePrincipal& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline SharePrincipal& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the recipient.</p>
     */
    inline const PrincipalType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PrincipalType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PrincipalType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SharePrincipal& WithType(const PrincipalType& value) { SetType(value); return *this;}
    inline SharePrincipal& WithType(PrincipalType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the recipient.</p>
     */
    inline const RoleType& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const RoleType& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(RoleType&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline SharePrincipal& WithRole(const RoleType& value) { SetRole(value); return *this;}
    inline SharePrincipal& WithRole(RoleType&& value) { SetRole(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    PrincipalType m_type;
    bool m_typeHasBeenSet = false;

    RoleType m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
