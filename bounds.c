#include <stdio.h>
#define SIZE 4
int main(void)
{
    int arr[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
    {
        arr[i] = 2 * i + 1;
    }
    for (i = 0; i < 7; i++)
    {
        printf("%2d %d\n", i, arr[i]);
    }
    for (i = 0; i < 7; i++)
    {
        printf("address of arr[%d]: %p\n", i, &arr[i]);
    }

    return 0;
}