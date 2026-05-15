#include <stdio.h>

int main(void) {
    char input[21];

    scanf("%s", input);

    for(int i=0; input[i]!='\0'; i++)
    {
        if(input[i]>='A' && input[i]<='Z')
        {
            input[i]=input[i]+32;
        }
        else if(input[i]>='a' && input[i]<='z')
        {
            input[i]=input[i]-32;
        }
    }
    printf("%s",input);
}