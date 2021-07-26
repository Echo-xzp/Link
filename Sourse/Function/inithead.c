/*
 * @Descripttion: 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-07 17:33:16
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-16 15:36:14
 */

#include "inithead.h"
/**
 * @name: initnode
 * @description: 初始化一个节点头指针
 * @param {link} head
 * @return {*}1/0
 */

status inithead(link *phead)
{
    if(*phead)  return(ERROR) ;
    //检查指针是否为空，只接受指向空的指针进行操作

    *phead = (link)(malloc(sizeof(node))) ;
    if (!*phead)  exit(OVERFLOW) ;
    (*phead)->next = NULL ;
    //申请并根据输入参数data初始化节点

    return OK ;

}