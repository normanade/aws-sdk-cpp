﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ScheduledInstance.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output of DescribeScheduledInstances.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstancesResult">AWS
   * API Reference</a></p>
   */
  class DescribeScheduledInstancesResponse
  {
  public:
    AWS_EC2_API DescribeScheduledInstancesResponse();
    AWS_EC2_API DescribeScheduledInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeScheduledInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeScheduledInstancesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeScheduledInstancesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeScheduledInstancesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Scheduled Instances.</p>
     */
    inline const Aws::Vector<ScheduledInstance>& GetScheduledInstanceSet() const{ return m_scheduledInstanceSet; }
    inline void SetScheduledInstanceSet(const Aws::Vector<ScheduledInstance>& value) { m_scheduledInstanceSet = value; }
    inline void SetScheduledInstanceSet(Aws::Vector<ScheduledInstance>&& value) { m_scheduledInstanceSet = std::move(value); }
    inline DescribeScheduledInstancesResponse& WithScheduledInstanceSet(const Aws::Vector<ScheduledInstance>& value) { SetScheduledInstanceSet(value); return *this;}
    inline DescribeScheduledInstancesResponse& WithScheduledInstanceSet(Aws::Vector<ScheduledInstance>&& value) { SetScheduledInstanceSet(std::move(value)); return *this;}
    inline DescribeScheduledInstancesResponse& AddScheduledInstanceSet(const ScheduledInstance& value) { m_scheduledInstanceSet.push_back(value); return *this; }
    inline DescribeScheduledInstancesResponse& AddScheduledInstanceSet(ScheduledInstance&& value) { m_scheduledInstanceSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeScheduledInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeScheduledInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ScheduledInstance> m_scheduledInstanceSet;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
