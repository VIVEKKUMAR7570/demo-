#include <stdio.h>

int main() {
    // 1. Setup the array and pointer
    int a[5] = {10, 20, 30, 40, 50};
    int *pa = a; // pa points to the start (10)

    // 2. Accessing the 3rd element (Index 2, Value 30)
    
    // Method A: Normal Array Indexing
    printf("Using Array Syntax a[2]: %d\n", a[2]);

    // Method B: Pointer Arithmetic
    // (pa + 2) finds the address, * gets the value
    printf("Using Pointer Syntax *(pa + 2): %d\n", *(pa + 2));

    // Method C: Mixing them (Yes, this works!)
    // You can use [] on a pointer
    printf("Using Pointer Subscript pa[2]: %d\n", pa[2]);
    
    // Method D: The 'weird' one
    // You can use pointer math on the array name directly
    printf("Using Array Name as Pointer *(a + 2): %d\n", (a + 2));

    return 0;
}