﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>DeleteTapeOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteTapeOutput">AWS
   * API Reference</a></p>
   */
  class DeleteTapeResult
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteTapeResult();
    AWS_STORAGEGATEWAY_API DeleteTapeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DeleteTapeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the deleted virtual tape.</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }
    inline void SetTapeARN(const Aws::String& value) { m_tapeARN = value; }
    inline void SetTapeARN(Aws::String&& value) { m_tapeARN = std::move(value); }
    inline void SetTapeARN(const char* value) { m_tapeARN.assign(value); }
    inline DeleteTapeResult& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}
    inline DeleteTapeResult& WithTapeARN(Aws::String&& value) { SetTapeARN(std::move(value)); return *this;}
    inline DeleteTapeResult& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteTapeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteTapeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteTapeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_tapeARN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
