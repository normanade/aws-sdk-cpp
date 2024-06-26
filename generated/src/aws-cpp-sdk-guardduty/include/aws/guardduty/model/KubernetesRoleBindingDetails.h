﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the role binding that grants the permission
   * defined in a Kubernetes role.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesRoleBindingDetails">AWS
   * API Reference</a></p>
   */
  class KubernetesRoleBindingDetails
  {
  public:
    AWS_GUARDDUTY_API KubernetesRoleBindingDetails();
    AWS_GUARDDUTY_API KubernetesRoleBindingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesRoleBindingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The kind of the role. For role binding, this value will be
     * <code>RoleBinding</code>.</p>
     */
    inline const Aws::String& GetKind() const{ return m_kind; }
    inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }
    inline void SetKind(const Aws::String& value) { m_kindHasBeenSet = true; m_kind = value; }
    inline void SetKind(Aws::String&& value) { m_kindHasBeenSet = true; m_kind = std::move(value); }
    inline void SetKind(const char* value) { m_kindHasBeenSet = true; m_kind.assign(value); }
    inline KubernetesRoleBindingDetails& WithKind(const Aws::String& value) { SetKind(value); return *this;}
    inline KubernetesRoleBindingDetails& WithKind(Aws::String&& value) { SetKind(std::move(value)); return *this;}
    inline KubernetesRoleBindingDetails& WithKind(const char* value) { SetKind(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>RoleBinding</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline KubernetesRoleBindingDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline KubernetesRoleBindingDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline KubernetesRoleBindingDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the role binding.</p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }
    inline KubernetesRoleBindingDetails& WithUid(const Aws::String& value) { SetUid(value); return *this;}
    inline KubernetesRoleBindingDetails& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}
    inline KubernetesRoleBindingDetails& WithUid(const char* value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the role being referenced. This must match the name of the
     * <code>Role</code> or <code>ClusterRole</code> that you want to bind to.</p>
     */
    inline const Aws::String& GetRoleRefName() const{ return m_roleRefName; }
    inline bool RoleRefNameHasBeenSet() const { return m_roleRefNameHasBeenSet; }
    inline void SetRoleRefName(const Aws::String& value) { m_roleRefNameHasBeenSet = true; m_roleRefName = value; }
    inline void SetRoleRefName(Aws::String&& value) { m_roleRefNameHasBeenSet = true; m_roleRefName = std::move(value); }
    inline void SetRoleRefName(const char* value) { m_roleRefNameHasBeenSet = true; m_roleRefName.assign(value); }
    inline KubernetesRoleBindingDetails& WithRoleRefName(const Aws::String& value) { SetRoleRefName(value); return *this;}
    inline KubernetesRoleBindingDetails& WithRoleRefName(Aws::String&& value) { SetRoleRefName(std::move(value)); return *this;}
    inline KubernetesRoleBindingDetails& WithRoleRefName(const char* value) { SetRoleRefName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the role being referenced. This could be either <code>Role</code>
     * or <code>ClusterRole</code>.</p>
     */
    inline const Aws::String& GetRoleRefKind() const{ return m_roleRefKind; }
    inline bool RoleRefKindHasBeenSet() const { return m_roleRefKindHasBeenSet; }
    inline void SetRoleRefKind(const Aws::String& value) { m_roleRefKindHasBeenSet = true; m_roleRefKind = value; }
    inline void SetRoleRefKind(Aws::String&& value) { m_roleRefKindHasBeenSet = true; m_roleRefKind = std::move(value); }
    inline void SetRoleRefKind(const char* value) { m_roleRefKindHasBeenSet = true; m_roleRefKind.assign(value); }
    inline KubernetesRoleBindingDetails& WithRoleRefKind(const Aws::String& value) { SetRoleRefKind(value); return *this;}
    inline KubernetesRoleBindingDetails& WithRoleRefKind(Aws::String&& value) { SetRoleRefKind(std::move(value)); return *this;}
    inline KubernetesRoleBindingDetails& WithRoleRefKind(const char* value) { SetRoleRefKind(value); return *this;}
    ///@}
  private:

    Aws::String m_kind;
    bool m_kindHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    Aws::String m_roleRefName;
    bool m_roleRefNameHasBeenSet = false;

    Aws::String m_roleRefKind;
    bool m_roleRefKindHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
