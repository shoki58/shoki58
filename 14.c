

#include <stdio.h>

int main(void)
{
    int diff;
    char large; //小文字
    char small; //大文字
    
    printf("アルファベットの小文字を入力してください>>>");
    scanf("%c" , &small);
    diff = 'a' - 'A';     // 'A'と'a'との文字の差
    small = small + diff; // 小文字を大文字に変換
    
    printf("小文字は %c    大文字は%c\n", small, large);
    
    return 0;
}