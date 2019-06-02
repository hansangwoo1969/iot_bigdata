#include <stdio.h>
# pragma warning(disable:4996)
//
// 손을 못댐,, 교재답안 보고 이해할 것, 패턴파악
// 이름과 나이 교재446p양식에 맞게 문자열로 입력 "이정선 29"
// 이름은 세글자가 아닐수도, 영문일수도 있음.공백으로 이름과 나이 구분
// 두 사람의 정보를 입력받아 이름과 나이가 같은지 다른지,,,

int GetSpaceIndex(char str[]) {
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] == '')
			return i;
	}
	return -1; // 공백문자가 존재하지 않는 경우의 반환
}

int CompName(char str1[], char str2[]) {
	int idx1 = GetSpaceIndex(str1);
	int idx2 = GetSpaceIndex(str2);

	if (idx1 != idx2)  // 이름의 길이가 다르면 서로 다른 이름
		return 0;
	else
		return !stncmp(str1, str2, idx1);
}

int ComAge(char str1[], char str2[]) {
	int idx1 = GetSpaceIndex(str1);
	int idx2 = GetSpaceIndex(str2);
	int age1, age2;

	age1 = atoi(&str1[idx1 + 1]);  // str1[idx1]이 나이가 저장된 위치
	age2 = atoi(&str2[idx2 + 1]);  // str2[idx2]가 나이가 저장된 위치

	if (age1 == age2)
		return 1;
	else
		return 0;
}


int main (){
	char str1[20];
	char str2[20];
	
	printf("첫 번째 사람 정보 입력: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;
	

	printf("두 번째 사람 정보 입력: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;
		
	if (CompName(str1, str2))
		puts("이름이 동일 합니다.");
	else
		puts("이름이 동일하지 않습니다.");

	if (ComAge(str1, str2))
		puts("나이가 같습니다!");
	else
		puts("나이가 같지 않습니다.");

	return 0;



}



