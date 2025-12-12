#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char password[100];
    int lengthOK = 0, hasUpper = 0, hasLower = 0, hasDigit = 0;

    printf("パスワードを入力してください：");
    scanf("%99s", password);

    int len = strlen(password);

    // ① 8文字以上
    if (len >= 8) {
        lengthOK = 1;
    }

    // ② 大文字・小文字
    // ③ 数字（延長）
    for (int i = 0; i < len; i++) {
        if (isupper(password[i])) hasUpper = 1;
        if (islower(password[i])) hasLower = 1;
        if (isdigit(password[i])) hasDigit = 1;
    }

    // 強いパスワードか判定
    if (lengthOK && hasUpper && hasLower && hasDigit) {
        printf("このパスワードは強いです！\n");
    } else {
        printf("パスワードは強くありません。改善点：\n");
        if (!lengthOK) printf("・8文字以上にする\n");
        if (!hasUpper) printf("・大文字を入れる\n");
        if (!hasLower) printf("・小文字を入れる\n");
        if (!hasDigit) printf("・数字を入れる\n");
    }

    return 0;
}