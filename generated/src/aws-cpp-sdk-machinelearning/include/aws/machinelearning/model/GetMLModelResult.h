﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/machinelearning/model/EntityStatus.h>
#include <aws/machinelearning/model/RealtimeEndpointInfo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/machinelearning/model/MLModelType.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>GetMLModel</code> operation, and provides
   * detailed information about a <code>MLModel</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/GetMLModelOutput">AWS
   * API Reference</a></p>
   */
  class GetMLModelResult
  {
  public:
    AWS_MACHINELEARNING_API GetMLModelResult();
    AWS_MACHINELEARNING_API GetMLModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API GetMLModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The MLModel ID, which is same as the <code>MLModelId</code> in the
     * request.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }
    inline void SetMLModelId(const Aws::String& value) { m_mLModelId = value; }
    inline void SetMLModelId(Aws::String&& value) { m_mLModelId = std::move(value); }
    inline void SetMLModelId(const char* value) { m_mLModelId.assign(value); }
    inline GetMLModelResult& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}
    inline GetMLModelResult& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}
    inline GetMLModelResult& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the training <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetTrainingDataSourceId() const{ return m_trainingDataSourceId; }
    inline void SetTrainingDataSourceId(const Aws::String& value) { m_trainingDataSourceId = value; }
    inline void SetTrainingDataSourceId(Aws::String&& value) { m_trainingDataSourceId = std::move(value); }
    inline void SetTrainingDataSourceId(const char* value) { m_trainingDataSourceId.assign(value); }
    inline GetMLModelResult& WithTrainingDataSourceId(const Aws::String& value) { SetTrainingDataSourceId(value); return *this;}
    inline GetMLModelResult& WithTrainingDataSourceId(Aws::String&& value) { SetTrainingDataSourceId(std::move(value)); return *this;}
    inline GetMLModelResult& WithTrainingDataSourceId(const char* value) { SetTrainingDataSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS user account from which the <code>MLModel</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline const Aws::String& GetCreatedByIamUser() const{ return m_createdByIamUser; }
    inline void SetCreatedByIamUser(const Aws::String& value) { m_createdByIamUser = value; }
    inline void SetCreatedByIamUser(Aws::String&& value) { m_createdByIamUser = std::move(value); }
    inline void SetCreatedByIamUser(const char* value) { m_createdByIamUser.assign(value); }
    inline GetMLModelResult& WithCreatedByIamUser(const Aws::String& value) { SetCreatedByIamUser(value); return *this;}
    inline GetMLModelResult& WithCreatedByIamUser(Aws::String&& value) { SetCreatedByIamUser(std::move(value)); return *this;}
    inline GetMLModelResult& WithCreatedByIamUser(const char* value) { SetCreatedByIamUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the <code>MLModel</code> was created. The time is expressed in
     * epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetMLModelResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetMLModelResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent edit to the <code>MLModel</code>. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetMLModelResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetMLModelResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetMLModelResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetMLModelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetMLModelResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the <code>MLModel</code>. This element can have one of
     * the following values:</p> <ul> <li> <p> <code>PENDING</code> - Amazon Machine
     * Learning (Amazon ML) submitted a request to describe a <code>MLModel</code>.</p>
     * </li> <li> <p> <code>INPROGRESS</code> - The request is processing.</p> </li>
     * <li> <p> <code>FAILED</code> - The request did not run to completion. The ML
     * model isn't usable.</p> </li> <li> <p> <code>COMPLETED</code> - The request
     * completed successfully.</p> </li> <li> <p> <code>DELETED</code> - The
     * <code>MLModel</code> is marked as deleted. It isn't usable.</p> </li> </ul>
     */
    inline const EntityStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const EntityStatus& value) { m_status = value; }
    inline void SetStatus(EntityStatus&& value) { m_status = std::move(value); }
    inline GetMLModelResult& WithStatus(const EntityStatus& value) { SetStatus(value); return *this;}
    inline GetMLModelResult& WithStatus(EntityStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline long long GetSizeInBytes() const{ return m_sizeInBytes; }
    inline void SetSizeInBytes(long long value) { m_sizeInBytes = value; }
    inline GetMLModelResult& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current endpoint of the <code>MLModel</code> </p>
     */
    inline const RealtimeEndpointInfo& GetEndpointInfo() const{ return m_endpointInfo; }
    inline void SetEndpointInfo(const RealtimeEndpointInfo& value) { m_endpointInfo = value; }
    inline void SetEndpointInfo(RealtimeEndpointInfo&& value) { m_endpointInfo = std::move(value); }
    inline GetMLModelResult& WithEndpointInfo(const RealtimeEndpointInfo& value) { SetEndpointInfo(value); return *this;}
    inline GetMLModelResult& WithEndpointInfo(RealtimeEndpointInfo&& value) { SetEndpointInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters:</p> <ul> <li> <p> <code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li> <p> <code>sgd.maxPasses</code> - The
     * number of times that the training process traverses the observations to build
     * the <code>MLModel</code>. The value is an integer that ranges from
     * <code>1</code> to <code>10000</code>. The default value is <code>10</code>.</p>
     * </li> <li> <p> <code>sgd.shuffleType</code> - Whether Amazon ML shuffles the
     * training data. Shuffling data improves a model's ability to find the optimal
     * solution for a variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We strongly recommend
     * that you shuffle your data.</p> </li> <li> <p>
     * <code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li> <p>
     * <code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTrainingParameters() const{ return m_trainingParameters; }
    inline void SetTrainingParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_trainingParameters = value; }
    inline void SetTrainingParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_trainingParameters = std::move(value); }
    inline GetMLModelResult& WithTrainingParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetTrainingParameters(value); return *this;}
    inline GetMLModelResult& WithTrainingParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetTrainingParameters(std::move(value)); return *this;}
    inline GetMLModelResult& AddTrainingParameters(const Aws::String& key, const Aws::String& value) { m_trainingParameters.emplace(key, value); return *this; }
    inline GetMLModelResult& AddTrainingParameters(Aws::String&& key, const Aws::String& value) { m_trainingParameters.emplace(std::move(key), value); return *this; }
    inline GetMLModelResult& AddTrainingParameters(const Aws::String& key, Aws::String&& value) { m_trainingParameters.emplace(key, std::move(value)); return *this; }
    inline GetMLModelResult& AddTrainingParameters(Aws::String&& key, Aws::String&& value) { m_trainingParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline GetMLModelResult& AddTrainingParameters(const char* key, Aws::String&& value) { m_trainingParameters.emplace(key, std::move(value)); return *this; }
    inline GetMLModelResult& AddTrainingParameters(Aws::String&& key, const char* value) { m_trainingParameters.emplace(std::move(key), value); return *this; }
    inline GetMLModelResult& AddTrainingParameters(const char* key, const char* value) { m_trainingParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline const Aws::String& GetInputDataLocationS3() const{ return m_inputDataLocationS3; }
    inline void SetInputDataLocationS3(const Aws::String& value) { m_inputDataLocationS3 = value; }
    inline void SetInputDataLocationS3(Aws::String&& value) { m_inputDataLocationS3 = std::move(value); }
    inline void SetInputDataLocationS3(const char* value) { m_inputDataLocationS3.assign(value); }
    inline GetMLModelResult& WithInputDataLocationS3(const Aws::String& value) { SetInputDataLocationS3(value); return *this;}
    inline GetMLModelResult& WithInputDataLocationS3(Aws::String&& value) { SetInputDataLocationS3(std::move(value)); return *this;}
    inline GetMLModelResult& WithInputDataLocationS3(const char* value) { SetInputDataLocationS3(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the <code>MLModel</code> category. The following are the available
     * types: </p> <ul> <li> <p>REGRESSION -- Produces a numeric result. For example,
     * "What price should a house be listed at?"</p> </li> <li> <p>BINARY -- Produces
     * one of two possible results. For example, "Is this an e-commerce website?"</p>
     * </li> <li> <p>MULTICLASS -- Produces one of several possible results. For
     * example, "Is this a HIGH, LOW or MEDIUM risk trade?"</p> </li> </ul>
     */
    inline const MLModelType& GetMLModelType() const{ return m_mLModelType; }
    inline void SetMLModelType(const MLModelType& value) { m_mLModelType = value; }
    inline void SetMLModelType(MLModelType&& value) { m_mLModelType = std::move(value); }
    inline GetMLModelResult& WithMLModelType(const MLModelType& value) { SetMLModelType(value); return *this;}
    inline GetMLModelResult& WithMLModelType(MLModelType&& value) { SetMLModelType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scoring threshold is used in binary classification <code>MLModel</code>
     * models. It marks the boundary between a positive prediction and a negative
     * prediction.</p> <p>Output values greater than or equal to the threshold receive
     * a positive result from the MLModel, such as <code>true</code>. Output values
     * less than the threshold receive a negative response from the MLModel, such as
     * <code>false</code>.</p>
     */
    inline double GetScoreThreshold() const{ return m_scoreThreshold; }
    inline void SetScoreThreshold(double value) { m_scoreThreshold = value; }
    inline GetMLModelResult& WithScoreThreshold(double value) { SetScoreThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent edit to the <code>ScoreThreshold</code>. The time
     * is expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetScoreThresholdLastUpdatedAt() const{ return m_scoreThresholdLastUpdatedAt; }
    inline void SetScoreThresholdLastUpdatedAt(const Aws::Utils::DateTime& value) { m_scoreThresholdLastUpdatedAt = value; }
    inline void SetScoreThresholdLastUpdatedAt(Aws::Utils::DateTime&& value) { m_scoreThresholdLastUpdatedAt = std::move(value); }
    inline GetMLModelResult& WithScoreThresholdLastUpdatedAt(const Aws::Utils::DateTime& value) { SetScoreThresholdLastUpdatedAt(value); return *this;}
    inline GetMLModelResult& WithScoreThresholdLastUpdatedAt(Aws::Utils::DateTime&& value) { SetScoreThresholdLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the file that contains logs of the <code>CreateMLModel</code>
     * operation.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }
    inline void SetLogUri(const Aws::String& value) { m_logUri = value; }
    inline void SetLogUri(Aws::String&& value) { m_logUri = std::move(value); }
    inline void SetLogUri(const char* value) { m_logUri.assign(value); }
    inline GetMLModelResult& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}
    inline GetMLModelResult& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}
    inline GetMLModelResult& WithLogUri(const char* value) { SetLogUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the most recent details about accessing the
     * <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline GetMLModelResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline GetMLModelResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline GetMLModelResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>MLModel</code>, normalized and scaled on computation
     * resources. <code>ComputeTime</code> is only available if the
     * <code>MLModel</code> is in the <code>COMPLETED</code> state.</p>
     */
    inline long long GetComputeTime() const{ return m_computeTime; }
    inline void SetComputeTime(long long value) { m_computeTime = value; }
    inline GetMLModelResult& WithComputeTime(long long value) { SetComputeTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch time when Amazon Machine Learning marked the <code>MLModel</code>
     * as <code>COMPLETED</code> or <code>FAILED</code>. <code>FinishedAt</code> is
     * only available when the <code>MLModel</code> is in the <code>COMPLETED</code> or
     * <code>FAILED</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const{ return m_finishedAt; }
    inline void SetFinishedAt(const Aws::Utils::DateTime& value) { m_finishedAt = value; }
    inline void SetFinishedAt(Aws::Utils::DateTime&& value) { m_finishedAt = std::move(value); }
    inline GetMLModelResult& WithFinishedAt(const Aws::Utils::DateTime& value) { SetFinishedAt(value); return *this;}
    inline GetMLModelResult& WithFinishedAt(Aws::Utils::DateTime&& value) { SetFinishedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch time when Amazon Machine Learning marked the <code>MLModel</code>
     * as <code>INPROGRESS</code>. <code>StartedAt</code> isn't available if the
     * <code>MLModel</code> is in the <code>PENDING</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }
    inline GetMLModelResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline GetMLModelResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recipe to use when training the <code>MLModel</code>. The
     * <code>Recipe</code> provides detailed information about the observation data to
     * use during training, and manipulations to perform on the observation data during
     * training.</p> <p> <b>Note:</b> This parameter is provided as part of the verbose
     * format.</p>
     */
    inline const Aws::String& GetRecipe() const{ return m_recipe; }
    inline void SetRecipe(const Aws::String& value) { m_recipe = value; }
    inline void SetRecipe(Aws::String&& value) { m_recipe = std::move(value); }
    inline void SetRecipe(const char* value) { m_recipe.assign(value); }
    inline GetMLModelResult& WithRecipe(const Aws::String& value) { SetRecipe(value); return *this;}
    inline GetMLModelResult& WithRecipe(Aws::String&& value) { SetRecipe(std::move(value)); return *this;}
    inline GetMLModelResult& WithRecipe(const char* value) { SetRecipe(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema used by all of the data files referenced by the
     * <code>DataSource</code>.</p> <p> <b>Note:</b> This parameter is provided as part
     * of the verbose format.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }
    inline void SetSchema(const Aws::String& value) { m_schema = value; }
    inline void SetSchema(Aws::String&& value) { m_schema = std::move(value); }
    inline void SetSchema(const char* value) { m_schema.assign(value); }
    inline GetMLModelResult& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}
    inline GetMLModelResult& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}
    inline GetMLModelResult& WithSchema(const char* value) { SetSchema(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMLModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMLModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMLModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_mLModelId;

    Aws::String m_trainingDataSourceId;

    Aws::String m_createdByIamUser;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_name;

    EntityStatus m_status;

    long long m_sizeInBytes;

    RealtimeEndpointInfo m_endpointInfo;

    Aws::Map<Aws::String, Aws::String> m_trainingParameters;

    Aws::String m_inputDataLocationS3;

    MLModelType m_mLModelType;

    double m_scoreThreshold;

    Aws::Utils::DateTime m_scoreThresholdLastUpdatedAt;

    Aws::String m_logUri;

    Aws::String m_message;

    long long m_computeTime;

    Aws::Utils::DateTime m_finishedAt;

    Aws::Utils::DateTime m_startedAt;

    Aws::String m_recipe;

    Aws::String m_schema;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
