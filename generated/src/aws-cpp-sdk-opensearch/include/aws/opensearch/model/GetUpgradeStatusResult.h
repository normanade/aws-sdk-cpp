﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/UpgradeStep.h>
#include <aws/opensearch/model/UpgradeStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for the response returned by the <code>GetUpgradeStatus</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetUpgradeStatusResponse">AWS
   * API Reference</a></p>
   */
  class GetUpgradeStatusResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API GetUpgradeStatusResult();
    AWS_OPENSEARCHSERVICE_API GetUpgradeStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API GetUpgradeStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>One of three steps that an upgrade or upgrade eligibility check goes
     * through.</p>
     */
    inline const UpgradeStep& GetUpgradeStep() const{ return m_upgradeStep; }
    inline void SetUpgradeStep(const UpgradeStep& value) { m_upgradeStep = value; }
    inline void SetUpgradeStep(UpgradeStep&& value) { m_upgradeStep = std::move(value); }
    inline GetUpgradeStatusResult& WithUpgradeStep(const UpgradeStep& value) { SetUpgradeStep(value); return *this;}
    inline GetUpgradeStatusResult& WithUpgradeStep(UpgradeStep&& value) { SetUpgradeStep(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the current step that an upgrade is on.</p>
     */
    inline const UpgradeStatus& GetStepStatus() const{ return m_stepStatus; }
    inline void SetStepStatus(const UpgradeStatus& value) { m_stepStatus = value; }
    inline void SetStepStatus(UpgradeStatus&& value) { m_stepStatus = std::move(value); }
    inline GetUpgradeStatusResult& WithStepStatus(const UpgradeStatus& value) { SetStepStatus(value); return *this;}
    inline GetUpgradeStatusResult& WithStepStatus(UpgradeStatus&& value) { SetStepStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that describes the update.</p>
     */
    inline const Aws::String& GetUpgradeName() const{ return m_upgradeName; }
    inline void SetUpgradeName(const Aws::String& value) { m_upgradeName = value; }
    inline void SetUpgradeName(Aws::String&& value) { m_upgradeName = std::move(value); }
    inline void SetUpgradeName(const char* value) { m_upgradeName.assign(value); }
    inline GetUpgradeStatusResult& WithUpgradeName(const Aws::String& value) { SetUpgradeName(value); return *this;}
    inline GetUpgradeStatusResult& WithUpgradeName(Aws::String&& value) { SetUpgradeName(std::move(value)); return *this;}
    inline GetUpgradeStatusResult& WithUpgradeName(const char* value) { SetUpgradeName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetUpgradeStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetUpgradeStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetUpgradeStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    UpgradeStep m_upgradeStep;

    UpgradeStatus m_stepStatus;

    Aws::String m_upgradeName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
