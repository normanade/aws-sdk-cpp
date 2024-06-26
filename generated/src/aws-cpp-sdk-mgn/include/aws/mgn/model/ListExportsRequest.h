﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/model/ListExportsRequestFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   * <p>List export request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListExportsRequest">AWS
   * API Reference</a></p>
   */
  class ListExportsRequest : public MgnRequest
  {
  public:
    AWS_MGN_API ListExportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExports"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const ListExportsRequestFilters& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const ListExportsRequestFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(ListExportsRequestFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListExportsRequest& WithFilters(const ListExportsRequestFilters& value) { SetFilters(value); return *this;}
    inline ListExportsRequest& WithFilters(ListExportsRequestFilters&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List export request max results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListExportsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List export request next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListExportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListExportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListExportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    ListExportsRequestFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
