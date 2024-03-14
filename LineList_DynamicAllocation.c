//
// Created by DELL on 2024/3/14.
//

#include "stdio.h"
#include "stdlib.h"
#define MaxSize 20
#define True 1
#define False 0

typedef int Status;

typedef struct {
    int *data;
    int Maxsize;
    int length;
} SqList;
