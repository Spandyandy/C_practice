#include <stdio.h>

int main(void){
	int i;
	int* p;

	int a[5] = {10, 20, 30, 40,50};
	int n = sizeof(a) / sizeof(int);
	p = a;
	printf(" sizeof(a) = %d byte, a = %u \n", sizeof(a), a);
	printf(" sizeof(a) = %d byte, p = %u \n", sizeof(p), p);

	for(i = 0; i < n; i++){
		printf(" *(p+%d) = %2d, %u \n", i, *(p+i), p+i);
	}
	return 0;
}