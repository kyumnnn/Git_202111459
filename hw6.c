#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int numbers[5]; // 5개의 정수를 저장할 배열

    // 5개의 정수를 입력 받음
    printf("Please input five integers:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // 홀수 출력
    printf("\nodd numbers:\n");
    for (int i = 0; i < 5; ++i)
    {
        if (numbers[i] % 2 != 0) {
            printf("%d\n", numbers[i]);
        }
    }

    // 짝수 출력
    printf("\neven numbers:\n");
    for (int i = 0; i < 5; ++i)
    {
        if (numbers[i] % 2 == 0)
        {
            printf("%d\n", numbers[i]);
        }
    }

    return 0;
}