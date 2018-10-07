/*
	@brief:广度优先遍历（邻接表）
	@author:WavenZ
	@time:2018/10/7
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ALGraph.h"
#include "BFS.h"
int main(int argc, char *argv[]) {

	ALGraph G;
	CreateGraph(&G);
	BSFTravese(G);
	system("pause");
	return 1;
}