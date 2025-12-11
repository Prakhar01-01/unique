// To find the factorial of a given number..
#include <stdio.h>
int main() {
 int n, i, value =1;
printf("Enter the number:");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
    value= value * i;
    
}
printf("The factorial is:%d", value);

return 0;
}  
// 5 .. 5*4*3*2*1