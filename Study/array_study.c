#include "stdio.h"
#define N 6
int main()
{
    //int a[N] = {2, 3, 4, 5}, i, KEY, index = 0;
    //int *p = a;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        *(a+i) = i;
        printf("%d",*a);
    }
    return 0;
}
