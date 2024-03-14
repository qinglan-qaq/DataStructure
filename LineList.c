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
} SqList;

//初始化
Status InitList(SqList *L) {
    L->length = 0;
    printf("Initialization Completed\n");
    return True;
}

//插入,i是位置,value是插入值
//注意长度和序号之间的区别,长度-1=序号
Status InsertList(SqList *L, int i, int value) {
//    判断i位置是否合法
    if (i > L->length + 1 || i < 1) {
        printf("Error!Location wrong\n");
        return False;
    };
    if (L->length > MaxSize) {
        printf("Error! list is full\n");
        return False;
    };
    //    元素后移
    //从表尾开始逐个向后传递
    for (int j = L->length; j >= i; j--) {
        L->data[j] = L->data[j - 1];
    };
    L->data[i - 1] = value;
    L->length++;
    printf("Success~\n");
    return True;
}

//删除
Status DeleteList(SqList *L, int i, int *value) {
//    判断i位置是否合法
    if (i > L->length + 1 || i < 1) {
        printf("Error Location\n");
        return False;
    };
    if (L->length > MaxSize) {
        printf("list is full\n");
        return False;
    };
    value = L->data[i - 1];
    printf("The deleted value is%d\n", value);
//    从i开始往后,覆盖掉想要删除的元素
    for (int j = i; j < L->length; j++) {
        L->data[j - 1] = L->data[j];
    };
//    线性表减一
    L->length--;
    return True;

}

//按值查找
Status GetElement(SqList *L, int value) {
    for (int i = 0; i < L->length; i++) {
        if (L->data[i] == value) {
            printf("Found it,%d\n", L->data[i]);
            return True;
        }
        printf("Not found!\n");
        return False;
    }

}

//按位置查找(长度)
Status GetLocation(SqList *L, int i) {
    if (i > L->length) {
        printf("Exceeding length!\n");
        return False;
    }
    int e = 0;
    e = L->data[i - 1];
    printf("Found! The value is %d\n", e);
    return True;

}

Status ShowAll(SqList L){
    for (int i = 0; i < L.length; ++i) {
        printf("%d  ",L.data[i]);
    }
    printf("\nIt is all.\n");
}


int main() {
    printf("-------------------------------------------\n");
    printf("-- 1.InitList                      \n");
    printf("-- 2.SearchByValue                          \n");
    printf("-- 3.SearchByLocation                         \n");
    printf("-- 4.InsertElement                         \n");
    printf("-- 5.DeleteElement                         \n");
    printf("-- 6.ShowAll                         \n");
    printf("-- 0.exit                              \n");
    printf("-------------------------------------------\n");

    int c;
    SqList L;
    int Location,value;
    while (1) {
        printf("what is your choice?\n");
        scanf("%d", &c);
        switch (c) {
            case 1:
                InitList(&L);
                break;
            case 2:
                printf("what element do you want search by Value?\n");
                scanf("%d",&value);
                GetElement(&L,value);
                break;
            case 3:
                printf("what element do you want search by Location?\n");
                scanf("%d",&Location);
                GetLocation(&L,Location);
                break;
            case 4:
                printf("what element do you want insert?\n");
                scanf("%d%d",&Location,&value);
                InsertList(&L,Location,value);
                break;
            case 5:
                printf("what element do you want delete?\n");
                scanf("%d%d",&Location,&value);
                DeleteList(&L,Location,value);
                break;
            case 6:
                ShowAll(L);
                break;
            case 0:
                printf("Thank you use!");
                exit(1);
            default:
                printf("Error! choice again \n");
                break;
        }
    }
    printf("Here is LineList!");
    return 0;
}