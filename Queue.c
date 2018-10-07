#define _CRT_SECURE_NO_WARNINGS
#include "Queue.h"

Status InitQueue(SqQueue *Q) {
	Q->base = (QElementType*)malloc(MAXQSIZE * sizeof(QElementType));
	if (!Q->base) return 0;
	else {
		Q->front = Q->rear = 0;
	}
	return 1;
}

int QueueLength(SqQueue *Q) {
	return (Q->rear = Q->front + MAXQSIZE) % MAXQSIZE;
}
Status EnQueue(SqQueue *Q, QElementType e) {
	if ((Q->rear + 1) % MAXQSIZE == Q->front) return 0;
	Q->base[Q->rear] = e;
	Q->rear = (Q->rear + 1) % MAXQSIZE;
	return 1;
}
Status DeQueue(SqQueue *Q, QElementType *e) {
	if (Q->rear == Q->front) return 0;
	*e = Q->base[Q->front];
	Q->front = (Q->front + 1) % MAXQSIZE;
	return 1;
}
int QueueEmpty(SqQueue Q) {
	if (Q.rear == Q.front)
		return 1;
	else return 0;
}