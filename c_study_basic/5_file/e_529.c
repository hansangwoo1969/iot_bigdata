#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {
	
	// ���ϻ���
	FILE* fp=fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	// ���ϰ���
	fp = fopen("text.txt", "rt");

	// SEEK_END
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	// SEEK_SET
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	// SEEK_CUR
	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));

	fclose(fp);
	return 0;
}
