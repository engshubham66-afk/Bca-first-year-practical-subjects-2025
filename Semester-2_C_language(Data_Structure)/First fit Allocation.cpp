// C Program to Simulate First Fit Contiguous Memory Allocation

#include <stdio.h>

int main() {
    int b[10], p[10], allocation[10];
    int m, n, i, j;

    // Input number of memory blocks
    printf("Enter number of memory blocks: ");
    scanf("%d", &m);

    // Input size of each block
    printf("Enter sizes of memory blocks:\n");
    for(i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // Input number of processes
    printf("Enter number of processes: ");
    scanf("%d", &n);

    // Input size of each process
    printf("Enter sizes of processes:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &p[i]);
        allocation[i] = -1;   // Initially not allocated
    }

    // First Fit Allocation
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(b[j] >= p[i]) {
                allocation[i] = j;

                // Reduce available memory in block
                b[j] = b[j] - p[i];
                break;
            }
        }
    }

    // Display Allocation Result
    printf("\nProcess No.\tProcess Size\tBlock No.\n");

    for(i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t", i + 1, p[i]);

        if(allocation[i] != -1)
            printf("%d\n", allocation[i] + 1);
        else
            printf("Not Allocated\n");
    }

    return 0;
}
