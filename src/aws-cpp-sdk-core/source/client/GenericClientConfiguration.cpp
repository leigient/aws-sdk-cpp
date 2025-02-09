/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/threading/Executor.h>


namespace Aws
{
namespace Client
{
template struct AWS_CORE_API GenericClientConfiguration<false>;

bool IsEndpointDiscoveryEnabled(const Aws::String& endpointOverride, const Aws::String &profileName)
{
  bool enabled = true;  // default value for AWS Services with enabled discovery trait
  if (!endpointOverride.empty())
  {
    enabled = false;
  }
  else
  {
    static const char* AWS_ENABLE_ENDPOINT_DISCOVERY_ENV_KEY = "AWS_ENABLE_ENDPOINT_DISCOVERY";
    static const char* AWS_ENABLE_ENDPOINT_DISCOVERY_PROFILE_KEY = "AWS_ENABLE_ENDPOINT_DISCOVERY";
    static const char* AWS_ENABLE_ENDPOINT_ENABLED = "true";
    static const char* AWS_ENABLE_ENDPOINT_DISABLED = "false";

    Aws::String enableEndpointDiscovery = ClientConfiguration::LoadConfigFromEnvOrProfile(AWS_ENABLE_ENDPOINT_DISCOVERY_ENV_KEY,
                                                                                          profileName,
                                                                                          AWS_ENABLE_ENDPOINT_DISCOVERY_PROFILE_KEY,
                                                                                          {AWS_ENABLE_ENDPOINT_ENABLED, AWS_ENABLE_ENDPOINT_DISABLED},
                                                                                          AWS_ENABLE_ENDPOINT_ENABLED);

    if (AWS_ENABLE_ENDPOINT_DISABLED == enableEndpointDiscovery)
    {
      // enabled by default unless explicitly disabled in ENV, profile config file, or programmatically later
      enabled = false;
    }
  }
  return enabled;
}

GenericClientConfiguration<true>::GenericClientConfiguration()
    : ClientConfiguration(),
      enableHostPrefixInjection(ClientConfiguration::enableHostPrefixInjection),
      enableEndpointDiscovery(ClientConfiguration::enableEndpointDiscovery)
{
    enableEndpointDiscovery = IsEndpointDiscoveryEnabled(this->endpointOverride, this->profileName);
    enableHostPrefixInjection = false; // disabled by default in the SDK
}

GenericClientConfiguration<true>::GenericClientConfiguration(const char* inputProfileName)
    : ClientConfiguration(inputProfileName),
      enableHostPrefixInjection(ClientConfiguration::enableHostPrefixInjection),
      enableEndpointDiscovery(ClientConfiguration::enableEndpointDiscovery)
{
    enableEndpointDiscovery = IsEndpointDiscoveryEnabled(this->endpointOverride, this->profileName);
    enableHostPrefixInjection = false; // disabled by default in the SDK
}

GenericClientConfiguration<true>::GenericClientConfiguration(bool useSmartDefaults, const char* inputDefaultMode)
    : ClientConfiguration(useSmartDefaults, inputDefaultMode),
      enableHostPrefixInjection(ClientConfiguration::enableHostPrefixInjection),
      enableEndpointDiscovery(ClientConfiguration::enableEndpointDiscovery)
{
    enableEndpointDiscovery = IsEndpointDiscoveryEnabled(this->endpointOverride, this->profileName);
    enableHostPrefixInjection = false; // disabled by default in the SDK
}

GenericClientConfiguration<true>::GenericClientConfiguration(const ClientConfiguration& config)
    : ClientConfiguration(config),
      enableHostPrefixInjection(ClientConfiguration::enableHostPrefixInjection),
      enableEndpointDiscovery(ClientConfiguration::enableEndpointDiscovery)
{
    enableEndpointDiscovery = IsEndpointDiscoveryEnabled(this->endpointOverride, this->profileName);
    enableHostPrefixInjection = false; // disabled by default in the SDK
}

GenericClientConfiguration<true>::GenericClientConfiguration(const GenericClientConfiguration<true>& other)
    : ClientConfiguration(static_cast<ClientConfiguration>(other)),
      enableHostPrefixInjection(ClientConfiguration::enableHostPrefixInjection),
      enableEndpointDiscovery(ClientConfiguration::enableEndpointDiscovery)
{
    if (other.enableEndpointDiscovery) {
        enableEndpointDiscovery = other.enableEndpointDiscovery.value();
    }
    enableHostPrefixInjection = other.enableHostPrefixInjection;
}

GenericClientConfiguration<true>& GenericClientConfiguration<true>::operator=(const GenericClientConfiguration<true>& other)
{
  if (this != &other) {
      *static_cast<ClientConfiguration*>(this) = static_cast<ClientConfiguration>(other);
  }
  return *this;
}

} // namespace Client
} // namespace Aws
