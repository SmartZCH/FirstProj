#include "stdio.h"

struct test_struct
{
    char name;
    int age;
}person1;

int main(){
    struct test_struct aaa;
    printf("%d\n", aaa.name=2);
    return 0;
}