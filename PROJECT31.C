//WAP to print:
//1
//13 
//135
//1357 

#include <stdio.h>

int main() 
{
    int n, m, i, j;
    printf("Enter the number of lines:");
    scanf("%d", &n);

    printf("Enter the number of odd positive integers in each line");
    scanf("%d", & m);

for ( i = 1; i <= n; i++)
{
    for ( j = 1; j <= m; j++)   
    {
        printf("%d", 2*j - 1);
        
    }
    printf("\n");
}



return 0;
}