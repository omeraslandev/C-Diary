#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define LIST_SIZE 50

int main()
{
    /*
    int k = 10;
    int i = 5;
    int liste[20];

    liste[k++] = 100;

    printf("Listenin %d. indisi %d",k++,liste[k++]);
    */

    int value;
    int mylist[LIST_SIZE];

    for (int i = 0; i < LIST_SIZE; i++)
    {
        printf("Dizinin %d. indisi %d'dir.",i,mylist[i]);
    }


    return 0;
}