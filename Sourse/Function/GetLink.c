/*
 * @Descripttion: 这是一个打印链表中所有数据的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-11 09:55:41
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-17 13:57:20
 */

#include "GetLink.h"

/**
 * @name: GetLink
 * @description: 打印链表中所有的数据
 * @param {link} head
 * @return {*}0/1
 */
status GetLink(link head) 
{
    link p = head ;

    while(p->next)
    {
        p = p->next ;
        printf("%-3d",p->data) ;
    }
    printf("\n") ;

    return OK ;

}