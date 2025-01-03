#include<stdio.h>
static int Rev(int n){
    int num=0;
    if(n<10) num=n;
    else if(n<100){
        int a=n%10;
        int b=n/10;
        num=a*10+b;
    }
    else if(n<1000){
        int a=n%10;
        n/=10;
        int b=n%10;
        n/=10;
        int c=n%10;
        num=a*100+b*10+c;
    }
    else if(n<10000){
        int a=n%10;
        n/=10;
        int b=n%10;
        n/=10;
        int c=n%10;
        n/=10;
        int d=n%10;
        num=a*1000+b*100+c*10+d;
    }
    return num;
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",Rev(Rev(x)+Rev(y)));
}