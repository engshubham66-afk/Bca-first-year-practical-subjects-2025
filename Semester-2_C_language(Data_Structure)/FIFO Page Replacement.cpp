#include <stdio.h>

int main() {
    int frames, pages;
    int pageRef[50], frame[10];
    int i, j, k, flag, pageFaults = 0;
    int index = 0; // to track FIFO position

    printf("Enter number of frames: ");
    scanf("%d", &frames);

    printf("Enter number of pages: ");
    scanf("%d", &pages);

    printf("Enter page reference string:\n");
    for(i = 0; i < pages; i++) {
        scanf("%d", &pageRef[i]);
    }

    // Initialize frames to -1
    for(i = 0; i < frames; i++) {
        frame[i] = -1;
    }

    printf("\nPage\tFrames\n");

    for(i = 0; i < pages; i++) {
        flag = 0;

        // Check if page already in frame (hit)
        for(j = 0; j < frames; j++) {
            if(frame[j] == pageRef[i]) {
                flag = 1;
                break;
            }
        }

        if(flag == 0) { // Page Fault
            frame[index] = pageRef[i];
            index = (index + 1) % frames;
            pageFaults++;
        }

        // Display frames
        printf("%d\t", pageRef[i]);
        for(k = 0; k < frames; k++) {
            if(frame[k] != -1)
                printf("%d ", frame[k]);
            else
                printf("- ");
        }
        printf("\n");
    }

    printf("\nTotal Page Faults = %d\n", pageFaults);

    return 0;
}
