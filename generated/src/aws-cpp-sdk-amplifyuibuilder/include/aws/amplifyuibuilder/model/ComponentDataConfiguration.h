﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifyuibuilder/model/Predicate.h>
#include <aws/amplifyuibuilder/model/SortProperty.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the configuration for binding a component's properties to
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ComponentDataConfiguration">AWS
   * API Reference</a></p>
   */
  class ComponentDataConfiguration
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ComponentDataConfiguration();
    AWS_AMPLIFYUIBUILDER_API ComponentDataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ComponentDataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data model to use to bind data to a component.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }
    inline ComponentDataConfiguration& WithModel(const Aws::String& value) { SetModel(value); return *this;}
    inline ComponentDataConfiguration& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}
    inline ComponentDataConfiguration& WithModel(const char* value) { SetModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes how to sort the component's properties.</p>
     */
    inline const Aws::Vector<SortProperty>& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const Aws::Vector<SortProperty>& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(Aws::Vector<SortProperty>&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline ComponentDataConfiguration& WithSort(const Aws::Vector<SortProperty>& value) { SetSort(value); return *this;}
    inline ComponentDataConfiguration& WithSort(Aws::Vector<SortProperty>&& value) { SetSort(std::move(value)); return *this;}
    inline ComponentDataConfiguration& AddSort(const SortProperty& value) { m_sortHasBeenSet = true; m_sort.push_back(value); return *this; }
    inline ComponentDataConfiguration& AddSort(SortProperty&& value) { m_sortHasBeenSet = true; m_sort.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the conditional logic to use when binding data to a component. Use
     * this property to retrieve only a subset of the data in a collection.</p>
     */
    inline const Predicate& GetPredicate() const{ return m_predicate; }
    inline bool PredicateHasBeenSet() const { return m_predicateHasBeenSet; }
    inline void SetPredicate(const Predicate& value) { m_predicateHasBeenSet = true; m_predicate = value; }
    inline void SetPredicate(Predicate&& value) { m_predicateHasBeenSet = true; m_predicate = std::move(value); }
    inline ComponentDataConfiguration& WithPredicate(const Predicate& value) { SetPredicate(value); return *this;}
    inline ComponentDataConfiguration& WithPredicate(Predicate&& value) { SetPredicate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IDs to use to bind data to a component. Use this property to bind
     * specifically chosen data, rather than data retrieved from a query.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentifiers() const{ return m_identifiers; }
    inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }
    inline void SetIdentifiers(const Aws::Vector<Aws::String>& value) { m_identifiersHasBeenSet = true; m_identifiers = value; }
    inline void SetIdentifiers(Aws::Vector<Aws::String>&& value) { m_identifiersHasBeenSet = true; m_identifiers = std::move(value); }
    inline ComponentDataConfiguration& WithIdentifiers(const Aws::Vector<Aws::String>& value) { SetIdentifiers(value); return *this;}
    inline ComponentDataConfiguration& WithIdentifiers(Aws::Vector<Aws::String>&& value) { SetIdentifiers(std::move(value)); return *this;}
    inline ComponentDataConfiguration& AddIdentifiers(const Aws::String& value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(value); return *this; }
    inline ComponentDataConfiguration& AddIdentifiers(Aws::String&& value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(std::move(value)); return *this; }
    inline ComponentDataConfiguration& AddIdentifiers(const char* value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::Vector<SortProperty> m_sort;
    bool m_sortHasBeenSet = false;

    Predicate m_predicate;
    bool m_predicateHasBeenSet = false;

    Aws::Vector<Aws::String> m_identifiers;
    bool m_identifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
