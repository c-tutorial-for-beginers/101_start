#include <stdio.h>
#include <sys/select.h>
#include <unistd.h>

int main() {
    fd_set readfds;

    while (1) {
        FD_ZERO(&readfds);          // clear set
        FD_SET(0, &readfds);        // add stdin (fd = 0)

        printf("Waiting for input...\n");

        select(1, &readfds, NULL, NULL, NULL);

        if (FD_ISSET(0, &readfds)) {
            char buffer[1024];

            fgets(buffer, sizeof(buffer), stdin);

            printf("You typed: %s", buffer);
        }
    }

    return 0;
}