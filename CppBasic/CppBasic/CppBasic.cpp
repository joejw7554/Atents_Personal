#include "Test.h"
#include <iostream>
#include <math.h>

#define PI 3.14f
using namespace std;

int main() //main 함수 (Entry Point)
{
	//Test::Test_1219_InputOutPut();


	int i = 0;
	int i2 = 2;
	cout << "Integer Size: " << sizeof(i) << "Byte" << endl;

	//태생적으로 오차가 있는 데이터타입이다
	float f = 30.54f;
	cout << "Float Val: " << f << endl;
	cout << "Float size: " << sizeof(f) << "Byte" << endl;

	
	auto c = 20.f;
	cout << "Auto size: " << sizeof(f) << "Byte" << endl;

	cout << PI << endl;

	float aa = (int)(10 + 10.5f);
	cout << aa << endl;

	int a = 35;
	int b = 6;
	int Num1 = a % b;
	int Num2 = a - (b * (a / b));

	cout << Num1 << endl;
	cout << Num2 << endl;



}
//F7 프로그램 빌드
//ctrl + , 코드검색
//ctrl +  tab : 열려있는 창 이동~
//Shift + del 한줄씩 지워~
//ctrl + d 한줄복사



