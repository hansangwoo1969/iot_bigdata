#include <stdio.h>

void main(){
	char str[50]="I like C programming";
	printf("string: %s\n",str);

	//str[8] = '\0';
	str[8] = 0;
	printf("string: %s \n", str);

	str[6] = '\0';
	printf("string: %s \n", str);


