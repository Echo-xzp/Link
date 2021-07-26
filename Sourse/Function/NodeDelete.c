/*
 * @Descripttion: 
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-10 15:15:58
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-17 13:12:37
 */

#include "NodeDelete.h"

/**
 * @name: NodeDelete
 * @description: 删除目标节点，并由del返回其值
 * @param {link} head
 * @param {int} pos
 * @param {elemtype} del
 * @return {*}1/0
 */
status NodeDelete(link head , int pos , elemtype *del) 
{
    int i = 0 ;
    link p = head , pr = NULL ;

    while (p && i < pos-1 )
    {
        p = p->next ;
        ++i ;
    }
    //寻找到删除位置前一个节点

    if (!p || !p->next || i > pos-1)  exit(ERROR) ;
    //pos的位置存在错误，退出

    pr = p->next ;
    p->next = pr->next ;
    *del = pr->data ;
    free(pr) ;
    //删除目标节点，并由del返回其值

    return OK ;

}