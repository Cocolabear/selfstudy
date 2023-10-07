#include <stdio.h>
int main()
{
    int H=0, M=0;
    scanf("%d %d", &H, &M);
    if(M>=45) printf("%d %d", H, M-45);
    else if(M<45 && H!=0) printf("%d %d", H-1, M+15);
    else if(M<45 && H==0) printf("%d %d", 23, M+15);
    return 0;
}