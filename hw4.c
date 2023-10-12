#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//표준입력으로 임의의 양을 정수를 입력받아 소수이면 "It is a prime number."를, 아니면 "It is not a prime number."를 출력하는 프로그램
int main()
{
	double num;
	printf("양의 정수 입력 : ");
	scanf("%lf", &num);

	if (num < 0)
		goto ONE;
	else
		goto OTHER;

ONE :
	printf("It is a prime number.");
	goto END;
OTHER:
	printf("It is not a prime number.");

END:
	return 0;
}