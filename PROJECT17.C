//TO find a number is prime or not...
#include <stdio.h>
int main() 
{
    int n, i, a=0;
    printf("Enter the number:");
    scanf("%d", &n);
    for (i=2; i<=(n-1); i++) {
    if (a%i==0)
    {
        a=1;
        break;
    }
}
    if (n==1) {
        printf("It's neither prime nor composite");
    }
    else if (a==0) {
        printf("It's a prime number");
    }
    else
    {
        printf("It's a composite number");
    }
    

return 0;
}