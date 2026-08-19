#include <stdio.h>

int main() {
    int pages, frames, pageTable[10];
    int logicalAddress, pageNumber, offset;
    int frameNumber, physicalAddress, frameSize;

    printf("Enter number of pages: ");
    scanf("%d", &pages);

    printf("Enter number of frames: ");
    scanf("%d", &frames);

    printf("Enter frame size: ");
    scanf("%d", &frameSize);

    // Input page table mapping
    printf("\nEnter page table (frame number for each page):\n");
    for(int i = 0; i < pages; i++) {
        printf("Page %d -> Frame: ", i);
        scanf("%d", &pageTable[i]);
    }

    // Input logical address
    printf("\nEnter logical address: ");
    scanf("%d", &logicalAddress);

    // Calculate page number and offset
    pageNumber = logicalAddress / frameSize;
    offset = logicalAddress % frameSize;

    if(pageNumber >= pages) {
        printf("Invalid Page Number!\n");
    } else {
        frameNumber = pageTable[pageNumber];
        physicalAddress = (frameNumber * frameSize) + offset;

        printf("\nPage Number: %d", pageNumber);
        printf("\nOffset: %d", offset);
        printf("\nFrame Number: %d", frameNumber);
        printf("\nPhysical Address: %d\n", physicalAddress);
    }

    return 0;
}
