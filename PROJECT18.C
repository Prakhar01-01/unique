 //TO COUNT THE DIGITS IN A NUMBER
#include <stdio.h>
int main() {
 int n, count=0;
printf("Enter a number");
scanf("%d", &n);
while (n>0)
{
   n/=10; // 12345/10= 1234 aur count "1" se inc ho jayega and loop continues
   count++;
}
printf("%d", count);
return 0;
}  