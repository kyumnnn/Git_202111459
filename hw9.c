#include <stdio.h>
#include <ctype.h>
#define _CRT_SECURE_NO_WAENINGS

int main() {
    char str[100];
    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) { // �빮���� ��� �ҹ��ڷ� ��ȯ
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i])) { // �ҹ����� ��� �빮�ڷ� ��ȯ
            str[i] = toupper(str[i]);
        }
        printf("%c", str[i]); // ����� ���� �Ǵ� �״���� ���� ���
    }

    return 0;
}
