﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
#include <aws/route53/model/ResourceRecordSet.h>
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
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains list information for the resource record
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListResourceRecordSetsResponse">AWS
   * API Reference</a></p>
   */
  class ListResourceRecordSetsResult
  {
  public:
    AWS_ROUTE53_API ListResourceRecordSetsResult();
    AWS_ROUTE53_API ListResourceRecordSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListResourceRecordSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about multiple resource record sets.</p>
     */
    inline const Aws::Vector<ResourceRecordSet>& GetResourceRecordSets() const{ return m_resourceRecordSets; }
    inline void SetResourceRecordSets(const Aws::Vector<ResourceRecordSet>& value) { m_resourceRecordSets = value; }
    inline void SetResourceRecordSets(Aws::Vector<ResourceRecordSet>&& value) { m_resourceRecordSets = std::move(value); }
    inline ListResourceRecordSetsResult& WithResourceRecordSets(const Aws::Vector<ResourceRecordSet>& value) { SetResourceRecordSets(value); return *this;}
    inline ListResourceRecordSetsResult& WithResourceRecordSets(Aws::Vector<ResourceRecordSet>&& value) { SetResourceRecordSets(std::move(value)); return *this;}
    inline ListResourceRecordSetsResult& AddResourceRecordSets(const ResourceRecordSet& value) { m_resourceRecordSets.push_back(value); return *this; }
    inline ListResourceRecordSetsResult& AddResourceRecordSets(ResourceRecordSet&& value) { m_resourceRecordSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether more resource record sets remain to be listed.
     * If your results were truncated, you can make a follow-up pagination request by
     * using the <code>NextRecordName</code> element.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }
    inline ListResourceRecordSetsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the results were truncated, the name of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline const Aws::String& GetNextRecordName() const{ return m_nextRecordName; }
    inline void SetNextRecordName(const Aws::String& value) { m_nextRecordName = value; }
    inline void SetNextRecordName(Aws::String&& value) { m_nextRecordName = std::move(value); }
    inline void SetNextRecordName(const char* value) { m_nextRecordName.assign(value); }
    inline ListResourceRecordSetsResult& WithNextRecordName(const Aws::String& value) { SetNextRecordName(value); return *this;}
    inline ListResourceRecordSetsResult& WithNextRecordName(Aws::String&& value) { SetNextRecordName(std::move(value)); return *this;}
    inline ListResourceRecordSetsResult& WithNextRecordName(const char* value) { SetNextRecordName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the results were truncated, the type of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline const RRType& GetNextRecordType() const{ return m_nextRecordType; }
    inline void SetNextRecordType(const RRType& value) { m_nextRecordType = value; }
    inline void SetNextRecordType(RRType&& value) { m_nextRecordType = std::move(value); }
    inline ListResourceRecordSetsResult& WithNextRecordType(const RRType& value) { SetNextRecordType(value); return *this;}
    inline ListResourceRecordSetsResult& WithNextRecordType(RRType&& value) { SetNextRecordType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>Resource record sets that have a routing policy other than simple:</i> If
     * results were truncated for a given DNS name and type, the value of
     * <code>SetIdentifier</code> for the next resource record set that has the current
     * DNS name and type.</p> <p>For information about routing policies, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html">Choosing
     * a Routing Policy</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     */
    inline const Aws::String& GetNextRecordIdentifier() const{ return m_nextRecordIdentifier; }
    inline void SetNextRecordIdentifier(const Aws::String& value) { m_nextRecordIdentifier = value; }
    inline void SetNextRecordIdentifier(Aws::String&& value) { m_nextRecordIdentifier = std::move(value); }
    inline void SetNextRecordIdentifier(const char* value) { m_nextRecordIdentifier.assign(value); }
    inline ListResourceRecordSetsResult& WithNextRecordIdentifier(const Aws::String& value) { SetNextRecordIdentifier(value); return *this;}
    inline ListResourceRecordSetsResult& WithNextRecordIdentifier(Aws::String&& value) { SetNextRecordIdentifier(std::move(value)); return *this;}
    inline ListResourceRecordSetsResult& WithNextRecordIdentifier(const char* value) { SetNextRecordIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records you requested.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = std::move(value); }
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }
    inline ListResourceRecordSetsResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}
    inline ListResourceRecordSetsResult& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}
    inline ListResourceRecordSetsResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResourceRecordSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResourceRecordSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResourceRecordSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceRecordSet> m_resourceRecordSets;

    bool m_isTruncated;

    Aws::String m_nextRecordName;

    RRType m_nextRecordType;

    Aws::String m_nextRecordIdentifier;

    Aws::String m_maxItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
