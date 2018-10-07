#define _CRT_SECURE_NO_WARNINGS
#include "BFS.h"

void visit(ALGraph G, int vex) {
	printf("%c ", G.vertices[vex].data);
}

void BSFTravese(ALGraph G) {
	int i;
	SqQueue Q;
	int vex;
	ArcNode *p = NULL;
	printf("广度优先遍历结果：");
	for (i = 0; i < G.vexnum; ++i) {
		visited[i] = 0;
	}
	InitQueue(&Q);
	for (i = 0; i < G.vexnum; ++i) {
		if (!visited[i]) {
			visited[i] = 1;
			visit(G, i);
			EnQueue(&Q, i);
			while (!QueueEmpty(Q)) {
				DeQueue(&Q, &vex);
				p = G.vertices[vex].firstarc;
				while (p) {
					if (!visited[p->adjvex]) {
						visited[p->adjvex] = 1;
						visit(G, p->adjvex);
						EnQueue(&Q, p->adjvex);
					}
					p = p->nextarc;
				}
			}
		}
	}
	printf("\n");
}