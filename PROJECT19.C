//WAP to print sum of digits of a given number...
#include <stdio.h>
int main() {
 int n, sum =0;
printf("Enter a number");
scanf("%d", &n);
while (n>0)
{
   sum = sum + n%10;   // yaha n%10 mtlb last digit hai.., intially sum = 0 tha ,ex= 12345%10= 5, 
   n/=10;             // abb akhri digit judne ke bdd second last digit ko laana hoga, ex= 12345/10= 1234 aur phir se same last digit add hoga and loop repeat hoga
}
printf("%d", sum);
return 0;
} 