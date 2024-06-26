﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DeleteFacesRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DeleteFacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFaces"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Collection from which to remove the specific faces.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::move(value); }
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }
    inline DeleteFacesRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}
    inline DeleteFacesRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(std::move(value)); return *this;}
    inline DeleteFacesRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of face IDs to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFaceIds() const{ return m_faceIds; }
    inline bool FaceIdsHasBeenSet() const { return m_faceIdsHasBeenSet; }
    inline void SetFaceIds(const Aws::Vector<Aws::String>& value) { m_faceIdsHasBeenSet = true; m_faceIds = value; }
    inline void SetFaceIds(Aws::Vector<Aws::String>&& value) { m_faceIdsHasBeenSet = true; m_faceIds = std::move(value); }
    inline DeleteFacesRequest& WithFaceIds(const Aws::Vector<Aws::String>& value) { SetFaceIds(value); return *this;}
    inline DeleteFacesRequest& WithFaceIds(Aws::Vector<Aws::String>&& value) { SetFaceIds(std::move(value)); return *this;}
    inline DeleteFacesRequest& AddFaceIds(const Aws::String& value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(value); return *this; }
    inline DeleteFacesRequest& AddFaceIds(Aws::String&& value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(std::move(value)); return *this; }
    inline DeleteFacesRequest& AddFaceIds(const char* value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_faceIds;
    bool m_faceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
