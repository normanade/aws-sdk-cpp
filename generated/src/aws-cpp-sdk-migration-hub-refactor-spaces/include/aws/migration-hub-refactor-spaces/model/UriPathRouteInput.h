﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/model/RouteActivationState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migration-hub-refactor-spaces/model/HttpMethod.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   * <p>The configuration for the URI path route type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/UriPathRouteInput">AWS
   * API Reference</a></p>
   */
  class UriPathRouteInput
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API UriPathRouteInput();
    AWS_MIGRATIONHUBREFACTORSPACES_API UriPathRouteInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API UriPathRouteInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If set to <code>ACTIVE</code>, traffic is forwarded to this route’s service
     * after the route is created. </p>
     */
    inline const RouteActivationState& GetActivationState() const{ return m_activationState; }
    inline bool ActivationStateHasBeenSet() const { return m_activationStateHasBeenSet; }
    inline void SetActivationState(const RouteActivationState& value) { m_activationStateHasBeenSet = true; m_activationState = value; }
    inline void SetActivationState(RouteActivationState&& value) { m_activationStateHasBeenSet = true; m_activationState = std::move(value); }
    inline UriPathRouteInput& WithActivationState(const RouteActivationState& value) { SetActivationState(value); return *this;}
    inline UriPathRouteInput& WithActivationState(RouteActivationState&& value) { SetActivationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, this option appends the source path to the
     * service URL endpoint.</p>
     */
    inline bool GetAppendSourcePath() const{ return m_appendSourcePath; }
    inline bool AppendSourcePathHasBeenSet() const { return m_appendSourcePathHasBeenSet; }
    inline void SetAppendSourcePath(bool value) { m_appendSourcePathHasBeenSet = true; m_appendSourcePath = value; }
    inline UriPathRouteInput& WithAppendSourcePath(bool value) { SetAppendSourcePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to match all subpaths of the given source path. If this
     * value is <code>false</code>, requests must match the source path exactly before
     * they are forwarded to this route's service. </p>
     */
    inline bool GetIncludeChildPaths() const{ return m_includeChildPaths; }
    inline bool IncludeChildPathsHasBeenSet() const { return m_includeChildPathsHasBeenSet; }
    inline void SetIncludeChildPaths(bool value) { m_includeChildPathsHasBeenSet = true; m_includeChildPaths = value; }
    inline UriPathRouteInput& WithIncludeChildPaths(bool value) { SetIncludeChildPaths(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline const Aws::Vector<HttpMethod>& GetMethods() const{ return m_methods; }
    inline bool MethodsHasBeenSet() const { return m_methodsHasBeenSet; }
    inline void SetMethods(const Aws::Vector<HttpMethod>& value) { m_methodsHasBeenSet = true; m_methods = value; }
    inline void SetMethods(Aws::Vector<HttpMethod>&& value) { m_methodsHasBeenSet = true; m_methods = std::move(value); }
    inline UriPathRouteInput& WithMethods(const Aws::Vector<HttpMethod>& value) { SetMethods(value); return *this;}
    inline UriPathRouteInput& WithMethods(Aws::Vector<HttpMethod>&& value) { SetMethods(std::move(value)); return *this;}
    inline UriPathRouteInput& AddMethods(const HttpMethod& value) { m_methodsHasBeenSet = true; m_methods.push_back(value); return *this; }
    inline UriPathRouteInput& AddMethods(HttpMethod&& value) { m_methodsHasBeenSet = true; m_methods.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is the path that Refactor Spaces uses to match traffic. Paths must start
     * with <code>/</code> and are relative to the base of the application. To use path
     * parameters in the source path, add a variable in curly braces. For example, the
     * resource path {user} represents a path parameter called 'user'.</p>
     */
    inline const Aws::String& GetSourcePath() const{ return m_sourcePath; }
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }
    inline void SetSourcePath(const Aws::String& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }
    inline void SetSourcePath(Aws::String&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::move(value); }
    inline void SetSourcePath(const char* value) { m_sourcePathHasBeenSet = true; m_sourcePath.assign(value); }
    inline UriPathRouteInput& WithSourcePath(const Aws::String& value) { SetSourcePath(value); return *this;}
    inline UriPathRouteInput& WithSourcePath(Aws::String&& value) { SetSourcePath(std::move(value)); return *this;}
    inline UriPathRouteInput& WithSourcePath(const char* value) { SetSourcePath(value); return *this;}
    ///@}
  private:

    RouteActivationState m_activationState;
    bool m_activationStateHasBeenSet = false;

    bool m_appendSourcePath;
    bool m_appendSourcePathHasBeenSet = false;

    bool m_includeChildPaths;
    bool m_includeChildPathsHasBeenSet = false;

    Aws::Vector<HttpMethod> m_methods;
    bool m_methodsHasBeenSet = false;

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
