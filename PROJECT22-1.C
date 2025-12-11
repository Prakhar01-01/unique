//Print the sum of series: 1-2+3-4+5-6.... upto "n"....
#include <stdio.h>
int main() {
    // (1+3+5+...) - (2+4+6+..)
int n,i, sum = 0;
printf("No of terms in series:");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
    if (i%2 == 0)       //bas ye observe krna tha ki saare odd wale add hote hai aur even subtract.....
    {
        sum = sum - i;
    }
    else {
        sum = sum + i;
    }
    
}
printf("The sum of the series:%d", sum);
   
return 0;
} 