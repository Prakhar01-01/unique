//WAP to print:
//*****
//***** 
//***** 
//***** 

#include <stdio.h>
int main() 
{
    int n, m, i, j;
    printf("Enter the number of lines:");
    scanf("%d", &n);

    printf("Enter the number of stars in each line:");
    scanf("%d", &m);

for ( i = 1; i <= n; i++)
{
    for ( j = 1; j <= m; j++)
    {
        printf("*");
        
    }
    printf("\n");
}





return 0;
}

