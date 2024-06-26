﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FilterAction.h>
#include <aws/guardduty/model/FindingCriteria.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace GuardDuty
{
namespace Model
{
  class GetFilterResult
  {
  public:
    AWS_GUARDDUTY_API GetFilterResult();
    AWS_GUARDDUTY_API GetFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the filter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetFilterResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetFilterResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetFilterResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the filter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetFilterResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetFilterResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetFilterResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline const FilterAction& GetAction() const{ return m_action; }
    inline void SetAction(const FilterAction& value) { m_action = value; }
    inline void SetAction(FilterAction&& value) { m_action = std::move(value); }
    inline GetFilterResult& WithAction(const FilterAction& value) { SetAction(value); return *this;}
    inline GetFilterResult& WithAction(FilterAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline int GetRank() const{ return m_rank; }
    inline void SetRank(int value) { m_rank = value; }
    inline GetFilterResult& WithRank(int value) { SetRank(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteria = value; }
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteria = std::move(value); }
    inline GetFilterResult& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}
    inline GetFilterResult& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of the filter resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetFilterResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetFilterResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetFilterResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetFilterResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetFilterResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetFilterResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetFilterResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetFilterResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetFilterResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFilterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFilterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFilterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_description;

    FilterAction m_action;

    int m_rank;

    FindingCriteria m_findingCriteria;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
