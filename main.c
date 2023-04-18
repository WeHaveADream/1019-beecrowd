#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s = 0, m = 0, s2 = 0, h = 0;

    scanf("%d", &s);

    h = s/3600;
    m = (s%3600)/60;
    s2 = s - m*60 - h*3600;

    printf("\n%d:%d:%d\n", h, m, s2);





    return 0;
}
