﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/Command.h>
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
namespace EMR
{
namespace Model
{
  /**
   * <p>This output contains the bootstrap actions detail.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListBootstrapActionsOutput">AWS
   * API Reference</a></p>
   */
  class ListBootstrapActionsResult
  {
  public:
    AWS_EMR_API ListBootstrapActionsResult();
    AWS_EMR_API ListBootstrapActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListBootstrapActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The bootstrap actions associated with the cluster.</p>
     */
    inline const Aws::Vector<Command>& GetBootstrapActions() const{ return m_bootstrapActions; }
    inline void SetBootstrapActions(const Aws::Vector<Command>& value) { m_bootstrapActions = value; }
    inline void SetBootstrapActions(Aws::Vector<Command>&& value) { m_bootstrapActions = std::move(value); }
    inline ListBootstrapActionsResult& WithBootstrapActions(const Aws::Vector<Command>& value) { SetBootstrapActions(value); return *this;}
    inline ListBootstrapActionsResult& WithBootstrapActions(Aws::Vector<Command>&& value) { SetBootstrapActions(std::move(value)); return *this;}
    inline ListBootstrapActionsResult& AddBootstrapActions(const Command& value) { m_bootstrapActions.push_back(value); return *this; }
    inline ListBootstrapActionsResult& AddBootstrapActions(Command&& value) { m_bootstrapActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline ListBootstrapActionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListBootstrapActionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListBootstrapActionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBootstrapActionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBootstrapActionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBootstrapActionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Command> m_bootstrapActions;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
