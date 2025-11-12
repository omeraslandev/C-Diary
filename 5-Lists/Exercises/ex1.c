#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define LIST_SIZE 100

int main()
{
    int a[LIST_SIZE];

    int toplam = 0;

    srand(time(0));

    for (int i = 0; i <= LIST_SIZE; i++){
        a[i-1] = rand() % LIST_SIZE;

        printf("a dizisinin %d. indisi %d'dir reis!\n",i-1,a[i-1]);

        toplam += a[i-1];
    }

    /*
    Devam edecek....
    */
    printf("Kral, dizinin bulunduğu sayıların toplamı %d'dır!\n",toplam);

    return 0;
}