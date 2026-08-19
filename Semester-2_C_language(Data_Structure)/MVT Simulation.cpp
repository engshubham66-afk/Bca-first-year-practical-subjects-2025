#include <stdio.h>

int main() {
    int totalMemory, processSize[10];
    int n, allocated = 0;

    printf("Enter total memory size: ");
    scanf("%d", &totalMemory);

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("\nEnter size of each process:\n");
    for(int i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &processSize[i]);
    }

    printf("\nProcess No.\tProcess Size\tStatus\n");

    for(int i = 0; i < n; i++) {
        if(allocated + processSize[i] <= totalMemory) {
            allocated += processSize[i];
            printf("%d\t\t%d\t\tAllocated\n", i + 1, processSize[i]);
        } else {
            printf("%d\t\t%d\t\tNot Allocated (Insufficient Memory)\n", i + 1, processSize[i]);
        }
    }

    printf("\nTotal Memory: %d", totalMemory);
    printf("\nMemory Allocated: %d", allocated);
    printf("\nMemory Remaining: %d\n", totalMemory - allocated);

    return 0;
}
