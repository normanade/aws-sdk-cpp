﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/KeyUsageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace KeyUsageTypeMapper
      {

        static const int SIGN_VERIFY_HASH = HashingUtils::HashString("SIGN_VERIFY");
        static const int ENCRYPT_DECRYPT_HASH = HashingUtils::HashString("ENCRYPT_DECRYPT");
        static const int GENERATE_VERIFY_MAC_HASH = HashingUtils::HashString("GENERATE_VERIFY_MAC");
        static const int KEY_AGREEMENT_HASH = HashingUtils::HashString("KEY_AGREEMENT");


        KeyUsageType GetKeyUsageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIGN_VERIFY_HASH)
          {
            return KeyUsageType::SIGN_VERIFY;
          }
          else if (hashCode == ENCRYPT_DECRYPT_HASH)
          {
            return KeyUsageType::ENCRYPT_DECRYPT;
          }
          else if (hashCode == GENERATE_VERIFY_MAC_HASH)
          {
            return KeyUsageType::GENERATE_VERIFY_MAC;
          }
          else if (hashCode == KEY_AGREEMENT_HASH)
          {
            return KeyUsageType::KEY_AGREEMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyUsageType>(hashCode);
          }

          return KeyUsageType::NOT_SET;
        }

        Aws::String GetNameForKeyUsageType(KeyUsageType enumValue)
        {
          switch(enumValue)
          {
          case KeyUsageType::NOT_SET:
            return {};
          case KeyUsageType::SIGN_VERIFY:
            return "SIGN_VERIFY";
          case KeyUsageType::ENCRYPT_DECRYPT:
            return "ENCRYPT_DECRYPT";
          case KeyUsageType::GENERATE_VERIFY_MAC:
            return "GENERATE_VERIFY_MAC";
          case KeyUsageType::KEY_AGREEMENT:
            return "KEY_AGREEMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyUsageTypeMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
