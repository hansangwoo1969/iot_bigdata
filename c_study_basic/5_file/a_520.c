#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {
//	FILE* src = fopen("ktx.jpg", "rb");
//  FILE* des = fopen("ktx_copied.jpg", "wb");
//	FILE* src = fopen("Hello.docx", "rb");
//	FILE* des = fopen("Hello_copied.docx", "wb");
	FILE* src = fopen("src.txt", "rb");
	FILE* des = fopen("dst.txt", "wb");

	char buf[20];
	int readCnt;


	if (src == NULL || des==NULL) {
		puts("파일오픈실패!");
		return -1;
	}
	
	while (1) {
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readCnt < sizeof(buf)) {
			if (feof(src) != 0) {
				fwrite((void*)buf, 1, readCnt, des);
				puts("파일복사 완료");
				break;
			}
			else
				puts("파일복사 실패");
			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}
	fclose(src);
	fclose(des);

	return 0;
}
