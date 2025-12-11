//Given three points (x1,y1), (x2,y2), (x3,y3) , Write a prog to check if all three points fall on one st line..
#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("Enter x1");
    scanf("%d", &x1);
    printf("Enter x2");
    scanf("%d", &x2);
    printf("Enter x3");
    scanf("%d", &x3);
    printf("Enter y1");
    scanf("%d", &y1);
    printf("Enter y2");
    scanf("%d", &y2);
    printf("Enter y3");
    scanf("%d", &y3);
   
    if ((y2-y1)/(x2-x1) == (y3-y2)/(x3-x2)) 
    {
        printf("It's a ST Line");
    }
    else 
    { 
        printf("It's Not");
    }
 


    return 0;
}