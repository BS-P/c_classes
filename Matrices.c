#include <stdio.h>

int main() {
    
    int a[3][3] = { {2, 3, 4}, {6, 7, 8}, {0, 9, 7} };
    int b[3][3] = { {1, 2, 3}, {9, 5, 3}, {6, 3, 5} };
    int c[3][3] = {0};  

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];  
            }
        }
    }

    
    printf("Resultant matrix C is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);  
        }
        printf("\n");
    }

    return 0;
}

