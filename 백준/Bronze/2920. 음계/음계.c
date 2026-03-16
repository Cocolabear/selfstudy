#include <stdio.h>
int main()
{
    int N[8]={0};
    int ans=0;
    for(int i=0; i<8; i++)
    {
        scanf("%d", &N[i]);
    }
    for(int i=0; i<8; i++)
    {
        if(N[i]==i+1)
            ans++;
        else if(N[i]==8-i)
            ans--;
    }
    if(ans==8)
        printf("ascending");
    else if(ans==-8)
        printf("descending");
    else
        printf("mixed");
}