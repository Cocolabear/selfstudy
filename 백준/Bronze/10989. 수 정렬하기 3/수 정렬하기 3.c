#include<stdio.h>

int main(){
	int N;
	int i, j;
	int num;
	
	int cnt[10001]={0,};
	scanf("%d", &N);
	
	for(i=0; i<N ;i++){
		scanf("%d", &num);
		cnt[num] = cnt[num] + 1;
	}
	
	for(i=1; i<10001; i++){
		for(j=1; j<=cnt[i]; j++){
			printf("%d\n", i);
		}
	}
	return 0;
}