//
// Created by DELL on 2024/3/16.
//
#include "stdlib.h"
#include "stdio.h"

#define Maxsize 20
#define True 1
#define False 0

typedef int Status;
typedef struct {
    int data[Maxsize];
    int top;
} SqStack;

//������ʼ��
void InitStack(SqStack *s){
//    ע���ʼ�������Ժ����ж�������Ӱ��
    s->top = -1;
    printf("Stack Init Success\n");
}

//��ջ
Status Push(SqStack *s,int i ){
//    ���ջ�Ƿ�����
    if (s->top == Maxsize-1){
        printf("Push fail,stack is full\n");
        return False;
    }
    s->data[s->top] = i;
    s->top += 1;
    printf("Push success\n");
    return True;
}
//��ջ����ӡ
Status Pop(SqStack *s ){
    int i = 0;
//    �ж�ջ�Ƿ�Ϊ��,ע���ʼ������
    if (s->top== -1){
        printf("Pop fail,place check out\n");
        return False;
    }
    i = s->data[s->top];
    s->top -= 1;
    printf("Pop Success,the element is [%d]\n",i);
    return True;
}
//ȡջ��Ԫ��
Status GetTopElement(SqStack s){
    int value = 0;
//    �ж�ջ�Ƿ�Ϊ��
    if (s.top == -1){
        printf("Stack is empty!place check out\n");
        return False;
    }
     value = s.data[s.top];
    return True;
}
void ShowAllStack(SqStack s){
    if (s.top == -1){
        printf("the Stack is empty!\n");
        
    }
    while (s.top >= 0){
//        ע����ֹ����
        printf("Stack [ %d ] = %d\n",s.top,s.data[s.top]);
        s.top -= 1;
    }
    printf("\n");
}


int main (){
    int a;
    int value;
    SqStack stack;
    while (1){
        printf("-------------------------------------------\n");
        printf("-- 1.InitStack                     \n");
        printf("-- 2.GetTopElement                          \n");
        printf("-- 3.Push                         \n");
        printf("-- 4.Pop                         \n");
        printf("-- 5.ShowAllStack                         \n");
        printf("-- 0.exit                              \n");
        printf("-------------------------------------------\n");

        printf("place input your choice\n");
        scanf("%d",&a);
        switch (a){
            case 1:
                InitStack(&stack);
                break;
            case 2:
                GetTopElement(stack);
                break;
            case 3:
                printf("place input the value what you want push\n");
                scanf("%d",&value);
                Push(&stack,value);
                break;
            case 4:
                Pop(&stack);
                break;
            case 5:
                ShowAllStack(stack);
                break;
            case 0:
                printf("Thank you use!");
                exit(1);
                break;
        }
    }
    


    return 0;
}







