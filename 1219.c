#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int intelligence, stamina, charisma;
    
    srand(time(NULL));
    
    intelligence = (rand() % 18) + 1;
    stamina = rand() % (19 - intelligence) + 1;
    charisma = 20 - intelligence - stamina;
    
    printf("intelligence=%d stamina=%d charisma=%d\n",
           intelligence, stamina, charisma);
           
    if (intelligence >= stamina && intelligence >= charisma) 
        printf("class: mage\n");
    else if (stamina >= intelligence && stamina >= charisma)   
        printf("class: knight\n");
    else
        printf("class: thief\n");
        
    return 0;
}