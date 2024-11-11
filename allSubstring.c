#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter the string -- \n");
    scanf("%s", str);

    printf("\nSubstrings are -- \n");
    printf("\n");
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }
    return 0;
}
