/*
 * @Descripttion: 这是一个自定义宏与数据类型[链表]的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-07 17:08:49
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-17 14:04:42
 */

#ifndef  __MYHEAD_H__
#define  __MYHEAD_H__

#include <stdio.h>
#include <stdlib.h>

#define    status      int
#define    elemtype    int

#define    OK    1
#define  ERROR   0
#define  OVERFLOW  -2

typedef struct NODE
{
    elemtype  data ;
    struct NODE * next ;
}node , *link ;

#endif