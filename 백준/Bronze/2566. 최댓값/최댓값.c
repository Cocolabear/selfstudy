#include <stdio.h>
int main()
{
    int ary[9][9]={ };
    int max =0, row=1, col=1;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d",&ary[i][j]);
            if(max<ary[i][j])
            {
                max=ary[i][j];
                row=i+1;
                col=j+1;
            }
        }
    }
    printf("%d\n%d %d", max, row, col);
    return 0;
}