#include <stdio.h>

int main() {
    int n, base[10], limit[10],  seg_no, offset,  physical_address;

    printf("Enter number of segments: ");
    scanf("%d", &n);

    // Input base and limit for each segment
    printf("\nEnter base and limit for each segment:\n");
    for(int i = 0; i < n; i++) {
        printf("Segment %d Base: ", i);
        scanf("%d", &base[i]);
        printf("Segment %d Limit: ", i);
        scanf("%d", &limit[i]);
    }

    // Input logical address
    printf("\nEnter segment number: ");
    scanf("%d", &seg_no);

    printf("Enter offset: ");
    scanf("%d", &offset);

    // Check validity
    if(seg_no >= n) {
        printf("Invalid Segment Number!\n");
    } 
    else if(offset >= limit[seg_no]) {
        printf("Offset exceeds segment limit! (Trap/Error)\n");
    } 
    else {
        physical_address = base[seg_no] + offset;

        printf("\nSegment Number: %d", seg_no);
        printf("\nOffset: %d", offset);
        printf("\nBase Address: %d", base[seg_no]);
        printf("\nPhysical Address: %d\n", physical_address);
    }

    return 0;
}
