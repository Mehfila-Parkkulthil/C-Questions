/*Question 126
Star Hollow Rhombus */

#include <stdio.h>

int main() {
    int n;
    printf("Enter size n: ");
    if (scanf("%d", &n) != 1 || n < 2) return 0;

    for (int i = 1; i <= n; ++i) {
        // leading spaces (i-1)
        for (int s = 0; s < i-1; ++s) putchar(' ');

        if (i == 1 || i == n) {
            // top or bottom: print n stars
            for (int j = 0; j < n; ++j) putchar('*');
        } else {
            // middle rows: star, (n-2) spaces, star
            putchar('*');
            for (int j = 0; j < n-2; ++j) putchar(' ');
            putchar('*');
        }

        putchar('\n');
    }
    return 0;
}
