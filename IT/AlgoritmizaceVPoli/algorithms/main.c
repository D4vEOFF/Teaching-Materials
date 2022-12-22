
#include <stdio.h>

int main(void) {
    
    // Init
    int A[20] = {108, 151, 80, 80, 95, 22, 93, 124, 187, 200, 67, 89, 165, 104, 71, 18, 66, 155, 5, 94};
    
    /*
    int min = A[0]; int max = A[0];
    int n = sizeof(A)/sizeof(int);

    for (int i=0; i<n; i++){
        if (A[i] < min) min = A[i];
        if (A[i] > max) max = A[i];
    }

    printf("Min=%d, Max=%d\n", min, max);
    */

    /*
    int element;
    scanf("%d", &element);
    int n = sizeof(A)/sizeof(int);
    int index = -1;

    for (int i=0; i<n; i++){
        if (A[i] == element){
            printf("%d\n", i);
            break;
        }
    }
    */

    int sum;
    scanf("%d", &sum);
    int n = sizeof(A)/sizeof(int);

    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (A[i] + A[j]==sum)
                printf("i=%d, j=%d\n", i, j);
        }
    }

    return 0;
}