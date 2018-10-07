#pragma once
#include <stdio.h>

#define Status int 
#define MAXQSIZE 20
#define QElementType  int
typedef struct {
	QElementType *base;
	int front;
	int rear;
}SqQueue;

Status InitQueue(SqQueue *Q);
int QueueLength(SqQueue *Q);
int QueueEmpty(SqQueue Q);
Status EnQueue(SqQueue *Q, QElementType e);
Status DeQueue(SqQueue *Q, QElementType *e);
