/*
 * Discord RPC Library
 * Goldenkrew3000 / Hojuix 2026
 * License: GNU General Public License 3.0
 */

#include "rpc_unix.h"

#include <stdio.h>

int Rpc_General_Initialize(char* client_id) {
    static int rc = 0;
    // ifdef unix TODO
    rc = Rpc_Unix_Initialize(client_id);
    return rc;
}

int Rpc_General_SendHandshake();
