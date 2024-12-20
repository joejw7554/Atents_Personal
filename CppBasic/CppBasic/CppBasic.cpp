#include <iostream> // F12로 선언을 확인할 수 있다.
#include "Test.h"

using namespace std;    // std 네임스페이스를 기본적으로 사용한다고 표시


int main()  // main 함수(엔트리포인트)
{
	Test day;
	// day.Test_1219_InputOutput();
	// day.Test_1219_DataType();
	// day.Test_1219_ArithmeticOperator();
	// day.Test_1220_Assignment();
	// day.Test_1220_Comparison();
	// day.Test_1220_Logical();
	// day.Test_1220_ControlStatement();
	// day.Test_1220_SlotMachine();
	// day.Test_1220_RPS();	

	// 포인터 : 메모리 주소를 저장하는 변수
	int a = 10;
	int* pAddress = nullptr;
	pAddress = &a;	// 주소연산자 &로 a변수의 주소를 가져오기

	int b = *pAddress;	// 간접참조연산자 *로 pAddress 주소에 들어있는 데이터를 int타입으로 가져오는 것

	int array[5] = { 1,3,5,7,9 };

	pAddress = array;
	pAddress += 1;	// int의 byte 사이즈만큼 증가

	// pAddress + 1;	array[1]; 같은 동작
	// *(pAddress + 5) = 30;	// 범위를 벗어나서 접근

	// 주말 과제
	// 텍스트 미로탐색 게임 만들기
	// 주변환경은 텍스트로만 표현
	// 이동은 1~4를 입력받아서 처리
	// 골인지점에 도착하면 게임 종료

	//조작
	//문자열 w a s d로 동서남북 이동 정의
	
	//플레이어 현재위치: Current Index 
	
	//지형
	//이동불가능인지 어떻게 알지?
		// nullptr 이면 산이고 enum값으로 평지/산/골인지점정의
		//Enum 이중배열로 로 지형 정의 : 1:산 2: 평지 3:골인지점
	//맵 2중 배열로 4*4 만들기
	//Srand 와 rand 를 활용하여 랜덤 이벤트 만들기 1: 몬스터 2: 함정 3: 이벤트없음
	

	//엔딩
	//플

	//조사식 할 때int(*)[3]) pAdress, //[4][3]기준
}

// F5 : 디버그 모드로 시작
// F10 : 디버그 모드에서 브레이크 포인트에서 멈췄을 때 누르면 브레이크 포인트에서 한 줄씩 진행한다. 
// F7 : 프로그램 빌드
// Shift + Del : 한줄씩 지우기
// Ctrl + D : 한줄 복사
// Ctrl + K + O : 헤더와 소스를 전환하기
// Ctrl + , : Go to All 메뉴 열기
// Ctrl + . : 빠른 작업 및 리팩토링
// Ctrl + Tab : 열려있는 창 이동
