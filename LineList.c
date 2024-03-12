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
//注意长度和序号之间的区别,长度-1=序号
Status InsertList(SqList *L ,int i ,int value){
//    判断i位置是否合法
    if ( i >L->length+1 || i < 1){
        printf("位置不正确");
        return False;
    };
    if (L->length > MaxSize){
        printf("表已满");
    return False;
    };
//    元素后移
//从表尾开始逐个向后传递
    for (int j = L->length;j > i;j --){
        L->data[j] = L->data[ j - 1];
    };
    L->data[i-1] = value;
    L->length ++;
    return True;
}

//删除
Status DeleteList(SqList *L ,int i ,int *value){


}

//按值查找
Status GetElement(SqList *L ,int value){

}

//按位置查找
Status GetLocation(SqList *L ,int i ){

}

//按值修改
Status ChangeElement(SqList *L ,int i ,int *value){

}

//按位置修改
Status ChangeLocation(SqList *L ,int i ,int *value){

}







int main (){

    printf("Here is LineList!");
    return 0;
}