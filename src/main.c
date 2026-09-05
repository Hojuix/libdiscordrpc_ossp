/*
 * Discord RPC Library
 * Goldenkrew3000 / Hojuix 2026
 * License: GNU General Public License 3.0
 */

#include <stdio.h>
#include <unistd.h> // for usleep(), to hold thread open for testing
#include "rpc_general.h"
#include "utils.h"

#include <string.h> //strdup

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

    Discord_RPC_SendActivity_t* new_activity = Rpc_General_SetActivity_Constructor();
    new_activity->state = strdup("Top line");
    new_activity->details = strdup("Bottom line");
    new_activity->activity_type = DISCORDRPC_ACTIVITY_TYPE_LISTENING;


    Rpc_General_SetActivity(new_activity);
    Rpc_General_SetActivity_Deconstructor(&new_activity);


    usleep(1000 * 20000);

    return 0;
}
