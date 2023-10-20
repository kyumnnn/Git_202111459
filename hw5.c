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

    printf("양의 정수를 입력하세요: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber > 0) 
    {
        printf("%d의 2진수 표현: ", decimalNumber);
        decimalToBinary(decimalNumber);
        printf("\n");
    }
    else 
    {
        printf("양의 정수를 입력해야 합니다.\n");
    }

    return 0;
}