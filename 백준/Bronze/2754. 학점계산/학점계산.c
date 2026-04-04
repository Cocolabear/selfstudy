#include <stdio.h>
int main(void)
{
    char gr[3];
    scanf("%s", gr);
    float score=0;
    switch(gr[0])
    {
        case 'A': score=4.0; break;
        case 'B': score = 3.0; break;
        case 'C': score = 2.0; break;
        case 'D': score = 1.0; break;
        case 'F': score = 0.0; break;
    }
    if (gr[1]=='+')
        score+=0.3;
    else if(gr[1]=='-')
        score-=0.3;
    printf("%.1f",score);
}