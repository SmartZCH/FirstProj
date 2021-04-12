#include <stdio.h>

/*int main(void){
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
}*/
/*int main(){
printf("这是关于指针的解释\n");
int *px,x;
int *py,y;
int t;
printf("请输入两个数");
scanf("%d,%d",&x,&y);
px = &x;
py = &y;
if (*px < *py){
    t = *px;
    *px = *py;
    *py = t; 
}
printf("%d,%d",*px,*py);
}*/
int main(void){
int nums[5] = {4, 5, 3, 2, 7};
//定义一个指针变量 p，将数组 nums 的首地址赋值给 p，也可以用p = &nums[0]赋值
int *p = nums, i;			//i 作为循环变量
//p 指向数组第一个元素（数组首地址），我们可以直接用间接寻址符，获取第一个元素的内容
printf("nums[0] = %d\n", *p);			//输出结果为 nums[0] = 4
//我们可以通过“p + 整数”来移动指针，要先移动地址，所以 p + 1 要扩起来
printf("nums[1] = %d\n", *(p + 1));		//输出结果为 nums[1] = 5
//由上面推导出*(p + i) = nums[i]，所以我们可以通过 for 循环变量元素
for(i = 0; i < 5; i++){
	printf("nums[%d] = %d", i, *(p + i));
}
}
