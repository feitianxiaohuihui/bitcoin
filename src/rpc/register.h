// Copyright (c) 2009-2016 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_RPCREGISTER_H
#define BITCOIN_RPCREGISTER_H


// TFF-- RPC命令注册
/** These are in one header file to avoid creating tons of single-function
 * headers for everything under src/rpc/ */
class CRPCTable;

/** Register block chain RPC commands */
void RegisterBlockchainRPCCommands(CRPCTable &tableRPC);  // TFF-- 区块链RPC命令注册
/** Register P2P networking RPC commands */
void RegisterNetRPCCommands(CRPCTable &tableRPC); // TFF-- P2P网络RPC命令注册
/** Register miscellaneous RPC commands */ 
void RegisterMiscRPCCommands(CRPCTable &tableRPC); // TFF-- 其他工具RPC命令注册
/** Register mining RPC commands */
void RegisterMiningRPCCommands(CRPCTable &tableRPC); // TFF-- 挖矿RPC命令注册
/** Register raw transaction RPC commands */
void RegisterRawTransactionRPCCommands(CRPCTable &tableRPC); // TFF-- 交易PRC命令注册

static inline void RegisterAllCoreRPCCommands(CRPCTable &t)
{
    RegisterBlockchainRPCCommands(t);
    RegisterNetRPCCommands(t);
    RegisterMiscRPCCommands(t);
    RegisterMiningRPCCommands(t);
    RegisterRawTransactionRPCCommands(t);
}

#endif
