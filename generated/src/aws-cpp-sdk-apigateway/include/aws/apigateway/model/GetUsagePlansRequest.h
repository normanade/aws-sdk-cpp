﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The GET request to get all the usage plans of the caller's
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsagePlansRequest">AWS
   * API Reference</a></p>
   */
  class GetUsagePlansRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetUsagePlansRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUsagePlans"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }
    inline GetUsagePlansRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}
    inline GetUsagePlansRequest& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}
    inline GetUsagePlansRequest& WithPosition(const char* value) { SetPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the API key associated with the usage plans.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }
    inline GetUsagePlansRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline GetUsagePlansRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline GetUsagePlansRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetUsagePlansRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_position;
    bool m_positionHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
