﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/MFADeleteStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace MFADeleteStatusMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        MFADeleteStatus GetMFADeleteStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return MFADeleteStatus::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return MFADeleteStatus::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MFADeleteStatus>(hashCode);
          }

          return MFADeleteStatus::NOT_SET;
        }

        Aws::String GetNameForMFADeleteStatus(MFADeleteStatus enumValue)
        {
          switch(enumValue)
          {
          case MFADeleteStatus::Enabled:
            return "Enabled";
          case MFADeleteStatus::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MFADeleteStatusMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
