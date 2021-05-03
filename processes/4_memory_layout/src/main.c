#include <stdio.h>
#include <unistd.h>

extern char etext, edata, end; /* The symbols must have some type, or "gcc -Wall" complains */

int global_buff[65536]; /* bss - uninitialized data */
int mango[65536] = {1}; /*data - initialized data */

static int apple[65536]; /* bss - uninitialized data */
static int orange[65536] = {1}; /* data - initialized data */


void fruits() /* stack frame */
{
        int peachs [1]; /* stack frame for fruits()*/
        static int bananas = 1; /*  data - initialized data */

        printf("Number of bananas %d \n", bananas);
        bananas++;

        return;
}

int main ()
{
        int i; /* stack frame for main()*/
        printf("I'm program!\n");
        printf("During runtime I'm a process running with PID=%d!\n", getpid());
        printf("Parent process has PPID=%d!\n", getppid());

        printf("First address past:\n");
        printf("    program text (etext)      %10p\n", &etext);
        printf("    initialized data (edata)  %10p\n", &edata);
        printf("    uninitialized data (end)  %10p\n", &end);


        for ( i = 0; i < 10; i++)
        {
                fruits();
        }

        printf("Process terminated!\n");

        return 0;
}
