#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	int *mem = (int *)malloc(sizeof(int));
	*mem = 4;
	return 0;
}
