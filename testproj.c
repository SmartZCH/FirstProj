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
}
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
/*int main(void){
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
}*/


/*int main(void){
//定义字符数组 sentence 和 word，给 sentence 赋初值
char sentence[] = "Do not go gentle into that good night!", word[100];

//定义字符指针，指向 word
char *ch = word;
int i;

//循环赋值
for(i = 0; sentence[i] != '\0'; i++){
	*(ch + i) = sentence[i];
}

//在当 i 等于 sentence 的长度（sentence 的长度不包含'\0'）时，
//i 继续自增，此时判断 sentence[0] != '\0'不符合，跳出循环，则 i 比 sentence 长度大 1
*(ch + i) = '\0';

//输出字符串，因为 ch 指向 word，所以输出结果是一样的
printf("ch = %s, word = %s", ch, word);
}*/


/*int main(void){
//定义普通变量和指针变量
int *pi, i = 10;
//定义二级指针变量
int **ppi;

//给指针变量赋初值
pi = &i;

//给二级指针变量赋初值
ppi = &pi;//访问两次地址内的值

//我们可以直接用二级指针做普通指针的操作
//获取 i 的内容
printf("i = %d \n", **ppi);
//获取 i 的地址
printf("i 的地址为%d", *ppi);

}*/


void swap(int *x, int *y);
int main(){
	int x = 20, y = 10;
	swap(&x, &y);//输入的是地址，用地址来访问这个函数的入口
	printf("x = %d, y = %d", x ,y);
    return 0;
}
void swap(int *x, int *y){//这里访问x和y这两个地址的值
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
