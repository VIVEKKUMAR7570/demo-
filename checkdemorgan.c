#include <stdio.h>

int main() {
    int A, B;

    printf("A B | LHS RHS\n");
    printf("----------------\n");

    for(A = 0; A <= 1; A++) {
        for(B = 0; B <= 1; B++) {

            int LHS = !(A & B);     // (A.B)'
            int RHS = (!A) | (!B);  // A' + B'

            printf("%d %d |  %d   %d\n", A, B, LHS, RHS);
        }
    }

    return 0;
}