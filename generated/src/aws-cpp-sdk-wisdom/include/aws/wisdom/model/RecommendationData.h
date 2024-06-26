﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/RelevanceLevel.h>
#include <aws/wisdom/model/RecommendationType.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>Information about the recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/RecommendationData">AWS
   * API Reference</a></p>
   */
  class RecommendationData
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API RecommendationData();
    AWS_CONNECTWISDOMSERVICE_API RecommendationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API RecommendationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The recommended document.</p>
     */
    inline const Document& GetDocument() const{ return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    inline void SetDocument(const Document& value) { m_documentHasBeenSet = true; m_document = value; }
    inline void SetDocument(Document&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }
    inline RecommendationData& WithDocument(const Document& value) { SetDocument(value); return *this;}
    inline RecommendationData& WithDocument(Document&& value) { SetDocument(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }
    inline RecommendationData& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}
    inline RecommendationData& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}
    inline RecommendationData& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relevance level of the recommendation.</p>
     */
    inline const RelevanceLevel& GetRelevanceLevel() const{ return m_relevanceLevel; }
    inline bool RelevanceLevelHasBeenSet() const { return m_relevanceLevelHasBeenSet; }
    inline void SetRelevanceLevel(const RelevanceLevel& value) { m_relevanceLevelHasBeenSet = true; m_relevanceLevel = value; }
    inline void SetRelevanceLevel(RelevanceLevel&& value) { m_relevanceLevelHasBeenSet = true; m_relevanceLevel = std::move(value); }
    inline RecommendationData& WithRelevanceLevel(const RelevanceLevel& value) { SetRelevanceLevel(value); return *this;}
    inline RecommendationData& WithRelevanceLevel(RelevanceLevel&& value) { SetRelevanceLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relevance score of the recommendation.</p>
     */
    inline double GetRelevanceScore() const{ return m_relevanceScore; }
    inline bool RelevanceScoreHasBeenSet() const { return m_relevanceScoreHasBeenSet; }
    inline void SetRelevanceScore(double value) { m_relevanceScoreHasBeenSet = true; m_relevanceScore = value; }
    inline RecommendationData& WithRelevanceScore(double value) { SetRelevanceScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of recommendation.</p>
     */
    inline const RecommendationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RecommendationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RecommendationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RecommendationData& WithType(const RecommendationType& value) { SetType(value); return *this;}
    inline RecommendationData& WithType(RecommendationType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Document m_document;
    bool m_documentHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    RelevanceLevel m_relevanceLevel;
    bool m_relevanceLevelHasBeenSet = false;

    double m_relevanceScore;
    bool m_relevanceScoreHasBeenSet = false;

    RecommendationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
