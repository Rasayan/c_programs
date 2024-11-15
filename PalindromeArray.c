#include <stdio.h>

int main() {
    int arr[100], n, i, flag = 1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - i - 1]) {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Array is a palindrome\n");
    else
        printf("Array is not a palindrome\n");
    return 0;
}
