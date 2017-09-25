#include <stdio.h>

int main(void){
	printf("%s\n", "Hello, World!");
	char x ; 
	do{
		x = getchar();
		printf("%c", x);
	}while(x != EOF);
	return 0;
}