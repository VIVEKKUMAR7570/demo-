#include <stdio.h>

int main() {
    int c;
    int nl = 0, tab = 0, blank = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            nl++;
        } else if (c == '\t') {
            tab++;
        } else if (c == ' ') {
            blank++;
        }
    }

    printf("Newlines = %d\n", nl);
    printf("Tabs = %d\n", tab);
    printf("Blanks = %d\n", blank);

    return 0;
}
