//DISPLAY AP 100, 97,94,.... UPTO ALL TERMS WHICH ARE POSTIVE....
#include <stdio.h>
int main() 
{
    int a=100, i, n;
    printf("Enter the number:");
    scanf("%d", &n);
   // for (i=1; i<=34; i++) {
   for ( i = 1; a>0; i++)  //so it's not neceesary to use maths and find"34" to write i<=34 , just write a>0 , you'll get the same result
   {
    
 printf("%d\n", a);
        a= a-3;

    }


return 0;
}