﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ActionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/Tag.h>
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
namespace CodePipeline
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>CreateCustomActionType</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CreateCustomActionTypeOutput">AWS
   * API Reference</a></p>
   */
  class CreateCustomActionTypeResult
  {
  public:
    AWS_CODEPIPELINE_API CreateCustomActionTypeResult();
    AWS_CODEPIPELINE_API CreateCustomActionTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API CreateCustomActionTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns information about the details of an action type.</p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }
    inline void SetActionType(const ActionType& value) { m_actionType = value; }
    inline void SetActionType(ActionType&& value) { m_actionType = std::move(value); }
    inline CreateCustomActionTypeResult& WithActionType(const ActionType& value) { SetActionType(value); return *this;}
    inline CreateCustomActionTypeResult& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the tags applied to the custom action.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline CreateCustomActionTypeResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateCustomActionTypeResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateCustomActionTypeResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline CreateCustomActionTypeResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCustomActionTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCustomActionTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCustomActionTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ActionType m_actionType;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
