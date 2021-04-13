//关于链表的学习
//https://blog.csdn.net/hebtu666/article/details/81261043?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522161821798016780261964840%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fall.%2522%257D&request_id=161821798016780261964840&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~first_rank_v2~rank_v29-1-81261043.pc_search_result_no_baidu_js&utm_term=%E9%93%BE%E8%A1%A8%E7%9A%84%E5%88%A0%E6%8F%92+C
#include<stdio.h>
#include<stdlib.h>




//链表的删插操作
typedef struct node//定义节点
{
    int data;
    struct node * next;
}Node;

int lenlist(Node * head)//返回链表长度
{
    int len;
    Node * temp = head;
    for(len=0; temp!=NULL; len++) 
        temp=temp->next;
    return len;
}

void insertlist(Node ** list,int data,int index)//插入元素，用*list将head指针和next统一表示
{
    if(index<0 || index>lenlist(*list))
        return;//判断非法输入
    Node * newnode=(Node *)malloc(sizeof(Node));//创建
    newnode->data=data;
    newnode->next=NULL;
    while(index--)list=&((*list)->next);//插入
    newnode->next=*list;
    *list=newnode;
}

void pushback(Node ** head,int data)//尾插，同上
{
    Node * newnode=(Node *)malloc(sizeof(Node));//创建
    newnode->data=data;
    newnode->next=NULL;
    while(*head!=NULL)head=&((*head)->next);//插入
    *head=newnode;
}


