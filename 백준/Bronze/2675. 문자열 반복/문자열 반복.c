#include <stdio.h>
#include <string.h>

int main() {

	int q, r; 
	char s[20];
	
	scanf("%d", &q);

	for (int i = 0; i < q; i++) { 
		scanf("%d %s", &r, &s);

		for (int i = 0; i < strlen(s); i++) {
			for (int j = 0; j < r; j++)
				printf("%c", s[i]);
		}
		printf("\n");
	}
    
	return 0;
}