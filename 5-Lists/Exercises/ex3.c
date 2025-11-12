#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define LIST_SIZE 100

int main()
{
    int ALL_LIST[LIST_SIZE];

    int EVEN_LIST[LIST_SIZE];
    int EVEN_TOTAL = 0;

    int ODD_LIST[LIST_SIZE];
    int ODD_TOTAL = 0;

    srand(time(0));

    for (int i = 0; i <= LIST_SIZE; i++)
    {
        ALL_LIST[i] = rand() % LIST_SIZE;

        if(ALL_LIST[i] % 2 == 0){
            EVEN_LIST[i] = ALL_LIST[i];
            EVEN_TOTAL += EVEN_LIST[i];
        }

        else{
            ODD_LIST[i] = ALL_LIST[i];
            ODD_TOTAL += ODD_LIST[i];
        }
    }

    printf("Çift sayıların ortalaması %d'dir!");
    printf("Tek sayıların toplamı %d'dir!");

    /*
    Devam edecek...
    */

    return 0;

}