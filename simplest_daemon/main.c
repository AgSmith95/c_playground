#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

// link: https://www.thegeekstuff.com/2012/02/c-daemon-process/

int main(int argc, char *argv[])
{
    FILE *fp = NULL;
    pid_t process_id = 0;
    pid_t sid = 0;
    // Create child process
    process_id = fork();
    // Indication of fork() failure
    if (process_id < 0)
    {
        printf("fork failed!\n");
        // Return failure in exit status
        exit(1);
    }
    // PARENT PROCESS. Need to kill it.
    if (process_id > 0)
    {
        printf("process_id of child process %d\n", process_id);
        // return success in exit status
        exit(0);
    }
    short unsigned int count = 0;
    while (++count < 11) {
        printf("Tick %u ...\n", count);
        sleep(1);
    }
    return (0);
}
