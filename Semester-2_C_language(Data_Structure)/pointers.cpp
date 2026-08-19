#include <stdio.h>

int main() {
    int arr[5];
    int *ptr;
    int i;

    // Point the pointer to the first element of the array
    ptr = arr; 

    printf("Enter 5 integers:\n");

    // 1. Inputting values using pointers
    for (i = 0; i < 5; i++) {
        // (ptr + i) calculates the address of the next element
        scanf("%d", (ptr + i));
    }

    printf("\nDisplaying array elements using pointers:\n");

    // 2. Accessing values using dereferencing
    for (i = 0; i < 5; i++) {
        // *(ptr + i) gets the value stored at that memory address
        printf("Element %d: Value = %d | Address = %p\n", i, *(ptr + i), (ptr + i));
    }

    return 0;
}
