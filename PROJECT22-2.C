//Print the sum of series: 1-2+3-4+5-6.... upto "n"....
#include <stdio.h>
int main() {
   // FOR "n" = even.....IN pairs (1-2) + (3-4) + (5-6).... har baar -1 hi aa rha hai..
   // if even numbers ex n= 6 , to teen pairs bnn rhe... so (-n/2)
   // FOR "n" = odd.... 1-2+3 
   int n, i, sum = 0;
   printf("No of terms in series:");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
   if (n%2 == 0)
   {
      sum = -(n/2);
      printf("The sum of series is:%d", sum);
      break;
   }
   else {
      sum = 1 + ((n-1)/2);
      printf("The sum of the series:%d", sum);
      break;
   }


}
return 0;
} 