#include <stdio.h>
#pragma warning (disable:4996)
#define ARR_SIZE 2    // #define [키워드][상수]  
// 예) #define MAX_SIZE 3
//     int arr[MAX_SIZE];
//     int arr[3];   컴파일시 전처리가 일어난다.
typedef struct student {
	char name[20];
	char stdnum[ 20];
	char school[20];
	char major[20];
	int year;
} Student;

void ShowStudentInfo(Student* sptr){
	printf("학생 이름: %s \n", sptr->name);
	printf("학생 고유번호: %s \n", sptr->stdnum);
	printf("학교 이름: %s \n", sptr->school);
	printf("선택 전공: %s \n", sptr->major);
	printf("학년: %s \n", sptr->year);
}

int main(void){

	// const int MAX_SIZE=3;
	// int MAX_SIZE = 3;
	// Student arr[MAX_SIZE];
	Student arr[ARR_SIZE];
	int i;

	for (i = 0; i < ARR_SIZE; i++) {
		printf("이름: "); scanf("%s", arr[i].name);
		printf("번호: "); scanf("%s", arr[i].stdnum);
		printf("학교: "); scanf("%s", arr[i].school);
		printf("전공: "); scanf("%s", arr[i].major);
		printf("학년: "); scanf("%d", &arr[i].year);
	}

	for (i = 0; i < ARR_SIZE; i++)
		ShowStudentInfo(&arr[i]);
	return 0;
}
