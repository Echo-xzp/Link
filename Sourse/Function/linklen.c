/*
 * @Descripttion: 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-10 15:38:33
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-10 15:49:34
 */

#include "linklen.h"

/**
 * @name: linklen
 * @description: 计算链表长度，并返回其值
 * @param {link} head
 * @return {int} len
 */
int linklen(link head)
{
    link p = head ;
    int len = 0 ;

    if(!head) exit(ERROR) ;
    //检查链表是否为空

    while (p->next)
    {
        p = p->next ;
        ++len ;
    }
    //检查节点指针域是否为空，否则长度len增加1
    
    return len ;
    
}