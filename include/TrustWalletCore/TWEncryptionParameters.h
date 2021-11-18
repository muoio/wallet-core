// Copyright © 2017-2021 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "TWBase.h"

TW_EXTERN_C_BEGIN

/// Preset encryption parameter with different security strength, for key store
TW_EXPORT_ENUM(uint32_t)
enum TWStoredKeyEncryptionLevel {
    /// Default, which is one of the below values, determined by the implementation.
    TWEncryptionLevelDefault = 0,
    /// Minimal sufficient level of encryption strength
    TWEncryptionLevelWeak,
    TWEncryptionLevelStandard,
};

TW_EXTERN_C_END
