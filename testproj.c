#include <stdio.h>

int main(void){
printf("This is a test file");
int i;
for (i=0;i<=3;i++){
    printf("%d,",i);
}
printf("\n");
struct point
{
    int x;
    int y;
};
struct point p;
p.x = 2;
p.y = 3;
printf("%d",p.x);
}