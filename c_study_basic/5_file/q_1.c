#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {
	FILE* fp = fopen("mystory.txt", "wt");
	fputs("#이름: 한상우 \n", fp);
	fputs("#주민번호: 190207-1807421 \n", fp);
	fputs("#전화번호: 010-0001-01421 \n", fp);
	fclose(fp);

	return 0;
}
