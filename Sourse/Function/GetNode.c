/*
 * @Descripttion: 这是一个取出节点数据的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-17 13:17:29
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-17 13:27:54
 */

#include "GetNode.h"

/**
 * @name: GetNode
 * @description: 取出pos位置的节点的数据，并以goal来返回
 * @param {link} head
 * @param {int} pos
 * @param {elemtype*} goal
 * @return {*}1/0
 */
status GetNode(link head , int pos , elemtype* goal) 
{
    link p = head , pr = NULL ;
    int i = 0 ;

    if(!head) exit(ERROR) ;
    //检查链表是否为空
    
     while (p && i < pos )
    {
        p = p->next ;
        ++i ;
    }
    //寻找到位置前一个节点

    if (!p || i > pos)  exit(ERROR) ;
    //pos的位置存在错误，退出

    *goal = p->data ;

    return OK ;

}