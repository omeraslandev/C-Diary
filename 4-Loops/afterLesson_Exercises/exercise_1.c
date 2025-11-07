#include <stdio.h>

int main()
{
    int i = 5;
    
    int x = (i++) + (i++);

    printf("%d ",x);
}