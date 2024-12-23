#include <stdio.h>

int main() {
   	int array[]={5,2,3,4,1,6,8,9,7,0,9,5,100};
    int n = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min]) {
                min= j;
            }
        }
        if (min!= i) {
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

