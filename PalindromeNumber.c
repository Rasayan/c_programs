#include <stdio.h>

int main() {
    int num, rev = 0, temp, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0) {
        remainder = temp % 10;
        rev = rev * 10 + remainder;
        temp /= 10;
    }
    if(num == rev)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}
