#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) n *= -1;
    printf("%d\n", n);
}
