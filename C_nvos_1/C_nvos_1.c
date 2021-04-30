
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

char * addBinary(char * a, char * b)
{
	int len_a=strlen(a);//a的长度
    int len_b=strlen(b);//b的长度
    int m=(strlen(a)>strlen(b)?strlen(a):strlen(b));//m放最大的长度
    char *n=(char *)malloc(sizeof(char)*m+2);//生成n,有最高位还会逢二进一的情况,还有尾部的'\0',所以大小为最大数组的长度再加二
    n[m+1]='\0';
    for(int i=0;i<m+1;i++)
    {
        n[i]='0';//新数组初始化
    }
    int t=strlen(n),t1=strlen(n),t2=strlen(n);
    while(len_a!=0 || len_b!=0){
        if(len_a){
            n[--t1]+=a[--len_a]-48;//n初始化时便为'0',所以减去多余的'0'再加
        }
        if(len_b){
            n[--t2]+=b[--len_b]-48;
        }
        t--;    
        if(n[t]=='2'){
            n[t-1]++;//进一位
            n[t]='0';
        }
        if(n[t]=='3'){
            n[t-1]++;
            n[t] = '1';
        }
    }
    return n;
}
int main(void)
{
    char * a = "1010";
    char * b = "1011"; 
    char *ret = addBinary(a, b);
    if (ret)
    {
        printf("0b%s + 0b%s = 0b%s", a, b, ret);
        free(ret);
    }
}