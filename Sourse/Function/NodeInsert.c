/*
 * @Descripttion: 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-10 17:01:00
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-16 17:03:51
 */

#include "NodeInsert.h"

/**
 * @name:NodeInsert 
 * @description:在给定位置前插入一个节点
 * @param {link} head
 * @param {int} pos
 * @param {link} insert
 * @return {*} 1/0
 */
status NodeInsert(link head , int pos , link insert)
{
    int i = 0 ;    
    link p = head , pr = NULL ;

    while (p && i < pos-1)
    {
        p = p->next ;
        ++i ;
    }
    //找到插入位置的前一个节点

    if (!p || !p->next || i > pos-1 )
    {
        exit(ERROR) ;
    }
    //插入位置存在错误(pos大于表长；小于0），退出

    pr = p->next ;  
    p->next = insert ;
    insert->next = pr ;
    //在目标位置前插入节点
    
}