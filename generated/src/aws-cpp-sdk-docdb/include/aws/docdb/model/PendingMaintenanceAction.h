﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace DocDB
{
namespace Model
{

  /**
   * <p>Provides information about a pending maintenance action for a
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/PendingMaintenanceAction">AWS
   * API Reference</a></p>
   */
  class PendingMaintenanceAction
  {
  public:
    AWS_DOCDB_API PendingMaintenanceAction();
    AWS_DOCDB_API PendingMaintenanceAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API PendingMaintenanceAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of pending maintenance action that is available for the
     * resource.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }
    inline PendingMaintenanceAction& WithAction(const Aws::String& value) { SetAction(value); return *this;}
    inline PendingMaintenanceAction& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}
    inline PendingMaintenanceAction& WithAction(const char* value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of the maintenance window when the action is applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>next-maintenance</code> opt-in requests are ignored.</p>
     */
    inline const Aws::Utils::DateTime& GetAutoAppliedAfterDate() const{ return m_autoAppliedAfterDate; }
    inline bool AutoAppliedAfterDateHasBeenSet() const { return m_autoAppliedAfterDateHasBeenSet; }
    inline void SetAutoAppliedAfterDate(const Aws::Utils::DateTime& value) { m_autoAppliedAfterDateHasBeenSet = true; m_autoAppliedAfterDate = value; }
    inline void SetAutoAppliedAfterDate(Aws::Utils::DateTime&& value) { m_autoAppliedAfterDateHasBeenSet = true; m_autoAppliedAfterDate = std::move(value); }
    inline PendingMaintenanceAction& WithAutoAppliedAfterDate(const Aws::Utils::DateTime& value) { SetAutoAppliedAfterDate(value); return *this;}
    inline PendingMaintenanceAction& WithAutoAppliedAfterDate(Aws::Utils::DateTime&& value) { SetAutoAppliedAfterDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the maintenance action is automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>immediate</code> opt-in requests are ignored.</p>
     */
    inline const Aws::Utils::DateTime& GetForcedApplyDate() const{ return m_forcedApplyDate; }
    inline bool ForcedApplyDateHasBeenSet() const { return m_forcedApplyDateHasBeenSet; }
    inline void SetForcedApplyDate(const Aws::Utils::DateTime& value) { m_forcedApplyDateHasBeenSet = true; m_forcedApplyDate = value; }
    inline void SetForcedApplyDate(Aws::Utils::DateTime&& value) { m_forcedApplyDateHasBeenSet = true; m_forcedApplyDate = std::move(value); }
    inline PendingMaintenanceAction& WithForcedApplyDate(const Aws::Utils::DateTime& value) { SetForcedApplyDate(value); return *this;}
    inline PendingMaintenanceAction& WithForcedApplyDate(Aws::Utils::DateTime&& value) { SetForcedApplyDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of opt-in request that has been received for the
     * resource.</p>
     */
    inline const Aws::String& GetOptInStatus() const{ return m_optInStatus; }
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }
    inline void SetOptInStatus(const Aws::String& value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }
    inline void SetOptInStatus(Aws::String&& value) { m_optInStatusHasBeenSet = true; m_optInStatus = std::move(value); }
    inline void SetOptInStatus(const char* value) { m_optInStatusHasBeenSet = true; m_optInStatus.assign(value); }
    inline PendingMaintenanceAction& WithOptInStatus(const Aws::String& value) { SetOptInStatus(value); return *this;}
    inline PendingMaintenanceAction& WithOptInStatus(Aws::String&& value) { SetOptInStatus(std::move(value)); return *this;}
    inline PendingMaintenanceAction& WithOptInStatus(const char* value) { SetOptInStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective date when the pending maintenance action is applied to the
     * resource.</p>
     */
    inline const Aws::Utils::DateTime& GetCurrentApplyDate() const{ return m_currentApplyDate; }
    inline bool CurrentApplyDateHasBeenSet() const { return m_currentApplyDateHasBeenSet; }
    inline void SetCurrentApplyDate(const Aws::Utils::DateTime& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = value; }
    inline void SetCurrentApplyDate(Aws::Utils::DateTime&& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = std::move(value); }
    inline PendingMaintenanceAction& WithCurrentApplyDate(const Aws::Utils::DateTime& value) { SetCurrentApplyDate(value); return *this;}
    inline PendingMaintenanceAction& WithCurrentApplyDate(Aws::Utils::DateTime&& value) { SetCurrentApplyDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description providing more detail about the maintenance action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PendingMaintenanceAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PendingMaintenanceAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PendingMaintenanceAction& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::Utils::DateTime m_autoAppliedAfterDate;
    bool m_autoAppliedAfterDateHasBeenSet = false;

    Aws::Utils::DateTime m_forcedApplyDate;
    bool m_forcedApplyDateHasBeenSet = false;

    Aws::String m_optInStatus;
    bool m_optInStatusHasBeenSet = false;

    Aws::Utils::DateTime m_currentApplyDate;
    bool m_currentApplyDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
