#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int numbers[5]; // 5���� ������ ������ �迭

    // 5���� ������ �Է� ����
    printf("Please input five integers:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Ȧ�� ���
    printf("\nodd numbers:\n");
    for (int i = 0; i < 5; ++i)
    {
        if (numbers[i] % 2 != 0) {
            printf("%d\n", numbers[i]);
        }
    }

    // ¦�� ���
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