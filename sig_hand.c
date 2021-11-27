#include<stdio.h>
#include<signal.h>
/**
 *
 *
 *
 *
 */
void handler1(int sig)
{
    int counter = 0;

    counter++;
    printf("counter = %d\n", counter);
    /* Flushes the printed string to stdout */
    fflush(stdout);
    kill(pid, SIGUSR1);
}
void handler2(int sig)
{
    int counter = 0;
    counter += 3;
    printf("counter = %d\n", counter);
    exit(0);
}
  
int main()
{
    int counter = 0;
    pid_t p;
    int status;
    p = fork();

    if (p == 0)
    {
        signal(SIGUSR1, handler1);
        while (1)
        {
            pause();
        }
    }
    else
    {
        signal(SIGUSR2, handler2);
        while (1)
        {
            pause();
        }
    }
    return 0;
}
