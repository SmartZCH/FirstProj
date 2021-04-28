
/*
每周一题
    两个二进制字符串（ 字符串非空且只包含数字 1 和 0），返回它们的和（用二进制表示）。
示例 1:
    输入: a = "11", b = "1"
    输出: "100"
示例 2:
    输入: a = "1010", b = "1011"
    输出: "10101"
*/
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


//char * addBinary(char * a, char * b)
int main()
{
    char * a = "huhaua";
    char * b = "jnsljc"; 
	// int lenl=strlen(a);//a的长度
    // int lens=strlen(b);//b的长度
    // int m=(strlen(a)>=strlen(b)?strlen(a):strlen(b));//m放最大的长度
    // char *n=(char *)malloc(sizeof(char)*m+2);//生成n,因为有最高位还会逢二进一的情况,还有尾部的'\0',所以大小为最大数组的长度再加二
    // n[m+1]='\0';//4
    // for(int i=0;i<m+1;i++)
    // {
    //     n[i]='0';//新数组初始化
    // }
    // int t=strlen(n);
    // int t1=strlen(n);
    // int t2=strlen(n);
    // while(lenl!=0 || lens!=0)
    // {
    //     if(lenl)
    //     {
    //         n[--t1]+=a[--lenl]-48;
    //         //因为n初始化时便为'0',所以减去多余的'0'再加
    //     }
    //     if(lens){
    //         n[--t2]+=b[--lens]-48;
    //     }
    //     t--;
    //     int count=0;
    //     if(n[t]>'1')//逢二
    //     {
    //         n[t-1]++;//进一位
    //         if(count==0)
    //         {
    //             n[t]='0';
    //             //自右往左,进位的开始位置
    //             count++;
    //             continue;
    //             //类似于连击,连续进一位的情况
    //             //比如"111"加"111"等于"1110"
    //             //中间有连续进一位的情况,把进位的开始位置归零就行了
    //         }
    //         else{
    //             n[t]-=2;//进一了要归零
    //             continue;//如果是连续进一位
    //         }
    //     }
    //     count=0;//如果连击断了,计数count就归零,等待新的开始位置
    // }
    // if(n[0]=='0')
    // {//如果开头预留的进位区没用上
    //     for(int i=0;i<=m;i++)//整体往前挪一格
    //     n[i]=n[i+1];
    // }
    printf("hello\n");
    printf("%c\n,%c\n",*a,*b);
}
/*
int main(void)
{
    char * a = "1011";
    char * b = "0111"; 
    char *ret = addBinary(a, b);
    if (ret)
    {
        printf("0b%s + 0b%s = 0b%s", a, b, ret);
        free(ret);
    }
}
*/