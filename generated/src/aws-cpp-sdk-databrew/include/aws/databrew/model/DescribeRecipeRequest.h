﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class DescribeRecipeRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API DescribeRecipeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRecipe"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;

    AWS_GLUEDATABREW_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the recipe to be described.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DescribeRecipeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeRecipeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeRecipeRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recipe version identifier. If this parameter isn't specified, then the
     * latest published version is returned.</p>
     */
    inline const Aws::String& GetRecipeVersion() const{ return m_recipeVersion; }
    inline bool RecipeVersionHasBeenSet() const { return m_recipeVersionHasBeenSet; }
    inline void SetRecipeVersion(const Aws::String& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = value; }
    inline void SetRecipeVersion(Aws::String&& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = std::move(value); }
    inline void SetRecipeVersion(const char* value) { m_recipeVersionHasBeenSet = true; m_recipeVersion.assign(value); }
    inline DescribeRecipeRequest& WithRecipeVersion(const Aws::String& value) { SetRecipeVersion(value); return *this;}
    inline DescribeRecipeRequest& WithRecipeVersion(Aws::String&& value) { SetRecipeVersion(std::move(value)); return *this;}
    inline DescribeRecipeRequest& WithRecipeVersion(const char* value) { SetRecipeVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_recipeVersion;
    bool m_recipeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
