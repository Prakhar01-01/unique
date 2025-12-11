//TO check if a number is even or odd
#include <stdio.h>
int main() {
 int n;
 printf("Enter your number:");
 scanf("%d" , &n);
 if (n % 2 == 0) {
    printf("Your number is an even number");
 }
 else {
    printf("Your number is a odd number");
 }
 
return 0;
} 