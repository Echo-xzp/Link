/*
 * @Descripttion: 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-07 17:21:12
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-16 16:09:35
 */

#include  "initnode.h"

/**
 * @name:initnode
 * @description: 初始化一个节点
 * @param {link} p
 * @param {elemtype} data
 * @return {int}1/0
 */
status initnode(link *p , elemtype data)
{
    if(*p) return(ERROR) ;
    //防止内存泄漏，只接受空指针

    *p = (link)(malloc(sizeof(node))) ;
    if(!*p)  return(OVERFLOW) ;
    (*p)->data = data ;
    (*p)->next = NULL ;
    //申请并根据输入参数data初始化节点

    return OK ;

}
