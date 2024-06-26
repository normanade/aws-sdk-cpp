﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/LayoutContent.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ConnectCases
{
namespace Model
{
  class GetLayoutResult
  {
  public:
    AWS_CONNECTCASES_API GetLayoutResult();
    AWS_CONNECTCASES_API GetLayoutResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API GetLayoutResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about which fields will be present in the layout, the order of
     * the fields, and read-only attribute of the field. </p>
     */
    inline const LayoutContent& GetContent() const{ return m_content; }
    inline void SetContent(const LayoutContent& value) { m_content = value; }
    inline void SetContent(LayoutContent&& value) { m_content = std::move(value); }
    inline GetLayoutResult& WithContent(const LayoutContent& value) { SetContent(value); return *this;}
    inline GetLayoutResult& WithContent(LayoutContent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp at which the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }
    inline GetLayoutResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline GetLayoutResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Denotes whether or not the resource has been deleted.</p>
     */
    inline bool GetDeleted() const{ return m_deleted; }
    inline void SetDeleted(bool value) { m_deleted = value; }
    inline GetLayoutResult& WithDeleted(bool value) { SetDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp at which the resource was created or last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline GetLayoutResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline GetLayoutResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline const Aws::String& GetLayoutArn() const{ return m_layoutArn; }
    inline void SetLayoutArn(const Aws::String& value) { m_layoutArn = value; }
    inline void SetLayoutArn(Aws::String&& value) { m_layoutArn = std::move(value); }
    inline void SetLayoutArn(const char* value) { m_layoutArn.assign(value); }
    inline GetLayoutResult& WithLayoutArn(const Aws::String& value) { SetLayoutArn(value); return *this;}
    inline GetLayoutResult& WithLayoutArn(Aws::String&& value) { SetLayoutArn(std::move(value)); return *this;}
    inline GetLayoutResult& WithLayoutArn(const char* value) { SetLayoutArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline const Aws::String& GetLayoutId() const{ return m_layoutId; }
    inline void SetLayoutId(const Aws::String& value) { m_layoutId = value; }
    inline void SetLayoutId(Aws::String&& value) { m_layoutId = std::move(value); }
    inline void SetLayoutId(const char* value) { m_layoutId.assign(value); }
    inline GetLayoutResult& WithLayoutId(const Aws::String& value) { SetLayoutId(value); return *this;}
    inline GetLayoutResult& WithLayoutId(Aws::String&& value) { SetLayoutId(std::move(value)); return *this;}
    inline GetLayoutResult& WithLayoutId(const char* value) { SetLayoutId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the layout. It must be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetLayoutResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetLayoutResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetLayoutResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetLayoutResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetLayoutResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetLayoutResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetLayoutResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetLayoutResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetLayoutResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetLayoutResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetLayoutResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetLayoutResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLayoutResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLayoutResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLayoutResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    LayoutContent m_content;

    Aws::Utils::DateTime m_createdTime;

    bool m_deleted;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_layoutArn;

    Aws::String m_layoutId;

    Aws::String m_name;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
