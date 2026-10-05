#include <stdio.h>
#include <windows.h>

DWORD WINAPI print_message(LPVOID arg)
{
    char *msg = (char *)arg;

    for(int i = 0; i < 5; i++)
    {
        printf("%s - count %d\n", msg, i);
    }

    return 0;
}

int main()
{
    HANDLE t1, t2;

    char *msg1 = "Thread-1";
    char *msg2 = "Thread-2";

    t1 = CreateThread(NULL, 0, print_message, msg1, 0, NULL);
    t2 = CreateThread(NULL, 0, print_message, msg2, 0, NULL);

    WaitForSingleObject(t1, INFINITE);
    WaitForSingleObject(t2, INFINITE);

    CloseHandle(t1);
    CloseHandle(t2);

    printf("Main: both threads finished\n");

    return 0;
}