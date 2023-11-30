#include <stdio.h>
#include <ctype.h>
#define _CRT_SECURE_NO_WAENINGS

int main() {
    char str[100];
    printf("문자열을 입력하세요: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) { // 대문자인 경우 소문자로 변환
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i])) { // 소문자인 경우 대문자로 변환
            str[i] = toupper(str[i]);
        }
        printf("%c", str[i]); // 변경된 문자 또는 그대로인 문자 출력
    }

    return 0;
}
