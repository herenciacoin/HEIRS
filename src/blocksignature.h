// Copyright (c) 2017-2019 The PIVX developers
// Copyright (c) 2023 The Herencia Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef HERENCIA_BLOCKSIGNATURE_H
#define HERENCIA_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block, const bool enableP2PKH);

#endif //HERENCIA_BLOCKSIGNATURE_H
