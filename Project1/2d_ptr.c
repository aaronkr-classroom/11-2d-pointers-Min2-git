#include <stdio.h>

int main() {
	short data = 3,
		* p = &data,
		**pp = &p;

	printf("[Before  ] data: %d\n", data);
	*p = 40;
	printf("[Use *p  ] data: %d\n", data);
	**pp = 500;
	printf("[Use **pp] data: %d\n", data);



	return 0;
}