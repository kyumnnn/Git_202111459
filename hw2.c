/*
���� �̸� : 2���� ���� Ȯ�� ����
�ۼ��� : ��Ȱ�����а� 202111459 ������

2���� ������ �Է� �޾�, AND, OR, XOR�� ����� ����ϴ� ���α׷��� �ۼ��ϼ���.
������ ���� ����µǸ� �˴ϴ�.
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
	int num3 = num1 & num2;	//num1�� num2�� ��Ʈ���� & ����
	printf("AND ������ ��� : %d \n", num3);
	return 0;
}

{
	int num1 = 10;
	int num2 = 15;
	int num3 = num1 | num2;
	printf("OR ������ ��� : %d \n", num3);
	return 0;
}

{
	int num1 = 10;
	int num2 = 15;
	int num3 = num1 ^ num2;
	printf("XOR ������ ��� : %d \n", num3);
	return 0;
}