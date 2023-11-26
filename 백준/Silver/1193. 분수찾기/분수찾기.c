#include <stdio.h>
 
int main(void)
{
    int X;
    scanf("%d", &X);
 
    int n=1;
    while(1){
        
        if((n-1)*n/2+1<=X && X<=n*(n+1)/2){ 
            break;
        }
        n++;
    }
 
    int nu, de;
    if(n%2==0){ 
        nu = X-(n-1)*n/2; 
        de = (n+1) - nu; 
    }
    else{   
        de = X-(n-1)*n/2;
        nu = (n+1) - de; 
    }
    printf("%d/%d", nu, de);
}