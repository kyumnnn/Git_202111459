#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ǥ���Է����� ������ ���� ������ �Է¹޾� �Ҽ��̸� "It is a prime number."��, �ƴϸ� "It is not a prime number."�� ����ϴ� ���α׷�
int main()
{
	double num;
	printf("���� ���� �Է� : ");
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