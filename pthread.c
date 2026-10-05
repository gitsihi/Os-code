#include <stdio.h>
#include <pthread.h>

void *print_message(void *arg)
{
    char *msg = (char *)arg;

    for(int i = 0; i < 5; i++)
    {
        printf("%s - count %d\n", msg, i);
    }

    return NULL;
}

int main()
{
    pthread_t t1, t2;

    char *msg1 = "Thread-1";
    char *msg2 = "Thread-2";

    pthread_create(&t1, NULL, print_message, (void *)msg1);
    pthread_create(&t2, NULL, print_message, (void *)msg2);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("Main: both threads finished\n");

    return 0;
}