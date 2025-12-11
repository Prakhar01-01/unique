//Sum of AP 
#include <stdio.h>
int main() {
 int a, c, t;
 float sum;

 printf("Enter the first term:");
 scanf("%d", &a);

 printf("Enter the common difference:");
 scanf("%d", &c);

 printf("Enter the number of terms:");
 scanf("%d", &t);

sum = 0.5 * t * (2*a + (t-1)*c);
 printf("The sum of the AP:%2.f\n", sum);
return 0;
} 