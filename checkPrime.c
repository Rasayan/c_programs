#include <stdio.h>

int main() {
    int n, flag = 1;
    scanf("%d", &n);
    if (n <= 1) flag = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag) printf("Prime\n");
    else printf("Not Prime\n");
    return 0;
}
