//WAP to print:
//****
//*** 
//** 
//* 

#include <stdio.h>
int main() 
{
    int n, i, j;
    printf("Enter the number of lines:");
    scanf("%d", &n);

    

for ( i = 1; i <= n; i++) // bahr vala loop gernally number of rows ke liye hi hota hai...
{
    for ( j = 1; j <= (n+1-i); j++)     //1st lime me 4 star phir 2nd me 3 star.. basically linr aur star ka sum hamersha 5 hi hora tha, 1+4=2+3,... i+j=5, j=5-i, ...and 5 is nothing but 1 more than the number of lines , so j= (n+1) -i
    {
        printf("*");
        
    }
    printf("\n");
}





return 0;
}

