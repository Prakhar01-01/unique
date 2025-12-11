// Take 3 no's input and tell if they can be the sides of triangle..
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the first number:");
    scanf("%d", &a);
    int b;
    printf("Enter the second number:");
    scanf("%d", &b);
    int c;
    printf("Enter the third number:");
    scanf("%d", &c);

    if ((a+b)>c && (a+c)>b && (b+c)>a)
    { 
        printf("They can be the sides of triangle");
    }
    else {
        printf("They can not be sides of triangle");
} 


    return 0;
}
