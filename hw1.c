/*
파일 이름 : 2주차 개념 확인 과제
작성자 : 생활예술학과 202111459 고유민

2개의 정수를 입력 받아, AND, OR, XOR한 결과를 출력하는 프로그램을 작성하세요.
다음과 같이 입출력되면 됩니다.
Input two integers: 10 15
10 & 15 = 10
10 | 15 = 15
10 ^ 15 = 5
*/

#include<stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 15;
	int num3 = num1 & num2;	//num1과 num2의 비트단위 & 연산
	printf("AND 연산의 결과 : %d \n", num3);
	return 0;
}

{
	int num1 = 10;
	int num2 = 15;
	int num3 = num1 | num2;
	printf("OR 연산의 결과 : %d \n", num3);
	return 0;
}

{
	int num1 = 10;
	int num2 = 15;
	int num3 = num1 ^ num2;
	printf("XOR 연산의 결과 : %d \n", num3);
	return 0;
}