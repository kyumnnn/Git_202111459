#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void decimalToBinary(int n)
{
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int decimalNumber;

    printf("���� ������ �Է��ϼ���: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber > 0) 
    {
        printf("%d�� 2���� ǥ��: ", decimalNumber);
        decimalToBinary(decimalNumber);
        printf("\n");
    }
    else 
    {
        printf("���� ������ �Է��ؾ� �մϴ�.\n");
    }

    return 0;
}