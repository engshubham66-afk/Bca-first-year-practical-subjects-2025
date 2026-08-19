#include <stdio.h>

int main() {
    int blockSize[10], processSize[10];
    int allocation[10];
    int m, n;

    printf("Enter number of memory blocks: ");
    scanf("%d", &m);

    printf("Enter number of processes: ");
    scanf("%d", &n);

    // Input block sizes
    printf("\nEnter sizes of memory blocks:\n");
    for(int i = 0; i < m; i++) {
        printf("Block %d: ", i);
        scanf("%d", &blockSize[i]);
    }

    // Input process sizes
    printf("\nEnter sizes of processes:\n");
    for(int i = 0; i < n; i++) {
        printf("Process %d: ", i);
        scanf("%d", &processSize[i]);
        allocation[i] = -1; // initially not allocated
    }

    // Best Fit Allocation
    for(int i = 0; i < n; i++) {
        int bestIndex = -1;

        for(int j = 0; j < m; j++) {
            if(blockSize[j] >= processSize[i]) {
                if(bestIndex == -1 || blockSize[j] < blockSize[bestIndex]) {
                    bestIndex = j;
                }
            }
        }

        if(bestIndex != -1) {
            allocation[i] = bestIndex;
            blockSize[bestIndex] -= processSize[i]; // reduce available size
        }
    }

    // Output
    printf("\nProcess No.\tProcess Size\tBlock No.\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t", i, processSize[i]);

        if(allocation[i] != -1)
            printf("%d\n", allocation[i]);
        else
            printf("Not Allocated\n");
    }

    return 0;
}
