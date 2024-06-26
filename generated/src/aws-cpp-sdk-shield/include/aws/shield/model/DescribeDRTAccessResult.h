﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Shield
{
namespace Model
{
  class DescribeDRTAccessResult
  {
  public:
    AWS_SHIELD_API DescribeDRTAccessResult();
    AWS_SHIELD_API DescribeDRTAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API DescribeDRTAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role the SRT used to access your Amazon
     * Web Services account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeDRTAccessResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeDRTAccessResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeDRTAccessResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Amazon S3 buckets accessed by the SRT.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogBucketList() const{ return m_logBucketList; }
    inline void SetLogBucketList(const Aws::Vector<Aws::String>& value) { m_logBucketList = value; }
    inline void SetLogBucketList(Aws::Vector<Aws::String>&& value) { m_logBucketList = std::move(value); }
    inline DescribeDRTAccessResult& WithLogBucketList(const Aws::Vector<Aws::String>& value) { SetLogBucketList(value); return *this;}
    inline DescribeDRTAccessResult& WithLogBucketList(Aws::Vector<Aws::String>&& value) { SetLogBucketList(std::move(value)); return *this;}
    inline DescribeDRTAccessResult& AddLogBucketList(const Aws::String& value) { m_logBucketList.push_back(value); return *this; }
    inline DescribeDRTAccessResult& AddLogBucketList(Aws::String&& value) { m_logBucketList.push_back(std::move(value)); return *this; }
    inline DescribeDRTAccessResult& AddLogBucketList(const char* value) { m_logBucketList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDRTAccessResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDRTAccessResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDRTAccessResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;

    Aws::Vector<Aws::String> m_logBucketList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
