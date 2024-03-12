//
// Created by DELL on 2024/3/12->
//

#include "stdio.h"
#include "stdlib.h"

#define MaxSize 10
#define True 1
#define False 0

//表示状态
typedef int Status;

typedef struct {
    int data[MaxSize];
    int length;
}SqList;

//初始化
Status InitList(SqList *L){
    L->length = 0;
    return True;
}

//插入,i是位置,value是插入值
Status InsertList(SqList *L ,int i ,int value){
//    判断i位置是否合法
    if ( i >L->length+1 || i < 1){
        return False;
    };
    if (L->length > MaxSize){
    return False;
    };
//    元素后移
//从表尾开始逐个向后传递
    for (int j = L->length;j > i;j --){
        L->data[j] = L->data[ j - 1];
    };



}









int main (){

    printf("Here is LineList!")
    return 0;
}