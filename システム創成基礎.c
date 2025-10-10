/**文字を表記するためのプラグラム**/

#include <stdio.h>

int main()
{
    /**名前を付けて数字を保存しとく**/
    int tanaka= 720;
    /**printfは、**の間に、表記したい文字を書く**/
    printf("タナカが%d人います!\n",tanaka);
    tanaka = tanaka/2;
    printf("\nあ!ごめん!タナカは%d人いました! ",tanaka);

    return 0;
}