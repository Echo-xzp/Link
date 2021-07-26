/*
 * @Descripttion: 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-10 17:28:19
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-17 14:07:40
 */

#include "NodeFree.h"

/**
 * @name: NodeFree
 * @description: 释放链表空间
 * @param {link} head
 * @return {*}1/0
 */
status NodeFree(link head)
{
    link p = NULL ;

    //从头指针开始，有依次释放节点，直到head指向空
    while (head)
    {
        p = head ;
        head = head->next ;
        free(p) ;
    }
    head = NULL ;
    
    return OK ;
    
}