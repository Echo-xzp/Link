/*
 * @Descripttion: 这是一个查找目标节点数据的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-10 17:39:45
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-17 20:18:00
 */

#include "NodeFind.h" 

/**
 * @name: NodeFind
 * @description: 查找目标节点并返回其在链表中的位置
 * @param {link} head   [链表头指针]
 * @param {elemtype} goal  [查找目标]
 * @param {int} ** result [指向int指针的指针，用以保存目标位置]
 * @param {int}*size [result的内存长度]
 * @return {*}1/0
 */
status NodeFind(link head , elemtype goal , int **result , int *size )
{    
    link p = head ;
    int i = 0  , j = 0 ;

    //检查链表是否为空

    if(!head) exit(ERROR) ;

    /*
     * 从头节点开始查找，发现目标所在节点位置将存入result指向的空间
     * 多个目标存在，将会重新分配更大内存
     * 结束查找，所有目标的位置result返回,同时返回result大小size
     */
    while (p->next)
    {
        p = p->next ;
        ++i ;

        if (p->data == goal)
        {           
            *result = (int*)(realloc(*result,++j*sizeof(int))) ;
            if(!*result) exit(ERROR) ;
            *((*result)+ j-1) = i ;
            *size = j ;
        }
        
    }

    return OK ;
    
}