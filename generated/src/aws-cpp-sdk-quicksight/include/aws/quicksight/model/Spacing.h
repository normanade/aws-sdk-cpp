﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration of spacing (often a margin or padding).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Spacing">AWS
   * API Reference</a></p>
   */
  class Spacing
  {
  public:
    AWS_QUICKSIGHT_API Spacing();
    AWS_QUICKSIGHT_API Spacing(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Spacing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Define the top spacing.</p>
     */
    inline const Aws::String& GetTop() const{ return m_top; }
    inline bool TopHasBeenSet() const { return m_topHasBeenSet; }
    inline void SetTop(const Aws::String& value) { m_topHasBeenSet = true; m_top = value; }
    inline void SetTop(Aws::String&& value) { m_topHasBeenSet = true; m_top = std::move(value); }
    inline void SetTop(const char* value) { m_topHasBeenSet = true; m_top.assign(value); }
    inline Spacing& WithTop(const Aws::String& value) { SetTop(value); return *this;}
    inline Spacing& WithTop(Aws::String&& value) { SetTop(std::move(value)); return *this;}
    inline Spacing& WithTop(const char* value) { SetTop(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define the bottom spacing.</p>
     */
    inline const Aws::String& GetBottom() const{ return m_bottom; }
    inline bool BottomHasBeenSet() const { return m_bottomHasBeenSet; }
    inline void SetBottom(const Aws::String& value) { m_bottomHasBeenSet = true; m_bottom = value; }
    inline void SetBottom(Aws::String&& value) { m_bottomHasBeenSet = true; m_bottom = std::move(value); }
    inline void SetBottom(const char* value) { m_bottomHasBeenSet = true; m_bottom.assign(value); }
    inline Spacing& WithBottom(const Aws::String& value) { SetBottom(value); return *this;}
    inline Spacing& WithBottom(Aws::String&& value) { SetBottom(std::move(value)); return *this;}
    inline Spacing& WithBottom(const char* value) { SetBottom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define the left spacing.</p>
     */
    inline const Aws::String& GetLeft() const{ return m_left; }
    inline bool LeftHasBeenSet() const { return m_leftHasBeenSet; }
    inline void SetLeft(const Aws::String& value) { m_leftHasBeenSet = true; m_left = value; }
    inline void SetLeft(Aws::String&& value) { m_leftHasBeenSet = true; m_left = std::move(value); }
    inline void SetLeft(const char* value) { m_leftHasBeenSet = true; m_left.assign(value); }
    inline Spacing& WithLeft(const Aws::String& value) { SetLeft(value); return *this;}
    inline Spacing& WithLeft(Aws::String&& value) { SetLeft(std::move(value)); return *this;}
    inline Spacing& WithLeft(const char* value) { SetLeft(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define the right spacing.</p>
     */
    inline const Aws::String& GetRight() const{ return m_right; }
    inline bool RightHasBeenSet() const { return m_rightHasBeenSet; }
    inline void SetRight(const Aws::String& value) { m_rightHasBeenSet = true; m_right = value; }
    inline void SetRight(Aws::String&& value) { m_rightHasBeenSet = true; m_right = std::move(value); }
    inline void SetRight(const char* value) { m_rightHasBeenSet = true; m_right.assign(value); }
    inline Spacing& WithRight(const Aws::String& value) { SetRight(value); return *this;}
    inline Spacing& WithRight(Aws::String&& value) { SetRight(std::move(value)); return *this;}
    inline Spacing& WithRight(const char* value) { SetRight(value); return *this;}
    ///@}
  private:

    Aws::String m_top;
    bool m_topHasBeenSet = false;

    Aws::String m_bottom;
    bool m_bottomHasBeenSet = false;

    Aws::String m_left;
    bool m_leftHasBeenSet = false;

    Aws::String m_right;
    bool m_rightHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
