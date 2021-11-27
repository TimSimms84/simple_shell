#include<stdio.h>
#include<signal.h>

// void handle_sigint(int sig)
// {
//     printf("Caught signal %d\n", sig);
// }
  
// int main()
// {
//     signal(SIGINT, handle_sigint);
//     while (1) ;
//     return 0;
// }

// int main()
// {
//     signal(SIGINT, handle_sigint);
//     while (1)
//     {
//         printf(“hello world\n”);
//         sleep(1);
//     }
//     return 0;
// }


#include<stdio.h>
#include<wait.h>
#include<signal.h>
#include <stdlib.h>

pid_t pid;
int counter = 0;
void handler1(int sig)
{
    counter++;
    printf("counter = %d\n", counter);
    /* Flushes the printed string to stdout */
    fflush(stdout);
    kill(pid, SIGUSR1);
}
void handler2(int sig)
{
    counter += 3;
    printf("counter = %d\n", counter);
    exit(0);
}
  
int main()
{
    pid_t p;
    int status;
    signal(SIGUSR1, handler1);
    if ((pid = fork()) == 0)
    {
        signal(SIGUSR1, handler2);
        kill(getppid(), SIGUSR1);
        while(1) ;
    }
    if ((p = wait(&status)) > 0)
    {
        counter += 4;
        printf("counter = %d\n", counter);
    }
}
