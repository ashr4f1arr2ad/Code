#include<stdio.h>

int main() {
    int n, reverse = 0, remainder;
    //Declare reverse for store calculate value
    //Remainder will remain each time divided the number with by 10
    printf("Enter the number to reverse= ");
    scanf("%d", &n);
    while(n > 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    printf("Reverse number is= %d", reverse);
    return 0;
}