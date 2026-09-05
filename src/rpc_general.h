/*
 * Discord RPC Library
 * Goldenkrew3000 / Hojuix 2026
 * License: GNU General Public License 3.0
 */

#ifndef _DISCORDRPC_RPC_GENERAL_H
#define _DISCORDRPC_RPC_GENERAL_H
#include <stdint.h> // uint32_t

#define DISCORDRPC_TYPE_HANDSHAKE   0

typedef struct {
    uint32_t type;
    uint32_t size;
} __attribute__((packed)) Discord_RPCHeader_t;

int Rpc_General_Initialize(char* client_id);

#endif
