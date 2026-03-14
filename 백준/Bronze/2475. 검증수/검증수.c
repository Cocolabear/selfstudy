#include <stdio.h>
int main()
{
    int N[5]={0};
    int ans=0;
    for(int i=0; i<5;i++)
    {
        scanf("%d", &N[i]);
        ans+=(N[i]*N[i]);
    }
    printf("%d",ans%10);
}