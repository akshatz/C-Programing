#define println() printf("\n")
#include <stdio.h>
void main() {
    int n, reversedN = 0, remainder, originalN;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalN = n;
    // reversed integer is stored in reversedN
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
    // palindrome if orignalN and reversedN are equal
    if (originalN == reversedN){
        printf("%d is a palindrome.", originalN);
        println();
    }
    else{
        printf("%d is not a palindrome.", originalN);
        println();
    }
}