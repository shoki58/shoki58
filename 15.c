

#include <stdio.h>

int main()
{
    int k;
    printf("50メートルのタイムは何秒ですか？");
    scanf("%d", &k);
    
    if (k >= 7.0)
    {
        printf("田中だね！");
    }
    else
    {
        printf("足速いね！");
    }

    return 0;
}