﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/ElasticTranscoderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The <code>DeletePresetRequest</code> structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/DeletePresetRequest">AWS
   * API Reference</a></p>
   */
  class DeletePresetRequest : public ElasticTranscoderRequest
  {
  public:
    AWS_ELASTICTRANSCODER_API DeletePresetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePreset"; }

    AWS_ELASTICTRANSCODER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the preset for which you want to get detailed
     * information.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DeletePresetRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeletePresetRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeletePresetRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
