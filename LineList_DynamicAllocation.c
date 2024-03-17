//
// Created by DELL on 2024/3/14.
//

#include "stdio.h"
#include "stdlib.h"

#define InitSize 20
#define True 1
#define False 0

typedef int Status;

typedef struct {
    int *data;
    int Maxsize;
    int length;
} SqList;

//初始化
Status InitList(SqList *L) {
//    申请连续的内存空间
    L->data = (int *) malloc(InitSize * sizeof(int));
//如果这个空间为空
    if (L->data == NULL) {
        printf("LineList is empty!");
        return False;
    }

    L->length = 0;
    L->Maxsize = InitSize;
    printf("Init Success!");
    return True;
}

//判断是否为空
Status Empty(SqList L) {
    if (L.length == 0){
        printf("LineList is Empty!");
        return True;
    }
}

//判满
Status Full(SqList L) {
    if (L.length >= L.Maxsize){
        printf("LineList is Full!");
        return True;
    }
}

//插入
Status InsertList(SqList *L, int location, int value) {

}

//删除

//按位查找

//按值查找

//动态扩展



















