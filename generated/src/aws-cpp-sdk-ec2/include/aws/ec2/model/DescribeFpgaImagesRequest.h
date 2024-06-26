﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeFpgaImagesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeFpgaImagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFpgaImages"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeFpgaImagesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AFI IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFpgaImageIds() const{ return m_fpgaImageIds; }
    inline bool FpgaImageIdsHasBeenSet() const { return m_fpgaImageIdsHasBeenSet; }
    inline void SetFpgaImageIds(const Aws::Vector<Aws::String>& value) { m_fpgaImageIdsHasBeenSet = true; m_fpgaImageIds = value; }
    inline void SetFpgaImageIds(Aws::Vector<Aws::String>&& value) { m_fpgaImageIdsHasBeenSet = true; m_fpgaImageIds = std::move(value); }
    inline DescribeFpgaImagesRequest& WithFpgaImageIds(const Aws::Vector<Aws::String>& value) { SetFpgaImageIds(value); return *this;}
    inline DescribeFpgaImagesRequest& WithFpgaImageIds(Aws::Vector<Aws::String>&& value) { SetFpgaImageIds(std::move(value)); return *this;}
    inline DescribeFpgaImagesRequest& AddFpgaImageIds(const Aws::String& value) { m_fpgaImageIdsHasBeenSet = true; m_fpgaImageIds.push_back(value); return *this; }
    inline DescribeFpgaImagesRequest& AddFpgaImageIds(Aws::String&& value) { m_fpgaImageIdsHasBeenSet = true; m_fpgaImageIds.push_back(std::move(value)); return *this; }
    inline DescribeFpgaImagesRequest& AddFpgaImageIds(const char* value) { m_fpgaImageIdsHasBeenSet = true; m_fpgaImageIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the AFI by owner. Specify an Amazon Web Services account ID,
     * <code>self</code> (owner is the sender of the request), or an Amazon Web
     * Services owner alias (valid values are <code>amazon</code> |
     * <code>aws-marketplace</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetOwners() const{ return m_owners; }
    inline bool OwnersHasBeenSet() const { return m_ownersHasBeenSet; }
    inline void SetOwners(const Aws::Vector<Aws::String>& value) { m_ownersHasBeenSet = true; m_owners = value; }
    inline void SetOwners(Aws::Vector<Aws::String>&& value) { m_ownersHasBeenSet = true; m_owners = std::move(value); }
    inline DescribeFpgaImagesRequest& WithOwners(const Aws::Vector<Aws::String>& value) { SetOwners(value); return *this;}
    inline DescribeFpgaImagesRequest& WithOwners(Aws::Vector<Aws::String>&& value) { SetOwners(std::move(value)); return *this;}
    inline DescribeFpgaImagesRequest& AddOwners(const Aws::String& value) { m_ownersHasBeenSet = true; m_owners.push_back(value); return *this; }
    inline DescribeFpgaImagesRequest& AddOwners(Aws::String&& value) { m_ownersHasBeenSet = true; m_owners.push_back(std::move(value)); return *this; }
    inline DescribeFpgaImagesRequest& AddOwners(const char* value) { m_ownersHasBeenSet = true; m_owners.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>create-time</code> - The creation time
     * of the AFI.</p> </li> <li> <p> <code>fpga-image-id</code> - The FPGA image
     * identifier (AFI ID).</p> </li> <li> <p> <code>fpga-image-global-id</code> - The
     * global FPGA image identifier (AGFI ID).</p> </li> <li> <p> <code>name</code> -
     * The name of the AFI.</p> </li> <li> <p> <code>owner-id</code> - The Amazon Web
     * Services account ID of the AFI owner.</p> </li> <li> <p>
     * <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>shell-version</code> - The version of the Amazon Web Services Shell that
     * was used to create the bitstream.</p> </li> <li> <p> <code>state</code> - The
     * state of the AFI (<code>pending</code> | <code>failed</code> |
     * <code>available</code> | <code>unavailable</code>).</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>update-time</code> - The time of the most recent update.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeFpgaImagesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeFpgaImagesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeFpgaImagesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeFpgaImagesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeFpgaImagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeFpgaImagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeFpgaImagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeFpgaImagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_fpgaImageIds;
    bool m_fpgaImageIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_owners;
    bool m_ownersHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
