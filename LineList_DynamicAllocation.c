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

//��ʼ��
Status InitList(SqList *L) {
//    �����������ڴ�ռ�
    L->data = (int *) malloc(InitSize * sizeof(int));
//�������ռ�Ϊ��
    if (L->data == NULL) {
        printf("LineList is empty!");
        return False;
    }

    L->length = 0;
    L->Maxsize = InitSize;
    printf("Init Success!");
    return True;
}

//�ж��Ƿ�Ϊ��
Status Empty(SqList L) {
    if (L.length == 0){
        printf("LineList is Empty!");
        return True;
    }
}

//����
Status Full(SqList L) {
    if (L.length >= L.Maxsize){
        printf("LineList is Full!");
        return True;
    }
}

//����
Status InsertList(SqList *L, int location, int value) {

}

//ɾ��

//��λ����

//��ֵ����

//��̬��չ



















