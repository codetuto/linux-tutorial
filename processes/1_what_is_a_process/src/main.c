#include <stdio.h>
#include <unistd.h>

#define SLEEP_TIME 600

int main ()
{
        printf("I'm program!\n");
        printf("During runtime I'm a process!\n");

        for (int i = 0; i < SLEEP_TIME; i++){
                printf("%d seconds...\n", i);
                sleep(1);
        }

        printf("Process terminated!\n");

        return 0;
}
