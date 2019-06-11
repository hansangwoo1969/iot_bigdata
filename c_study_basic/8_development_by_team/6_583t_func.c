#include "..\header\7_avl.h"  // <- Windows Style
//window상에서 linux style O
//#include "header/7_avl.h" // Linux Style
// linux상에서 windows style X
//#include "C:\iot_bigdata\c_study_basic\8_development_by_team\header\7_val.h"
// 절대경로 지정시 가장 큰 문제점은 상호운영성이 떨어진다.
// 컴퓨터마다 절대경로가 다른경우
// linux상에서 \가 인식이 되지 않는 경우
void Increment(void) {
	num++;
}

int GetNum(void) {
	return num;
}

