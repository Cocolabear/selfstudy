//int 앞 long 한개당 4바이트 저장공간

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<(n/4); i++)
        printf("long ");
    printf("int");
    return 0;
}