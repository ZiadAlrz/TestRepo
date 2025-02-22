#include "string.h"
#include "stdio.h"
#include "main.h"

int multip(int a, int p);
int call_main()
{
    main();
}

void main(void)
{
    int x,y;
    x = test_const;
    y = multip(3,4);
    printf("%d 3time4 is equal to %f",test_const,y);
    return;
}

int multip(int a, int p)
{
    return a*p;
}
