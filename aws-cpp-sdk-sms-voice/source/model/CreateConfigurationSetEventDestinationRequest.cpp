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

#include <aws/sms-voice/model/CreateConfigurationSetEventDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConfigurationSetEventDestinationRequest::CreateConfigurationSetEventDestinationRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_eventDestinationHasBeenSet(false),
    m_eventDestinationNameHasBeenSet(false)
{
}

Aws::String CreateConfigurationSetEventDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventDestinationHasBeenSet)
  {
   payload.WithObject("EventDestination", m_eventDestination.Jsonize());

  }

  if(m_eventDestinationNameHasBeenSet)
  {
   payload.WithString("EventDestinationName", m_eventDestinationName);

  }

  return payload.View().WriteReadable();
}




