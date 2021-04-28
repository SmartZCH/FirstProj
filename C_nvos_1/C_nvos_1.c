
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
	// 进位
    int carry = 0;
    // 记录开辟空间大小
    // 需要预留最高位进位、'\0'的空间
	int length = (strlen(a)>strlen(b)? strlen(a)+2:strlen(b)+2);
    // 开辟空间
	char* result = (char*)malloc(sizeof(char)*length);
    // 设置'\0'
	result[length-1] = '\0';
    // i记录a的最后一位
    // j记录b的最后一位
    // k记录result[]的最后一位，倒着存放求和结果
	for(int i=strlen(a)-1 , j=strlen(b)-1 , k=length-2 ; (i>=0)||(j>= 0) ; i--,j--,k--)
	{
        // sum记录当前位数，先加上前一位的进位1或者0
		int sum = carry;
        // 位数不匹配时，要给空位赋0值，才能继续按位相加
		sum += (i >= 0? a[i]-'0':0);
		sum += (j >= 0? b[j]-'0':0);


        // 更新进位值
        // 方法一：
        if(sum>1)
        {
            carry=1;
            sum-=2;
        }
        else
        {
            carry=0;
        }
        result[k]=sum+'0';
        // 方法二：对应位求和，然后求商作进位位，剩下的余数为结果位。
		//carry = sum /2;
		//result[k] = '0'+ sum % 2;
	}
	// 最高位无进位，直接返回
	if(carry == 0)
        // 此时result[0]为空，故指针+1
		return result+1;
    //有进位，补一个最高位
	result[0] = '1';
		return result;
}
int main(void)
{
    char * a = "1011";
    char * b = "0111"; 
    char *ret = addBinary(a, b);
    if (ret)
    {
        printf("0b%s + 0b%s = 0b%s\n", a, b, ret);
        free(ret);
    }
}