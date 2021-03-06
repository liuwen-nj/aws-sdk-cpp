﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kinesisanalyticsv2/model/ApplicationConfigurationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

ApplicationConfigurationDescription::ApplicationConfigurationDescription() : 
    m_sqlApplicationConfigurationDescriptionHasBeenSet(false),
    m_applicationCodeConfigurationDescriptionHasBeenSet(false),
    m_runConfigurationDescriptionHasBeenSet(false),
    m_flinkApplicationConfigurationDescriptionHasBeenSet(false),
    m_environmentPropertyDescriptionsHasBeenSet(false),
    m_applicationSnapshotConfigurationDescriptionHasBeenSet(false)
{
}

ApplicationConfigurationDescription::ApplicationConfigurationDescription(JsonView jsonValue) : 
    m_sqlApplicationConfigurationDescriptionHasBeenSet(false),
    m_applicationCodeConfigurationDescriptionHasBeenSet(false),
    m_runConfigurationDescriptionHasBeenSet(false),
    m_flinkApplicationConfigurationDescriptionHasBeenSet(false),
    m_environmentPropertyDescriptionsHasBeenSet(false),
    m_applicationSnapshotConfigurationDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationConfigurationDescription& ApplicationConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SqlApplicationConfigurationDescription"))
  {
    m_sqlApplicationConfigurationDescription = jsonValue.GetObject("SqlApplicationConfigurationDescription");

    m_sqlApplicationConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationCodeConfigurationDescription"))
  {
    m_applicationCodeConfigurationDescription = jsonValue.GetObject("ApplicationCodeConfigurationDescription");

    m_applicationCodeConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunConfigurationDescription"))
  {
    m_runConfigurationDescription = jsonValue.GetObject("RunConfigurationDescription");

    m_runConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlinkApplicationConfigurationDescription"))
  {
    m_flinkApplicationConfigurationDescription = jsonValue.GetObject("FlinkApplicationConfigurationDescription");

    m_flinkApplicationConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentPropertyDescriptions"))
  {
    m_environmentPropertyDescriptions = jsonValue.GetObject("EnvironmentPropertyDescriptions");

    m_environmentPropertyDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationSnapshotConfigurationDescription"))
  {
    m_applicationSnapshotConfigurationDescription = jsonValue.GetObject("ApplicationSnapshotConfigurationDescription");

    m_applicationSnapshotConfigurationDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_sqlApplicationConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("SqlApplicationConfigurationDescription", m_sqlApplicationConfigurationDescription.Jsonize());

  }

  if(m_applicationCodeConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("ApplicationCodeConfigurationDescription", m_applicationCodeConfigurationDescription.Jsonize());

  }

  if(m_runConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("RunConfigurationDescription", m_runConfigurationDescription.Jsonize());

  }

  if(m_flinkApplicationConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("FlinkApplicationConfigurationDescription", m_flinkApplicationConfigurationDescription.Jsonize());

  }

  if(m_environmentPropertyDescriptionsHasBeenSet)
  {
   payload.WithObject("EnvironmentPropertyDescriptions", m_environmentPropertyDescriptions.Jsonize());

  }

  if(m_applicationSnapshotConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("ApplicationSnapshotConfigurationDescription", m_applicationSnapshotConfigurationDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
