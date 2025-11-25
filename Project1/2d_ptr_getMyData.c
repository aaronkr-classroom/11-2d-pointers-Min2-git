#include <stdio.h>
#include <malloc.h>

void GetMyData(int** q) {
	*q = (int*)malloc(8);
}

int main() {
	int* p;
	GetMyData(&p);
	*p = 5;

	printf("p (주소): %p\t", p);
	printf("p (값): %p\t", p);

	free(p);
}