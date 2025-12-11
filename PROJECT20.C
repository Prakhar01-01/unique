//WAP  to print sum of all the even digits of a given number....
#include <stdio.h>
int main() 
{
    
  int n, sum=0;
  printf("Enter the number:");
  scanf("%d", &n);
  
  while (n>0)
  {
    if ((n%10)%2 == 0) {
    sum = sum + n%10; 
    }
    else {
        sum = sum;
    }
    n= n/10;
  }
  
printf("%d" , sum);
  


return 0;
}
