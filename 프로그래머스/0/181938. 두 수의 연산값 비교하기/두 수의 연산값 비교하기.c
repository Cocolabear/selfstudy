#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) 
{

    char str[20];
    sprintf(str, "%d%d", a, b);
    int num = atoi(str);
    if(num >= 2 * a * b)
        return num;
    else
        return 2 * a * b;
}