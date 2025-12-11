//WAP to print:
//****
//*** 
//** 
//* 
// BY USING NEW VARIABLES....
#include <stdio.h>
int main() 
{
    int n, i, j;
    printf("Enter the number of lines:");
    scanf("%d", &n);
int a=n;
    

for ( i = 1; i <= n; i++) 
    for ( j = 1; j <= a; j++) //isme kya hua ki nya variable introduce krne ke vjh se mathematical operations se bach gye....
    {
        printf("*");
        
    }
    a--;
    printf("\n");
}





return 0;
}

