//WAP TO REVERSE A NUMBER...
#include <stdio.h>
int main() {
    int n, rev = 0;
printf("Enter the number:");
scanf("%d", &n);

while (n!=0)
{
   rev= rev + n%10;
   rev = rev * 10;
   n= n/10;
}

rev = rev/10;
printf("%d", rev);

return 0;
} 


