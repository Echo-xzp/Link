/*
 * @Descripttion: 这是一个测试链表函数是否正常的程序
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-11 09:22:46
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-17 20:23:24
 */

 #include "Link.h"

#define count   5
#define pos 4
#define demo 3  //测试数据，用在插入与查找上

int main(int argc, char const *argv[])
{
    link head = NULL , p = NULL ;
    int i = 0 , *find_pos = NULL ,find_size = 0 ;
    elemtype goal = 0 , del = 0 ;

    printf("这是一个测试链表函数是否正常的程序\n\n") ;
    
    //初始化一个长度为5的链表并赋值
    inithead(&head) ;

    for ( i = 0; i < count; i++)
    {
         initnode(&p,i+1) ;
         NodeAppend(head,p) ;
         p = NULL ;       
    }

    //测试初始化结果
    printf("生成链表：\n") ;
    GetLink(head) ;
    printf("链表长度为%d\n",linklen(head)) ;
    printf("\n") ;

    //初始化一个节点并插入到pos位置
    p = NULL ; 
    initnode(&p,demo) ;                                 
    NodeInsert(head,pos,p) ;
    
    //测试插入结果
    printf("在 %d 位置插入元素 %d：\n",pos,p->data) ;
    GetLink(head) ;
    printf("链表长度为%d\n",linklen(head)) ;
    printf("\n") ;

    //查找节点数据并测试
    NodeFind(head,demo,&find_pos,&find_size) ;
    printf("查找到目标元素 %d 在链表中位置为：",demo) ;
    for ( i = 0; i < find_size; i++)
    {
        printf("%-3d",find_pos[i]) ;
    }
    printf("\n") ; 

    //测试读取节点数据
    GetNode(head,pos,&goal) ;
    printf("读取 %d 位置节点数据为: %d\n\n",pos,goal) ;

    //删除pos位置节点并测试结果
    NodeDelete(head,pos,&del) ;
    printf("删除 %d 位置元素 %d :\n",pos,del) ;
    GetLink(head) ;
    printf("链表长度为%d\n",linklen(head)) ;
    printf("\n") ;
    
    //销毁链表
    NodeFree(head) ;
    system("pause") ;
    return 0;
}
