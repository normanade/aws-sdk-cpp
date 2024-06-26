﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ElasticsearchClusterConfig.h>
#include <aws/es/model/OptionStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Specifies the configuration status for the specified Elasticsearch
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ElasticsearchClusterConfigStatus">AWS
   * API Reference</a></p>
   */
  class ElasticsearchClusterConfigStatus
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchClusterConfigStatus();
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchClusterConfigStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchClusterConfigStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the cluster configuration for the specified Elasticsearch
     * domain.</p>
     */
    inline const ElasticsearchClusterConfig& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const ElasticsearchClusterConfig& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(ElasticsearchClusterConfig&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline ElasticsearchClusterConfigStatus& WithOptions(const ElasticsearchClusterConfig& value) { SetOptions(value); return *this;}
    inline ElasticsearchClusterConfigStatus& WithOptions(ElasticsearchClusterConfig&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the status of the configuration for the specified Elasticsearch
     * domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ElasticsearchClusterConfigStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}
    inline ElasticsearchClusterConfigStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    ElasticsearchClusterConfig m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
