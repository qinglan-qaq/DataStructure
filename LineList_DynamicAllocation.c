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
        printf("LineList is empty!\n");
        return False;
    }

    L->length = 0;
    L->Maxsize = InitSize;
    printf("Init Success!\n");
    return True;
}

//判断是否为空
Status Empty(SqList L) {
    if (L.length == 0){
        printf("LineList is Empty!\n");
        return True;
    }
}

//判满
Status Full(SqList L) {
    if (L.length >= L.Maxsize){
        printf("LineList is Full!\n");
        return True;
    }
}

//插入
Status InsertList(SqList *L, int loca, int value) {
//    判断插入位置是否合法
    if (loca < 1 || loca > L->length + 1){
        printf("the location is invalid !\n");
        return False;
    }
//    判断是否已满
    if (Full(*L)){
        return False;
    }
//    正式开始插入操作,元素后移
    for (int j = L->length;j >= loca;j --){
        L->data[j] = L->data[j - 1];
    }
    L->data[loca - 1] = value;
    L->length ++;
    printf("Insert Success~\n");
    return True;
}

//删除,value是返回被删除的值
Status Delete(SqList *L,int i ,int *value){
    //    判断插入位置是否合法
    if ( i < 1 || i > L->length){
        printf("the location is invalid !\n");
        return False;
    }
    value = L->data[i -1];
    for (int j = i;j <= L->length;j ++){
        L->data[j-1] = L->data[j];
    }
//    线性表减一
    L->length --;
    printf("Insert Success !The delete element is %d\n",value);
    return True;
}
//按位查找
Status SearchByLocation(SqList L,int i){
    if (i < 1 || i >L.length){
        printf("Error! invalid location \n");
        return False;
    }
    printf("Found! the value is %d\n",L.data[i-1]);
    return True;
}
//按值查找
Status SearchByValue(SqList L,int e){
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == e){
            printf("Found! the location is %d\n",i+1);
            return True;
        }
    }
    printf("Not Found!\n");
    return False;
}

//动态扩展





int main(){

    return 0;
}













