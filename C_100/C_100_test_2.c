/*题目： 企业发放的奖金根据利润提成。

利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润I，求应发放奖金总数？*/

#include<stdio.h>

int main(){
    float I,sum;
    int i;
    printf("请输入当月利润I:\n");
    scanf("%f",&I);
    if (I<0)
    {
        printf("请输入新的利润！\n");
        return 0;
    }
    if(I<10)i =1;
    else if(I>=10&&I<20)i=2;
    else if(I>=20&&I<40)i=3;
    else if(I>=40&&I<60)i=4;
    else if(I>=60&&I<100)i=5;
    else i=6;
    switch (i)
    {
    case 1:
        sum = I*0.1;
        printf("当月利润为：%5.2f\n",sum);
        break;
     case 2:
        sum = (I-10)*0.075+10*0.1;
        printf("当月利润为：%5.2f\n",sum);
        break;
    case 3:
        sum = (I-20)*0.05+10*0.1+10*0.075;
        printf("当月利润为：%5.2f\n",sum);
        break;
    case 4:
        sum = (I-40)*0.03+10*0.1+10*0.075+20*0.05;
        printf("当月利润为：%5.2f\n",sum);
        break;   
    case 5:
        sum = (I-60)*0.015+10*0.1+20*0.075+20*0.05+20*0.03;
        printf("当月利润为：%5.2f\n",sum);
        break;
    case 6:
        sum = (I-100)*0.01+10*0.1+20*0.075+20*0.05+20*0.03+40*0.015;
        printf("当月利润为：%5.2f\n",sum);
        break;
    default:
        printf("error");
        break;
    }
return 0;
}


//参考答案
/*#include<stdio.h>
int main()
{
    double i;
    double bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
    printf("你的净利润是：\n");
    scanf("%lf",&i);
    bonus1=100000*0.1;
    bonus2=bonus1+100000*0.075;
    bonus4=bonus2+200000*0.05;
    bonus6=bonus4+200000*0.03;
    bonus10=bonus6+400000*0.015;
    if(i<=100000) {
        bonus=i*0.1;
    } else if(i<=200000) {
        bonus=bonus1+(i-100000)*0.075;
    } else if(i<=400000) {
        bonus=bonus2+(i-200000)*0.05;
    } else if(i<=600000) {
        bonus=bonus4+(i-400000)*0.03;
    } else if(i<=1000000) {
        bonus=bonus6+(i-600000)*0.015;
    } else if(i>1000000) {
        bonus=bonus10+(i-1000000)*0.01;
    }
    printf("提成为：bonus=%lf",bonus);

    printf("\n");
}*/




