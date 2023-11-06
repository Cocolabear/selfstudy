#include <stdio.h>

int main() {
	int in;
	int max = 0;
	int pose = 0;

	for (int i = 1; i < 10; ++i) {
		scanf("%d", &in);
		if (in > max) {
			max = in;
			pose = i;
		}
	}
    
	printf("%d\n%d\n", max, pose);
	return 0;
}