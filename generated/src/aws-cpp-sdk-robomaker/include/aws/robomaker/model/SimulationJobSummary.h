﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/SimulationJobStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/ComputeType.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Summary information for a simulation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/SimulationJobSummary">AWS
   * API Reference</a></p>
   */
  class SimulationJobSummary
  {
  public:
    AWS_ROBOMAKER_API SimulationJobSummary();
    AWS_ROBOMAKER_API SimulationJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API SimulationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SimulationJobSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SimulationJobSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SimulationJobSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline SimulationJobSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline SimulationJobSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the simulation job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SimulationJobSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SimulationJobSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SimulationJobSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the simulation job.</p>
     */
    inline const SimulationJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SimulationJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SimulationJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SimulationJobSummary& WithStatus(const SimulationJobStatus& value) { SetStatus(value); return *this;}
    inline SimulationJobSummary& WithStatus(SimulationJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of simulation job simulation application names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSimulationApplicationNames() const{ return m_simulationApplicationNames; }
    inline bool SimulationApplicationNamesHasBeenSet() const { return m_simulationApplicationNamesHasBeenSet; }
    inline void SetSimulationApplicationNames(const Aws::Vector<Aws::String>& value) { m_simulationApplicationNamesHasBeenSet = true; m_simulationApplicationNames = value; }
    inline void SetSimulationApplicationNames(Aws::Vector<Aws::String>&& value) { m_simulationApplicationNamesHasBeenSet = true; m_simulationApplicationNames = std::move(value); }
    inline SimulationJobSummary& WithSimulationApplicationNames(const Aws::Vector<Aws::String>& value) { SetSimulationApplicationNames(value); return *this;}
    inline SimulationJobSummary& WithSimulationApplicationNames(Aws::Vector<Aws::String>&& value) { SetSimulationApplicationNames(std::move(value)); return *this;}
    inline SimulationJobSummary& AddSimulationApplicationNames(const Aws::String& value) { m_simulationApplicationNamesHasBeenSet = true; m_simulationApplicationNames.push_back(value); return *this; }
    inline SimulationJobSummary& AddSimulationApplicationNames(Aws::String&& value) { m_simulationApplicationNamesHasBeenSet = true; m_simulationApplicationNames.push_back(std::move(value)); return *this; }
    inline SimulationJobSummary& AddSimulationApplicationNames(const char* value) { m_simulationApplicationNamesHasBeenSet = true; m_simulationApplicationNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of simulation job robot application names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRobotApplicationNames() const{ return m_robotApplicationNames; }
    inline bool RobotApplicationNamesHasBeenSet() const { return m_robotApplicationNamesHasBeenSet; }
    inline void SetRobotApplicationNames(const Aws::Vector<Aws::String>& value) { m_robotApplicationNamesHasBeenSet = true; m_robotApplicationNames = value; }
    inline void SetRobotApplicationNames(Aws::Vector<Aws::String>&& value) { m_robotApplicationNamesHasBeenSet = true; m_robotApplicationNames = std::move(value); }
    inline SimulationJobSummary& WithRobotApplicationNames(const Aws::Vector<Aws::String>& value) { SetRobotApplicationNames(value); return *this;}
    inline SimulationJobSummary& WithRobotApplicationNames(Aws::Vector<Aws::String>&& value) { SetRobotApplicationNames(std::move(value)); return *this;}
    inline SimulationJobSummary& AddRobotApplicationNames(const Aws::String& value) { m_robotApplicationNamesHasBeenSet = true; m_robotApplicationNames.push_back(value); return *this; }
    inline SimulationJobSummary& AddRobotApplicationNames(Aws::String&& value) { m_robotApplicationNamesHasBeenSet = true; m_robotApplicationNames.push_back(std::move(value)); return *this; }
    inline SimulationJobSummary& AddRobotApplicationNames(const char* value) { m_robotApplicationNamesHasBeenSet = true; m_robotApplicationNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the data sources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSourceNames() const{ return m_dataSourceNames; }
    inline bool DataSourceNamesHasBeenSet() const { return m_dataSourceNamesHasBeenSet; }
    inline void SetDataSourceNames(const Aws::Vector<Aws::String>& value) { m_dataSourceNamesHasBeenSet = true; m_dataSourceNames = value; }
    inline void SetDataSourceNames(Aws::Vector<Aws::String>&& value) { m_dataSourceNamesHasBeenSet = true; m_dataSourceNames = std::move(value); }
    inline SimulationJobSummary& WithDataSourceNames(const Aws::Vector<Aws::String>& value) { SetDataSourceNames(value); return *this;}
    inline SimulationJobSummary& WithDataSourceNames(Aws::Vector<Aws::String>&& value) { SetDataSourceNames(std::move(value)); return *this;}
    inline SimulationJobSummary& AddDataSourceNames(const Aws::String& value) { m_dataSourceNamesHasBeenSet = true; m_dataSourceNames.push_back(value); return *this; }
    inline SimulationJobSummary& AddDataSourceNames(Aws::String&& value) { m_dataSourceNamesHasBeenSet = true; m_dataSourceNames.push_back(std::move(value)); return *this; }
    inline SimulationJobSummary& AddDataSourceNames(const char* value) { m_dataSourceNamesHasBeenSet = true; m_dataSourceNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The compute type for the simulation job summary.</p>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }
    inline SimulationJobSummary& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}
    inline SimulationJobSummary& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SimulationJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_simulationApplicationNames;
    bool m_simulationApplicationNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_robotApplicationNames;
    bool m_robotApplicationNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataSourceNames;
    bool m_dataSourceNamesHasBeenSet = false;

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
