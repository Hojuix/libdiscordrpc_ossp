/*
 * Discord RPC Library
 * Goldenkrew3000 / Hojuix 2026
 * License: GNU General Public License 3.0
 */

#include <stdio.h>
#include "rpc_general.h"

int main() {
    static int rc = 0;
    printf("Discord RPC Development\n");

    // Open Discord IPC
    rc = Rpc_General_Initialize("1407025303779278980");
    if (rc != 0) {
        printf("Could not connect to Discord RPC.\n");
        return 1;
    }
    printf("Connected to Discord RPC.\n");

    return 0;
}
