﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotevents/model/DetectorModelVersionStatus.h>
#include <aws/iotevents/model/EvaluationMethod.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Information about how the detector model is configured.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DetectorModelConfiguration">AWS
   * API Reference</a></p>
   */
  class DetectorModelConfiguration
  {
  public:
    AWS_IOTEVENTS_API DetectorModelConfiguration();
    AWS_IOTEVENTS_API DetectorModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API DetectorModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }
    inline DetectorModelConfiguration& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}
    inline DetectorModelConfiguration& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}
    inline DetectorModelConfiguration& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelVersion() const{ return m_detectorModelVersion; }
    inline bool DetectorModelVersionHasBeenSet() const { return m_detectorModelVersionHasBeenSet; }
    inline void SetDetectorModelVersion(const Aws::String& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = value; }
    inline void SetDetectorModelVersion(Aws::String&& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = std::move(value); }
    inline void SetDetectorModelVersion(const char* value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion.assign(value); }
    inline DetectorModelConfiguration& WithDetectorModelVersion(const Aws::String& value) { SetDetectorModelVersion(value); return *this;}
    inline DetectorModelConfiguration& WithDetectorModelVersion(Aws::String&& value) { SetDetectorModelVersion(std::move(value)); return *this;}
    inline DetectorModelConfiguration& WithDetectorModelVersion(const char* value) { SetDetectorModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelDescription() const{ return m_detectorModelDescription; }
    inline bool DetectorModelDescriptionHasBeenSet() const { return m_detectorModelDescriptionHasBeenSet; }
    inline void SetDetectorModelDescription(const Aws::String& value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription = value; }
    inline void SetDetectorModelDescription(Aws::String&& value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription = std::move(value); }
    inline void SetDetectorModelDescription(const char* value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription.assign(value); }
    inline DetectorModelConfiguration& WithDetectorModelDescription(const Aws::String& value) { SetDetectorModelDescription(value); return *this;}
    inline DetectorModelConfiguration& WithDetectorModelDescription(Aws::String&& value) { SetDetectorModelDescription(std::move(value)); return *this;}
    inline DetectorModelConfiguration& WithDetectorModelDescription(const char* value) { SetDetectorModelDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelArn() const{ return m_detectorModelArn; }
    inline bool DetectorModelArnHasBeenSet() const { return m_detectorModelArnHasBeenSet; }
    inline void SetDetectorModelArn(const Aws::String& value) { m_detectorModelArnHasBeenSet = true; m_detectorModelArn = value; }
    inline void SetDetectorModelArn(Aws::String&& value) { m_detectorModelArnHasBeenSet = true; m_detectorModelArn = std::move(value); }
    inline void SetDetectorModelArn(const char* value) { m_detectorModelArnHasBeenSet = true; m_detectorModelArn.assign(value); }
    inline DetectorModelConfiguration& WithDetectorModelArn(const Aws::String& value) { SetDetectorModelArn(value); return *this;}
    inline DetectorModelConfiguration& WithDetectorModelArn(Aws::String&& value) { SetDetectorModelArn(std::move(value)); return *this;}
    inline DetectorModelConfiguration& WithDetectorModelArn(const char* value) { SetDetectorModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform its
     * operations.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline DetectorModelConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DetectorModelConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DetectorModelConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the detector model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline DetectorModelConfiguration& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DetectorModelConfiguration& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the detector model was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline DetectorModelConfiguration& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline DetectorModelConfiguration& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the detector model.</p>
     */
    inline const DetectorModelVersionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DetectorModelVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DetectorModelVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DetectorModelConfiguration& WithStatus(const DetectorModelVersionStatus& value) { SetStatus(value); return *this;}
    inline DetectorModelConfiguration& WithStatus(DetectorModelVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value used to identify a detector instance. When a device or system sends
     * input, a new detector instance with a unique key value is created. AWS IoT
     * Events can continue to route input to its corresponding detector instance based
     * on this identifying information. </p> <p>This parameter uses a JSON-path
     * expression to select the attribute-value pair in the message payload that is
     * used for identification. To route the message to the correct detector instance,
     * the device must send a message payload that contains the same
     * attribute-value.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline DetectorModelConfiguration& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline DetectorModelConfiguration& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline DetectorModelConfiguration& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the order in which events are evaluated and how actions are
     * executed. </p>
     */
    inline const EvaluationMethod& GetEvaluationMethod() const{ return m_evaluationMethod; }
    inline bool EvaluationMethodHasBeenSet() const { return m_evaluationMethodHasBeenSet; }
    inline void SetEvaluationMethod(const EvaluationMethod& value) { m_evaluationMethodHasBeenSet = true; m_evaluationMethod = value; }
    inline void SetEvaluationMethod(EvaluationMethod&& value) { m_evaluationMethodHasBeenSet = true; m_evaluationMethod = std::move(value); }
    inline DetectorModelConfiguration& WithEvaluationMethod(const EvaluationMethod& value) { SetEvaluationMethod(value); return *this;}
    inline DetectorModelConfiguration& WithEvaluationMethod(EvaluationMethod&& value) { SetEvaluationMethod(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;

    Aws::String m_detectorModelVersion;
    bool m_detectorModelVersionHasBeenSet = false;

    Aws::String m_detectorModelDescription;
    bool m_detectorModelDescriptionHasBeenSet = false;

    Aws::String m_detectorModelArn;
    bool m_detectorModelArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    DetectorModelVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    EvaluationMethod m_evaluationMethod;
    bool m_evaluationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
