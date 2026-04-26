#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int sum = 0;
    int product = 1;

    for (int i = 0; i < num_list_len; i++) {
        sum += num_list[i];
        product *= num_list[i];
    }

    if (product < sum * sum) {
        return 1;
    } else {
        return 0;
    }
}