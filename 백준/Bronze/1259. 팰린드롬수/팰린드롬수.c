#include<stdio.h>
#include<string.h>
int main(){
    int i, j, an;
    char value[100000];
    while(scanf("%s", value) && value[0] != '0'){
        an = 1;
        j = strlen(value);
        
        for(i=0;i<j/2;i++){
            if(value[i] != value[j-1-i]){
                an = 0;
                break;
            }
        }
        if(an == 1){
            printf("yes\n");
        }
        else if (an == 0){
            printf("no\n");
        }
    }
}