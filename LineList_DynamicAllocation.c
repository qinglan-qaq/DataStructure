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
        printf("LineList is empty!\n");
        return False;
    }

    L->length = 0;
    L->Maxsize = InitSize;
    printf("Init Success!\n");
    return True;
}

//�ж��Ƿ�Ϊ��
Status Empty(SqList L) {
    if (L.length == 0){
        printf("LineList is Empty!\n");
        return True;
    }
}

//����
Status Full(SqList L) {
    if (L.length >= L.Maxsize){
        printf("LineList is Full!\n");
        return True;
    }
}

//����
Status InsertList(SqList *L, int loca, int value) {
//    �жϲ���λ���Ƿ�Ϸ�
    if (loca < 1 || loca > L->length + 1){
        printf("the location is invalid !\n");
        return False;
    }
//    �ж��Ƿ�����
    if (Full(*L)){
        return False;
    }
//    ��ʽ��ʼ�������,Ԫ�غ���
    for (int j = L->length;j >= loca;j --){
        L->data[j] = L->data[j - 1];
    }
    L->data[loca - 1] = value;
    L->length ++;
    printf("Insert Success~\n");
    return True;
}

//ɾ��,value�Ƿ��ر�ɾ����ֵ
Status Delete(SqList *L,int i ,int *value){
    //    �жϲ���λ���Ƿ�Ϸ�
    if ( i < 1 || i > L->length){
        printf("the location is invalid !\n");
        return False;
    }
    value = L->data[i -1];
    for (int j = i;j <= L->length;j ++){
        L->data[j-1] = L->data[j];
    }
//    ���Ա��һ
    L->length --;
    printf("Insert Success !The delete element is %d\n",value);
    return True;
}
//��λ����
Status SearchByLocation(SqList L,int i){
    if (i < 1 || i >L.length){
        printf("Error! invalid location \n");
        return False;
    }
    printf("Found! the value is %d\n",L.data[i-1]);
    return True;
}
//��ֵ����
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

//��̬��չ





int main(){

    return 0;
}













