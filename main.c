#include "string.h"
#include "stdio.h"
#include "main.h"

int multip(int a, int p);

void main(void)
{
    int x,y;
    x = test_const;
    y = multip(3,4);
    printf("%d 3time4 is equal to %f",test_const,y);
    return;
}
