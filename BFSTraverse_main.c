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