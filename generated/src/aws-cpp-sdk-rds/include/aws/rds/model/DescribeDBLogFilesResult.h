﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DescribeDBLogFilesDetails.h>
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
namespace RDS
{
namespace Model
{
  /**
   * <p>The response from a call to <code>DescribeDBLogFiles</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBLogFilesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDBLogFilesResult
  {
  public:
    AWS_RDS_API DescribeDBLogFilesResult();
    AWS_RDS_API DescribeDBLogFilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBLogFilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The DB log files returned.</p>
     */
    inline const Aws::Vector<DescribeDBLogFilesDetails>& GetDescribeDBLogFiles() const{ return m_describeDBLogFiles; }
    inline void SetDescribeDBLogFiles(const Aws::Vector<DescribeDBLogFilesDetails>& value) { m_describeDBLogFiles = value; }
    inline void SetDescribeDBLogFiles(Aws::Vector<DescribeDBLogFilesDetails>&& value) { m_describeDBLogFiles = std::move(value); }
    inline DescribeDBLogFilesResult& WithDescribeDBLogFiles(const Aws::Vector<DescribeDBLogFilesDetails>& value) { SetDescribeDBLogFiles(value); return *this;}
    inline DescribeDBLogFilesResult& WithDescribeDBLogFiles(Aws::Vector<DescribeDBLogFilesDetails>&& value) { SetDescribeDBLogFiles(std::move(value)); return *this;}
    inline DescribeDBLogFilesResult& AddDescribeDBLogFiles(const DescribeDBLogFilesDetails& value) { m_describeDBLogFiles.push_back(value); return *this; }
    inline DescribeDBLogFilesResult& AddDescribeDBLogFiles(DescribeDBLogFilesDetails&& value) { m_describeDBLogFiles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeDBLogFiles</code> request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeDBLogFilesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeDBLogFilesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeDBLogFilesResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeDBLogFilesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeDBLogFilesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DescribeDBLogFilesDetails> m_describeDBLogFiles;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
