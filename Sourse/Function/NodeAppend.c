/*
 * @Descripttion: 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-10 16:42:39
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-17 14:06:41
 */

#include "NodeAppend.h"

/**
 * @name: NodeAppend
 * @description: 在链表尾部链接一个节点
 * @param {link} head
 * @param {link} p
 * @return {*}1/0
 */
status NodeAppend(link head , link p)
{
    link pr = head ;
    
    //判断链表是否为空
    if(!head) exit(ERROR) ;

    //将指针指向链表尾部
    while (pr->next)
    {
        pr = pr->next ;
    }
    
    //链接节点
    pr->next = p ;

    return OK ;

}