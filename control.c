#include "mmuse.h"
#include <stdio.h>
/* mount */
#include <sys/mount.h>
/* sleep */
#include <unistd.h>
/* exit */
#include <stdlib.h>

#define errExit(msg) do { perror(msg); exit(EXIT_FAILURE); \
		        } while (0)

int main(void) {
    int ret;
    printf("control process starting up\n");

    ret = mount("my-mmuse", MMUSE_FS_PATH, "mmuse", 0, NULL);
    if (ret)
        errExit("unable to mount mmuse");

    for(;;) {
        sleep(1);
    }

    return 0;
}
