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

//函数初始化
void InitStack(SqStack *s){
//    注意初始化条件对后续判断条件的影响
    s->top = -1;
    printf("Stack Init Success\n");
}

//入栈
Status Push(SqStack *s,int i ){
//    检查栈是否已满
    if (s->top == Maxsize-1){
        printf("Push fail,stack is full\n");
        return False;
    }
    s->top += 1;
    s->data[s->top] = i;
    printf("Push success\n");
    return True;
}
//出栈并打印
Status Pop(SqStack *s ){
    int i = 0;
//    判断栈是否为空,注意初始化条件
    if (s->top== -1){
        printf("Pop fail,place check out\n");
        return False;
    }
    i = s->data[s->top];
    s->top -= 1;
    printf("Pop Success,the element is [%d]\n",i);
    return True;
}
//取栈顶元素
Status GetTopElement(SqStack s){
    int value = 0;
//    判断栈是否为空
    if (s.top == -1){
        printf("Stack is empty!place check out\n");
        return False;
    }
     value = s.data[s.top];
    printf("the Top element is %d\n",value);
    return True;
}
void ShowAllStack(SqStack s){
    if (s.top == -1){
        printf("the Stack is empty!\n");
        
    }
//    应该使用临时变量代替使用指针的变化
    for (int i = s.top;i >= 0;i --){
        printf("Stack [ %d ] = %d\n",i,s.data[i]);
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







