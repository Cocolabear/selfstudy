#include <stdio.h>
int main()
{
    int A[4]={0};
    char str[20];
    for(int i=0; i<3; i++)
    {
        scanf("%d", &A[i]);
    }

    sprintf(str, "%d%d", A[0], A[1]);
    printf("%d\n", (A[0]+A[1])-A[2]);
    printf("%d\n", atoi(str)-A[2]);
}